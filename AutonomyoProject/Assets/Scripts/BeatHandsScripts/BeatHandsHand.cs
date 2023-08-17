using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// This class represent a player's hand in the BeatHands game.
/// </summary>

public class BeatHandsHand : MonoBehaviour
{

    [SerializeField] private SoundManager soundManager;
    [SerializeField] private string color;
    [SerializeField] private BeatHandsGameLogic gameLogic;

    /// <summary>
    /// This method is triggered whenever another collider enters the collider attached to this object.
    /// It checks if the other collider is a target and if it is the case, the score augments and the target is destroyed.
    /// </summary>
    /// <param name="other">The other collider that hit the collider attached to this object.</param>
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.GetComponent<BeatHandsHitObject>() != null && other.tag == this.tag)
        {
            soundManager.playSuccessSound();
            gameLogic.totalScore += 1;

            Destroy(other.gameObject);
        }
    }
}
