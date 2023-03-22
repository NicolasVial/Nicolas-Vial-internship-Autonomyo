using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChangePanel : MonoBehaviour
{
    [SerializeField] GameObject[] panels;
    [SerializeField] GameObject activeAtStartUp;
    [SerializeField] Button selectedAtStartUpButton;

    // Deactivates all panels except the starting one of the canvas
    public void Start()
    {
      for (int i = 0; i < panels.Length; i++)
      {
        panels[i].SetActive(false);
      }
      activeAtStartUp.SetActive(true);
      selectedAtStartUpButton.Select();
    }

    // Change panel
    public void PanelClick(GameObject activePanel)
    {
      for (int i = 0; i < panels.Length; i++)
      {
        panels[i].SetActive(false);
      }
      activePanel.SetActive(true);
    }

    // Pre-select a button (TV application requirement to know where the clicker is)
    public void SetDefaultSelected(Button selectedButton)
    {
      selectedButton.Select();
    }

    public void SetDefaultToggle(Toggle selectedToggle)
    {
      selectedToggle.Select();
    }
}
