using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// The following script contains the logic of the story game door. It is used to open or close the first house's door when the player walks to it.
/// </summary>

public class StoryGameDoorLogic : MonoBehaviour
{
    [SerializeField] private GameObject door;
    [SerializeField] private float yAngle;
    [SerializeField] private float desiredDuration = 0.5f;
    [SerializeField] private AnimationCurve curve;

    private bool isOpen = false;
    private List<bool> doneTab = new List<bool>();
    private List<float> startTimeTab = new List<float>();
    private List<Vector3> startAngleTab = new List<Vector3>();
    private List<Vector3> endAngleTab = new List<Vector3>();


    /// <summary>
    /// Update method is called once per frame and is used to update what needs to be updated each frame.
    /// </summary>
    void Update()
    {
        if (doneTab.Count != 0)
        {
            doorMovement();
        }
    }

    /// <summary>
    /// This method is triggered whenever another collider enters the collider attached to this object.
    /// It checks if the other collider is the player and if it is the case, it opens the door.
    /// </summary>
    /// <param name="other">The other collider that hit the collider attached to this object.</param>
    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "WalkingInPlace")
        {
            toggleDoor();
        }
    }

    /// <summary>
    /// This method is triggered whenever another collider exits the collider attached to this object.
    /// It checks if the other collider is the player and if it is the case, it closes the door.
    /// </summary>
    /// <param name="other">The other collider that hit the collider attached to this object.</param>
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "WalkingInPlace")
        {
            toggleDoor();
        }
    }

    /// <summary>
    /// This method is used to open or close the door depending on the door's current state.
    /// </summary>
    private void toggleDoor()
    {
        if (isOpen)
        {
            closeDoor();
            isOpen = false;
        }
        else
        {
            openDoor();
            isOpen = true;
        }
    }

    /// <summary>
    /// This method handles the door's movements.
    /// </summary>
    private void doorMovement()
    {
        List<int> indexToRemove = new List<int>();

        float percentageComplete = 0f;
        if (!doneTab[0])
        {
            doneTab[0] = true;
            startTimeTab[0] = Time.time;
        }
        else
        {
            float elapsedTime = (Time.time - startTimeTab[0]);
            percentageComplete = elapsedTime / desiredDuration;
            door.transform.localEulerAngles = Quaternion.Lerp(Quaternion.Euler(startAngleTab[0]), Quaternion.Euler(endAngleTab[0]), curve.Evaluate(percentageComplete)).eulerAngles;
        }

        if (percentageComplete >= 1f)
        {
            indexToRemove.Add(0);
        }


        if (indexToRemove.Count != 0)
        {
            doneTab.RemoveAt(0);
            startTimeTab.RemoveAt(0);
            startAngleTab.RemoveAt(0);
            endAngleTab.RemoveAt(0);
        }
    }

    /// <summary>
    /// When this method is called, the door opens.
    /// </summary>
    private void openDoor()
    {
        if (doneTab.Count != 0)
        {
            doneTab.RemoveAt(0);
            startTimeTab.RemoveAt(0);
            startAngleTab.RemoveAt(0);
            endAngleTab.RemoveAt(0);
        }
        doneTab.Add(false);
        startTimeTab.Add(0f);
        startAngleTab.Add(door.transform.localEulerAngles);
        endAngleTab.Add(new Vector3(0f, yAngle, 0f));
    }

    /// <summary>
    /// When this method is called, the door closes.
    /// </summary>
    private void closeDoor()
    {
        if (doneTab.Count != 0)
        {
            doneTab.RemoveAt(0);
            startTimeTab.RemoveAt(0);
            startAngleTab.RemoveAt(0);
            endAngleTab.RemoveAt(0);
        }
        doneTab.Add(false);
        startTimeTab.Add(0f);
        startAngleTab.Add(door.transform.localEulerAngles);
        endAngleTab.Add(new Vector3(0f, 0f, 0f));
    }
}
