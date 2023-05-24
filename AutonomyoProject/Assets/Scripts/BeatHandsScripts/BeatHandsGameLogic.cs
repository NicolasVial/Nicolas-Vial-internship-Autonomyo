using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class BeatHandsGameLogic : MonoBehaviour
{
    [SerializeField] private UIPointer pointer;
    [SerializeField] private BeatHandsSpawner spawner;
    [SerializeField] private TextMeshProUGUI timerText;
    [SerializeField] private TextMeshProUGUI scoreText;
    [SerializeField] private TextMeshProUGUI finalScoreText;

    private float inGameTime = 0f;
    private bool isPlaying = false;

    //public variables
    public int totalScore = 0;
    public int difficulty = 0;
    public bool finished = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (isPlaying)
        {
            timerText.SetText((60f - inGameTime).ToString("0.0"));
            scoreText.SetText(totalScore + " Points");

            if(inGameTime > 60f)
            {
                ToggleIsPlaying();
                finalScoreText.SetText("You finished the game with a score of " + totalScore + " in 60 seconds!");
                totalScore = 0;
                inGameTime = 0f;
                finished = true;
            }

            inGameTime += Time.deltaTime;
        }
        else
        {
            totalScore = 0;
        }
    }

    public void SetDifficulty(int difficulty)
    {
        this.difficulty = difficulty;
        spawner.SetDifficulty(difficulty);
    }

    public void ToggleIsPlaying()
    {
        isPlaying = !isPlaying;
        spawner.isPlaying = isPlaying;
        pointer.TogglePointer();
    }


}
