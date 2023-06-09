using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (doneTab.Count != 0)
        {
            doorMovement();
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "WalkingInPlace")
        {
            toggleDoor();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "WalkingInPlace")
        {
            toggleDoor();
        }
    }

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
