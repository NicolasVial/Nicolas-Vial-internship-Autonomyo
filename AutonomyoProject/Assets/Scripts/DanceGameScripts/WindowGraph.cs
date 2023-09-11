using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using CodeMonkey.Utils;
using System.Linq;


/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// The following script is used to dispay a graph showing the time done for each position in the dance game by the player.
/// </summary>

public class WindowGraph : MonoBehaviour
{
    [SerializeField] private Sprite circleSprite;
    [SerializeField] private TextMeshProUGUI maxYText;
    [SerializeField] private TextMeshProUGUI avgText;
    [SerializeField] private RectTransform graphContainer;
    [SerializeField] private MenuLogic menu;

    private List<GameObject> toDestroy = new List<GameObject>();

    /// <summary>
    /// This method is used to create a point on the graph at the correct position.
    /// </summary>
    /// <param name="anchoredPosition">The position where to create the circle on the graph.</param>
    private GameObject createCircle(Vector2 anchoredPosition)
    {
        GameObject circle = new GameObject("circle", typeof(Image));
        circle.transform.SetParent(graphContainer, false);
        circle.GetComponent<Image>().sprite = circleSprite;
        RectTransform rectTransform = circle.GetComponent<RectTransform>();
        rectTransform.anchoredPosition = anchoredPosition;
        rectTransform.sizeDelta = new Vector2(0.025f, 0.025f);
        rectTransform.anchorMin = new Vector2(0f, 0f);
        rectTransform.anchorMax = new Vector2(0f, 0f);
        return circle;
    }

    /// <summary>
    /// This method is to display the graph given the list of the values to display.
    /// </summary>
    /// <param name="valueList">The list containing the values to put on the graph.</param>
    public void showGraph(List<float> valueList)
    {
        destroyLastGraph();
        toDestroy.Clear();
        float yMax = valueList.Max() + 1.5f;
        maxYText.SetText(valueList.Max().ToString("0.0") + " sec");
        if(menu.language == 0)
        {
            avgText.SetText("Average Time = " + valueList.Average().ToString("0.0"));
        }
        else
        {
            avgText.SetText("Temps moyen = " + valueList.Average().ToString("0.0"));
        }
        float xDist = 0.14f;
        float yDist = 0.1f;
        float graphHeight = graphContainer.sizeDelta.y;
        GameObject previousCircle = null;
        for(int i = 0; i < valueList.Count; i++)
        {
            float xPosition = 0.19f + (i * xDist);
            float yPosition = yDist + (valueList[i] / yMax) * graphHeight;
            GameObject circle = createCircle(new Vector2(xPosition, yPosition));
            toDestroy.Add(circle);
            if(previousCircle != null)
            {
                createDotConnection(previousCircle.GetComponent<RectTransform>().anchoredPosition, circle.GetComponent<RectTransform>().anchoredPosition);
            }
            previousCircle = circle;
        }
    }

    /// <summary>
    /// This method creates a line between two points on the graph.
    /// </summary>
    /// <param name="dotPositionA">The position of the first point.</param>
    /// <param name="dotPositionB">The position of the second point.</param>
    private void createDotConnection(Vector2 dotPositionA, Vector2 dotPositionB)
    {
        GameObject conn = new GameObject("dotConnection", typeof(Image));
        toDestroy.Add(conn);
        conn.transform.SetParent(graphContainer, false);
        conn.GetComponent<Image>().color = new Color(1f, 1f, 1f, 0.25f);
        RectTransform rectTransform = conn.GetComponent<RectTransform>();
        Vector2 dir = (dotPositionB - dotPositionA).normalized;
        float distance = Vector2.Distance(dotPositionA, dotPositionB);
        rectTransform.sizeDelta = new Vector2(distance, 0.01f);
        rectTransform.anchorMin = new Vector2(0f, 0f);
        rectTransform.anchorMax = new Vector2(0f, 0f);
        rectTransform.anchoredPosition = dotPositionA + dir * distance * 0.5f;
        rectTransform.localEulerAngles = new Vector3(0f, 0f, UtilsClass.GetAngleFromVectorFloat(dir));
    }

    /// <summary>
    /// This method destroys the last graph.
    /// </summary>
    private void destroyLastGraph()
    {
        foreach(GameObject GO in toDestroy)
        {
            Destroy(GO);
        }
    }


}
