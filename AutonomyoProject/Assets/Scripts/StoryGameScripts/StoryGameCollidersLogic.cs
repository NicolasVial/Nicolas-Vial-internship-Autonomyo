using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "WalkingInPlace")
        {
            walkingInPlace.WIP = false;

            switch (this.gameObject.tag)
            {
                case "danceGameCollider1":
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
                    gameLogic.Invoke("RunEnd", 1f);
                    break;
                default:
                    // code block
                    break;
            }
            this.GetComponent<Collider>().gameObject.SetActive(false);
        }
    }
}
