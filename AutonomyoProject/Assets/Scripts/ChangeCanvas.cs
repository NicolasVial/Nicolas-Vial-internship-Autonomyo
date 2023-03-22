using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChangeCanvas : MonoBehaviour
{
    [SerializeField] GameObject[] canvases;

    // Deactivates all canvases in the list
    public void Start()
    {
      for (int i = 0; i < canvases.Length; i++)
      {
        canvases[i].SetActive(false);
      }
    }

    // Change canvas
    public void CanvasClick(GameObject activeCanvas)
    {
      for (int i = 0; i < canvases.Length; i++)
      {
        canvases[i].SetActive(false);
      }
      activeCanvas.SetActive(true);
    }

    // Pre-select a button (TV application requirement to know where the clicker is)
    public void SetDefaultSelected(Button selectedButton)
    {
      selectedButton.Select();
    }
}
