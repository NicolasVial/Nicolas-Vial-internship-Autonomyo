using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorSphere : MonoBehaviour
{
    [SerializeField]
    private List<DoorObjectiv> objectivs = new List<DoorObjectiv>();

    [SerializeField]
    private GameObject door;

    [SerializeField]
    private Vector3 startAngle;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "DoorWalls")
        {

        }
    }
}
