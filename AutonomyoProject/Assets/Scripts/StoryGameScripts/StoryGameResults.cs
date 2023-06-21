using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class StoryGameResults : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI danceScore1Text;
    [SerializeField] private TextMeshProUGUI beatHandsScore1Text;
    [SerializeField] private TextMeshProUGUI balanceScore1Text;
    [SerializeField] private TextMeshProUGUI danceScore2Text;
    [SerializeField] private TextMeshProUGUI beatHandsScore2Text;
    [SerializeField] private TextMeshProUGUI shifumiScoreText;
    [SerializeField] private TextMeshProUGUI balanceScore2Text;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void changeDanceScore1Text(string newText)
    {
        danceScore1Text.SetText(newText);
    }

    public void changeBeatHandsScore1Text(string newText)
    {
        beatHandsScore1Text.SetText(newText);
    }

    public void changeBalanceScore1Text(string newText)
    {
       balanceScore1Text.SetText(newText);
    }

    public void changeDanceScore2Text(string newText)
    {
        danceScore2Text.SetText(newText);
    }

    public void changeBeatHandsScore2Text(string newText)
    {
       beatHandsScore2Text.SetText(newText);
    }

    public void changeBalanceScore2Text(string newText)
    {
        balanceScore2Text.SetText(newText);
    }

    public void changeShifumiScoreText(string newText)
    {
        shifumiScoreText.SetText(newText);
    }
}
