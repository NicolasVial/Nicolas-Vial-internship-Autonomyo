using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// This class represents an objectiv for the door balance game. An objectiv is a checkpoint to reach with the green sphere. All the objectivs need to be reached in the correct order to open the door.
/// </summary>

public class DoorObjectiv : MonoBehaviour
{

    [SerializeField]
    private TextMeshProUGUI text;

    [SerializeField]
    private int objNb;

    private static int objCount = 0;
    public bool succeed = false;

    /// <summary>
    /// This method is triggered whenever another collider enters the collider attached to this object.
    /// It checks if the objective is the next objective to validate and if it is the case, it validates the objective.
    /// </summary>
    /// <param name="other">The other collider that hit the collider attached to this object.</param>
    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "DoorSphere" && objNb-1 == objCount)
        {
            succeed = true;
            text.color = new Color(0f, 1f, 0f, 1f);
            objCount += 1;
        }
    }

    /// <summary>
    /// This method sets the object count to 0.
    /// </summary>
    public void resetObjCount()
    {
        objCount = 0;
    }

    /// <summary>
    /// This method resets the objective.
    /// </summary>
    public void resetObj()
    {
        objCount = 0;
        succeed = false;
        text.color = Color.white;
    }
}
