using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// The following script is used to make the gameObject look at the player.
/// </summary>

public class LookAtPlayer : MonoBehaviour
{
    [SerializeField] private GameObject playerGO;

    /// <summary>
    /// Update method is called once per frame and is used to update what needs to be updated each frame.
    /// </summary>
    void Update()
    {
        this.transform.LookAt(playerGO.transform); 
    }
}
