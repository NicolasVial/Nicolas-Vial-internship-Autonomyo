using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// This class handles the finale results tab dispaying the results done by the player during the story game.
/// </summary>

public class StoryGameResults : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI danceScore1Text;
    [SerializeField] private TextMeshProUGUI beatHandsScore1Text;
    [SerializeField] private TextMeshProUGUI balanceScore1Text;
    [SerializeField] private TextMeshProUGUI danceScore2Text;
    [SerializeField] private TextMeshProUGUI beatHandsScore2Text;
    [SerializeField] private TextMeshProUGUI shifumiScoreText;
    [SerializeField] private TextMeshProUGUI balanceScore2Text;

    /// <summary>
    /// This method changes the text on the finale results tab of the score done during the first dance game.
    /// </summary>
    /// <param name="newText">The new text to display.</param>
    public void changeDanceScore1Text(string newText)
    {
        danceScore1Text.SetText(newText);
    }

    /// <summary>
    /// This method changes the text on the finale results tab of the score done during the first BeatHands game.
    /// </summary>
    /// <param name="newText">The new text to display.</param>
    public void changeBeatHandsScore1Text(string newText)
    {
        beatHandsScore1Text.SetText(newText);
    }

    /// <summary>
    /// This method changes the text on the finale results tab of the score done during the first balance game.
    /// </summary>
    /// <param name="newText">The new text to display.</param>
    public void changeBalanceScore1Text(string newText)
    {
       balanceScore1Text.SetText(newText);
    }

    /// <summary>
    /// This method changes the text on the finale results tab of the score done during the second dance game.
    /// </summary>
    /// <param name="newText">The new text to display.</param>
    public void changeDanceScore2Text(string newText)
    {
        danceScore2Text.SetText(newText);
    }

    /// <summary>
    /// This method changes the text on the finale results tab of the score done during the second BeatHands game.
    /// </summary>
    /// <param name="newText">The new text to display.</param>
    public void changeBeatHandsScore2Text(string newText)
    {
       beatHandsScore2Text.SetText(newText);
    }

    /// <summary>
    /// This method changes the text on the finale results tab of the score done during the second balance game.
    /// </summary>
    /// <param name="newText">The new text to display.</param>
    public void changeBalanceScore2Text(string newText)
    {
        balanceScore2Text.SetText(newText);
    }

    /// <summary>
    /// This method changes the text on the finale results tab of the score done during the shifumi game.
    /// </summary>
    /// <param name="newText">The new text to display.</param>
    public void changeShifumiScoreText(string newText)
    {
        shifumiScoreText.SetText(newText);
    }
}
