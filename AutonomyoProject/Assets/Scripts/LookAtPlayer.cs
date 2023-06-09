using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookAtPlayer : MonoBehaviour
{
    [SerializeField] private GameObject playerGO;

    // Update is called once per frame
    void Update()
    {
        this.transform.LookAt(playerGO.transform); 
    }
}
