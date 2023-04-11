using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AvatarToCopyLogic : MonoBehaviour
{
    [SerializeField] private GameObject hipGO;
    [SerializeField] private GameObject r_handGO;
    [SerializeField] private GameObject l_handGO;
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

    [SerializeField] private Vector3[] neutralStraightPos;
    [SerializeField] private Vector3[] leftKneeUpPos;
    [SerializeField] private Vector3[] rightKneeUpPos;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // Update is called once per frame
    private void moveGameObjects()
    {
        //write a function to move lineary (lerp) all the gameobjects in a list. Need to keep in other lists
        //with same orders: start time, start and end position and angle, etc...?
    }
}
