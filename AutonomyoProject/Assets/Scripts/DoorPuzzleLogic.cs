using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorPuzzleLogic : MonoBehaviour
{

    [SerializeField]
    private List<DoorObjectiv> objectivs = new List<DoorObjectiv>();

    [SerializeField]
    private GameObject door;

    [SerializeField]
    private GameObjectController sphere;

    [SerializeField]
    private Vector3 startAngle;

    [SerializeField]
    private Vector3 endAngle;

    [SerializeField]
    private int rotationSpeed;

    private bool done = false;
    private float startTime;
    private float distanceBetweenRot;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        bool checkAllObjDone = true;

        foreach(DoorObjectiv dobj in objectivs)
        {
            if (!dobj.succeed){
                checkAllObjDone = false;
            }
        }

        if (checkAllObjDone)
        {
            if (!done)
            {
                done = true;
                startTime = Time.time;
                distanceBetweenRot = Vector3.Distance(startAngle, endAngle);
                sphere._move = false;
            }
            else
            {
                float distanceTimeRot = (Time.time - startTime) * rotationSpeed;
                float relativeTimeRot = distanceTimeRot / distanceBetweenRot;
                door.transform.rotation = Quaternion.Lerp(Quaternion.Euler(startAngle), Quaternion.Euler(endAngle), relativeTimeRot);
            }
        }
        
    }
}
