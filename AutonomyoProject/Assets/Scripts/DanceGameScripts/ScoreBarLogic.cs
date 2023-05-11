using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 27.04.2023
  Summary: The following script contains the logic of the score bar of the player in the Dance Game. It's here that
           the stars of the score bar are activated as well as the sound design of the score bar.
*/

public class ScoreBarLogic : MonoBehaviour
{
    [SerializeField] private Image fillImage;
    [SerializeField] private Image star1;
    [SerializeField] private Image star2;
    [SerializeField] private Image star3;
    [SerializeField] private Image star1Bis;
    [SerializeField] private Image star2Bis;
    [SerializeField] private Image star3Bis;
    [SerializeField] private Color reachedColor;
    [SerializeField] private Color notReachedColor;
    [SerializeField] private SoundManager soundManager;

    public bool done1 = false;
    public bool done2 = false;
    public bool done3 = false;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (!done3)
        {
            if (fillImage.fillAmount >= 0.8f)
            {
                star1.color = reachedColor;
                star2.color = reachedColor;
                star3.color = reachedColor;
                star1Bis.color = reachedColor;
                star2Bis.color = reachedColor;
                star3Bis.color = reachedColor;
                done3 = true;
                soundManager.playStarSound();
            }
            else
            {
                if (!done2)
                {
                    if (fillImage.fillAmount >= 0.5)
                    {
                        star1.color = reachedColor;
                        star2.color = reachedColor;
                        star1Bis.color = reachedColor;
                        star2Bis.color = reachedColor;
                        soundManager.playStarSound();
                        done2 = true;

                    }
                    else
                    {
                        if (!done1)
                        {
                            if (fillImage.fillAmount >= 0.25)
                            {
                                star1.color = reachedColor;
                                star1Bis.color = reachedColor;
                                done1 = true;
                                soundManager.playStarSound();
                            }
                            else
                            {
                                star1.color = notReachedColor;
                                star1Bis.color = notReachedColor;
                            }
                        }            
                        star2.color = notReachedColor;
                        star2Bis.color = notReachedColor;
                    }
                    star3.color = notReachedColor;
                    star3Bis.color = notReachedColor;
                }
            }
        }
    }
}
