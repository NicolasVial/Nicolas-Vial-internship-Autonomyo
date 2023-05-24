using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AvatarMovement : MonoBehaviour
{
    [SerializeField] private GameObject headGO;
    [SerializeField] private GameObject hipGO;
    [SerializeField] private GameObject l_handGO;
    [SerializeField] private GameObject r_handGO;
    [SerializeField] private GameObject r_thumbGO;
    [SerializeField] private GameObject r_indexGO;
    [SerializeField] private GameObject r_middleGO;
    [SerializeField] private GameObject r_ringGO;
    [SerializeField] private GameObject r_littleGO;
    [SerializeField] private GameObject l_thumbGO;
    [SerializeField] private GameObject l_indexGO;
    [SerializeField] private GameObject l_middleGO;
    [SerializeField] private GameObject l_ringGO;
    [SerializeField] private GameObject l_littleGO;
    [SerializeField] private GameObject l_footGO;
    [SerializeField] private GameObject r_footGO;

    [SerializeField] private float desiredDuration = 2.5f;
    [SerializeField] private AnimationCurve curve;

    private GameObject[] gameObjects = new GameObject[16];
    private List<bool> doneTab = new List<bool>();
    private List<float> startTimeTab = new List<float>();
    private List<Vector3> startPosTab = new List<Vector3>();
    private List<Vector3> endPosTab = new List<Vector3>();
    private List<Vector3> startAngleTab = new List<Vector3>();
    private List<Vector3> endAngleTab = new List<Vector3>();
    private List<GameObject> GOTab = new List<GameObject>();

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(doneTab.Count != 0)
        {
            moveGameObjects();
        }
    }

    private void moveGameObjects()
    {
        List<int> indexToRemove = new List<int>();

        for (int i = 0; i < doneTab.Count; i++)
        {
            float percentageComplete = 0f;
            if (!doneTab[i])
            {
                doneTab[i] = true;
                startTimeTab[i] = Time.time;
            }
            else
            {
                float elapsedTime = (Time.time - startTimeTab[i]);
                percentageComplete = elapsedTime / desiredDuration;
                GOTab[i].transform.localRotation = Quaternion.Lerp(Quaternion.Euler(startAngleTab[i]), Quaternion.Euler(endAngleTab[i]), curve.Evaluate(percentageComplete));
                GOTab[i].transform.localPosition = Vector3.Lerp(startPosTab[i], endPosTab[i], curve.Evaluate(percentageComplete));
            }

            if (percentageComplete >= 1f)
            {
                indexToRemove.Add(i);
            }
        }

        for (int i = indexToRemove.Count - 1; i >= 0; i--)
        {
            doneTab.RemoveAt(i);
            startTimeTab.RemoveAt(i);
            startPosTab.RemoveAt(i);
            endPosTab.RemoveAt(i);
            startAngleTab.RemoveAt(i);
            endAngleTab.RemoveAt(i);
            GOTab.RemoveAt(i);
        }

    }

    private void goToPose(Vector3[] pos, Vector3[] angles)
    {
        for (int i = 0; i < gameObjects.Length; i++)
        {
            doneTab.Add(false);
            startTimeTab.Add(0f);
            startPosTab.Add(gameObjects[i].transform.localPosition);
            endPosTab.Add(pos[i]);
            startAngleTab.Add(gameObjects[i].transform.localEulerAngles);
            endAngleTab.Add(angles[i]);
            GOTab.Add(gameObjects[i]);
        }
    }
}
