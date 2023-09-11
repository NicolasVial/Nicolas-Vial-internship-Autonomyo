using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// This class handles the story game colliders used to activate the corresping dialogue as well as the corresping game whenever the player reaches them..
/// </summary>

public class StoryGameCollidersLogic : MonoBehaviour
{
    [SerializeField] private GameObject danceGameHitBox1;
    [SerializeField] private GameObject danceGameHitBox2;
    [SerializeField] private GameObject beatHandsGameHitBox1;
    [SerializeField] private GameObject beatHandsGameHitBox2;
    [SerializeField] private GameObject balanceGameHitBox1;
    [SerializeField] private GameObject balanceGameHitBox2;
    [SerializeField] private StoryGameLogic gameLogic;
    [SerializeField] private OVRScreenFade screenFade;
    [SerializeField] private WalkingInPlace walkingInPlace;
    [SerializeField] private GameObject victoryGO;

    /// <summary>
    /// This method is triggered whenever another collider enters the collider attached to this object.
    /// It checks if the other collider is the player and if it is the case, depending on the collider, the correct dialogue as well as the corresping game are activated.
    /// </summary>
    /// <param name="other">The other collider that hit the collider attached to this object.</param>
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "WalkingInPlace")
        {
            walkingInPlace.WIP = false;
            if(walkingInPlace.walkingMode == 3)
            {
                walkingInPlace.teleport();
            }

            switch (this.gameObject.tag)
            {
                case "danceGameCollider1":
                    victoryGO.SetActive(false);
                    gameLogic.Invoke("RunDanceGame1", 1f);
                    beatHandsGameHitBox1.SetActive(true);
                    break;
                case "danceGameCollider2":
                    gameLogic.Invoke("RunDanceGame2", 1f);
                    beatHandsGameHitBox2.SetActive(true);
                    break;
                case "beatHandsGameCollider1":
                    gameLogic.Invoke("RunBeatHandsGame1", 1f);
                    balanceGameHitBox1.SetActive(true);
                    break;
                case "beatHandsGameCollider2":
                    gameLogic.Invoke("RunBeatHandsGame2", 1f);
                    balanceGameHitBox2.SetActive(true);
                    break;
                case "balanceGameCollider1":
                    gameLogic.Invoke("RunBalanceGame1", 1f);
                    danceGameHitBox2.SetActive(true);
                    break;
                case "balanceGameCollider2":
                    gameLogic.Invoke("RunShifumiGame1", 1f);
                    break;
                case "endCollider":
                    victoryGO.SetActive(true);
                    gameLogic.Invoke("RunEnd", 1f);
                    break;
                default:
                    break;
            }
            this.GetComponent<Collider>().gameObject.SetActive(false);
        }
    }
}
