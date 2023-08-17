using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// This class is the logic of the BeatHands game.
/// </summary>

public class BeatHandsGameLogic : MonoBehaviour
{
    [SerializeField] private UIPointer pointer;
    [SerializeField] private BeatHandsSpawner spawner;
    [SerializeField] private TextMeshProUGUI timerText;
    [SerializeField] private TextMeshProUGUI scoreText;
    [SerializeField] private TextMeshProUGUI finalScoreText;
    [SerializeField] private TextMeshProUGUI timerTextFR;
    [SerializeField] private TextMeshProUGUI scoreTextFR;
    [SerializeField] private TextMeshProUGUI finalScoreTextFR;
    [SerializeField] private MenuLogic menu;

    private float inGameTime = 0f;
    private bool isPlaying = false;

    //public variables
    public int totalScore = 0;
    public int difficulty = 0;
    public bool finished = false;
    public string resultText = "";

    /// <summary>
    /// Update method is called once per frame and is used to update what needs to be updated each frame.
    /// </summary>
    void Update()
    {
        // If the game is playing, the score is updated and the timer goes from 60 seconds down to zero, where the game stops.
        if (isPlaying)
        {
            spawner.isPlaying = true;
            if(menu.language == 0)
            {
                timerText.SetText((60f - inGameTime).ToString("0.0"));
                scoreText.SetText(totalScore + " Points");
            }
            else
            {
                timerTextFR.SetText((60f - inGameTime).ToString("0.0"));
                scoreTextFR.SetText(totalScore + " Points");
            }

            if(inGameTime > 60f)
            {
                ToggleIsPlaying();
                if(menu.language == 0)
                {
                    finalScoreText.SetText("You finished the game with a score of " + totalScore + " in 60 seconds!");
                    resultText = totalScore.ToString() + " Hit";
                }
                else
                {
                    finalScoreTextFR.SetText("Tu as fini la partie avec un score de " + totalScore + " en 60 secondes!");
                    resultText = totalScore.ToString() + " Touché";
                }
                totalScore = 0;
                inGameTime = 0f;
                finished = true;
            }

            inGameTime += Time.deltaTime;
        }
        else
        {
            totalScore = 0;
            spawner.isPlaying = false;
        }
    }


    /// <summary>
    /// This method sets the difficulty of the spawner.
    /// </summary>
    /// <param name="difficulty">The other collider that hit the collider attached to this object.</param>
    public void SetDifficulty(int difficulty)
    {
        this.difficulty = difficulty;
        spawner.SetDifficulty(difficulty);
    }

    /// <summary>
    /// This method starts or stops the game depending on the current state. 
    /// </summary>
    public void ToggleIsPlaying()
    {
        isPlaying = !isPlaying;
        spawner.isPlaying = isPlaying;
        pointer.TogglePointer();
    }


}
