using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;
using UnityEngine.XR;
using TMPro;
using QuickVR;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 26.04.2023
  Summary: The following script contains the logic of the menu. All the buttons logic and all the transitions are handled here.
*/

public class MenuLogic : MonoBehaviour
{
    //player
    [SerializeField] private GameObject player;
    [SerializeField] private Transform initPlayerTransform;

    //Spawner
    [SerializeField] private Spawner spawner;

    //Sound manager
    [SerializeField] private SoundManager soundManager;

    //Skybox materials
    [SerializeField] private Material danceGameSkyMat;
    [SerializeField] private Material menuSkyMat;

    //menu variables
    [SerializeField] private GameObject menuTabGO;
    [SerializeField] private GameObject controllerTabGO;
    [SerializeField] private GameObject menuInitPosGO;
    [SerializeField] private GameObject menuDanceGamePosGO;
    [SerializeField] private GameObject controllerInitPosGO;
    [SerializeField] private GameObject controllerDanceGamePosGO;

    //landscapes
    [SerializeField] private GameObject WIPlandscape;
    [SerializeField] private GameObject danceGameLandscape;
    [SerializeField] private GameObject menuLandscape;
    [SerializeField] private GameObject BeatHandsLandscape;
    [SerializeField] private GameObject storyGameLandscape;

    //Tabs of the menu
    [SerializeField] private GameObject connexionTab;
    [SerializeField] private GameObject controllerTab;
    [SerializeField] private GameObject welcomeTab;
    [SerializeField] private GameObject menuTab;
    [SerializeField] private GameObject gamesTab;
    [SerializeField] private GameObject danceGameTab;
    [SerializeField] private GameObject danceGameDifficultyTab;
    [SerializeField] private GameObject danceGameFinishedTab;
    [SerializeField] private GameObject danceGameInGameTab;
    [SerializeField] private GameObject calibrationTab;
    [SerializeField] private GameObject danceGameStatsTab;
    [SerializeField] private GameObject WIPTab;
    [SerializeField] private GameObject shifumiTab;
    [SerializeField] private GameObject backgroundTab;
    [SerializeField] private GameObject batteriesTab;
    [SerializeField] private GameObject beatHandsGameTab;
    [SerializeField] private GameObject storyGameTab;
    [SerializeField] private GameObject storyGameDanceGameTab;
    [SerializeField] private GameObject storyGameBeatHandsGameTab;
    [SerializeField] private GameObject storyGameBalanceGameTab;
    [SerializeField] private GameObject storyGameBalanceGame2Tab;
    [SerializeField] private GameObject storyGameShifumiGame1Tab;

    //start Buttons
    [SerializeField] private Button firstButton;
    [SerializeField] private Button connectionButton;

    //CalibrationTab variables
    [SerializeField] private Button zeroLeftCellsButton;
    [SerializeField] private Button zeroRightCellsButton;
    [SerializeField] private GameObject zeroLeftCellsTextGO;
    [SerializeField] private GameObject zeroRightCellsTextGO;
    [SerializeField] private Toggle armMotorsToggle;
    [SerializeField] private Button abdZeroButton;
    [SerializeField] private Button abdZeroButton2;
    [SerializeField] private Button doneAbdZeroButton;
    [SerializeField] private Button doneCalibrationButton;
    [SerializeField] private GameObject howToCalibrateAvatarTextGO;

    //littleMenu variables
    [SerializeField] private Button gamesButton;

    //dance game variables
    [SerializeField] private Button danceGameDoneStatsButton;
    [SerializeField] private Button danceGameDifficultyButton;
    [SerializeField] private Button danceGameBackToMenuButton;
    [SerializeField] private Button danceGameSeeStatsButton;
    [SerializeField] private Game1Logic game1Logic;
    [SerializeField] private GameObject danceGameGO;
    [SerializeField] private GameObject mirrorAvatar;
    [SerializeField] private GameObject avatarToCopy;
    [SerializeField] private Image scoreBarImg;
    [SerializeField] private Image scoreBarImgOpponent;
    [SerializeField] private ScoreBarLogic scoreBarLogic;
    [SerializeField] private OpponentLogic opponent;
    [SerializeField] private TextMeshProUGUI opponentScoreText;
    [SerializeField] private TextMeshProUGUI playerScoreText;
    [SerializeField] private Button difficulty0Button;
    [SerializeField] private GameObject isMirrorCheckMark;
    [SerializeField] private GameObject danceGameInitPos;
    [SerializeField] private GameObject danceGameStoryGamePos;

    //BeatHands game variables
    [SerializeField] private Button beatHandsGameDifficultyButton;
    [SerializeField] private GameObject beatHandsGameGO;
    [SerializeField] private GameObject rightBracelet;
    [SerializeField] private GameObject leftBracelet;
    [SerializeField] private GameObject beatHandsGameDifficultyTab;
    [SerializeField] private Button beatHandsDifficulty0Button;
    [SerializeField] private GameObject beatHandsGameInGameTab;
    [SerializeField] private BeatHandsSpawner beatHandsSpawner;
    [SerializeField] private BeatHandsGameLogic beatHandsGameLogic;
    [SerializeField] private Button beatHandsFinishNextButton;
    [SerializeField] private GameObject beatHandsGameFinishedTab;
    [SerializeField] private GameObject beatHandsGameInitPos;
    [SerializeField] private GameObject beatHandsGameStoryGamePos;

    //Balance game variables
    [SerializeField] private Button storyGameStartBalanceGameButton;
    [SerializeField] private Button storyGameStartBalanceGameButton2;

    //Walking in Place
    [SerializeField] private WalkingInPlace Wip;
    [SerializeField] private Button WIPBackToMenuButton;

    //Shifumi variables
    [SerializeField] private Button shifumiBackToMenuButton;
    [SerializeField] private Button storyGameStartShifumiGameButton;

    //Story game variables
    [SerializeField] private Button storyGameBackToMenuButton;
    [SerializeField] private GameObject storyGameGO;
    [SerializeField] private Button storyGameStartDanceGameButton;
    [SerializeField] private StoryGameLogic storyGameLogic;
    [SerializeField] private Button storyGameStartBeatHandsGameButton;

    private bool isMirror = true;
    private bool inStoryGame = false;

    private GameObject actualLandscape; //keep in memory which landscape is active
    private GameObject actualTab; //keep in memory which tab is active

    public bool isConnected = false;

    // Start is called before the first frame update
    void Start()
    {
        actualLandscape = menuLandscape;
        actualLandscape.SetActive(true);

        actualTab = welcomeTab;
        actualTab.SetActive(true);
        firstButton.Select();
    }

    // Update is called once per frame
    void Update()
    {
        if (isConnected)
        {
            isConnected = false;
            ConnectedToTheExo();
        }

        if (game1Logic.finished)
        {
            SetGameFinishedTab();
        }

        if (beatHandsGameLogic.finished)
        {
            BeatHandsSetGameFinishedTab();
        }

        if(FindObjectsOfType<Game1Logic>(false).Length != 0)
        {
            game1Logic = FindObjectsOfType<Game1Logic>(false)[0];
        }
    }

    public void PressGamesButton()
    {
        actualTab.SetActive(false);
        actualTab = gamesTab;
        actualTab.SetActive(true);
    }
    

    public void PressConnexionTabButton()
    {
        actualTab.SetActive(false);
        actualTab = connexionTab;
        actualTab.SetActive(true);
    }

    public void PressControllerTabButton()
    {
        actualTab.SetActive(false);
        actualTab = controllerTab;
        actualTab.SetActive(true);
    }

    public void PressWelcomeContinueButton()
    {
        actualTab.SetActive(false);
        actualTab = connexionTab;
        actualTab.SetActive(true);
        connectionButton.Select();
    }

    public void ConnectedToTheExo()
    {
        actualTab.SetActive(false);
        actualTab = calibrationTab;
        actualTab.SetActive(true);
        zeroLeftCellsButton.Select();
    }

    public void PressLeftCellsZero()
    {
        zeroLeftCellsButton.gameObject.SetActive(false);
        zeroLeftCellsTextGO.SetActive(false);
        zeroRightCellsButton.gameObject.SetActive(true);
        zeroRightCellsTextGO.SetActive(true);
        zeroRightCellsButton.Select();
    }

    public void PressRightCellsZero()
    {
        zeroRightCellsButton.gameObject.SetActive(false);
        zeroRightCellsTextGO.SetActive(false);
        armMotorsToggle.gameObject.SetActive(true);
        doneAbdZeroButton.gameObject.SetActive(true);
        abdZeroButton.gameObject.SetActive(true);
        armMotorsToggle.Select();
    }

    public void PressDoneAbdZero()
    {
        armMotorsToggle.gameObject.SetActive(false);
        doneAbdZeroButton.gameObject.SetActive(false);
        abdZeroButton.gameObject.SetActive(false);
        howToCalibrateAvatarTextGO.SetActive(true);
        doneCalibrationButton.gameObject.SetActive(true);
        doneCalibrationButton.Select();
    }

    public void PressDoneCalibration()
    {
        howToCalibrateAvatarTextGO.SetActive(false);
        doneCalibrationButton.gameObject.SetActive(false);
        zeroLeftCellsButton.gameObject.SetActive(true);
        zeroLeftCellsTextGO.SetActive(true);
        PressGamesButton();
        menuTab.SetActive(true);
        controllerTab.SetActive(true);
        gamesButton.Select();
        
    }

    public void PressDanceGameButton()
    {
        if (!inStoryGame)
        {
            menuTab.SetActive(false);
            actualLandscape.SetActive(false);
            actualLandscape = danceGameLandscape;
            actualLandscape.SetActive(true);
            danceGameGO.SetActive(true);
            actualTab.SetActive(false);
            actualTab = danceGameTab;
            actualTab.SetActive(true);
            danceGameDifficultyButton.Select();
            controllerTabGO.transform.localPosition = controllerDanceGamePosGO.transform.localPosition;
            controllerTabGO.transform.localEulerAngles = new Vector3(0f, 65f, 0f);
            menuTabGO.transform.localPosition = menuDanceGamePosGO.transform.localPosition;
            menuTabGO.transform.localEulerAngles = new Vector3(50f, 0f, 0f);
            RenderSettings.skybox = danceGameSkyMat;
            game1Logic.isBlinking = true;
            soundManager.stopActualMusic();
            soundManager.playGame1Music();
            scoreBarImg.fillAmount = 0f;
            scoreBarImgOpponent.fillAmount = 0f;
            scoreBarLogic.done1 = false;
            scoreBarLogic.done2 = false;
            scoreBarLogic.done3 = false;
            opponent.poseNb = 0;
            playerScoreText.SetText("Accuracy: -");
            opponentScoreText.SetText("Accuracy: -");
        }
        else
        {
            //This is called when dance game is finished in the story game
            switch (storyGameLogic.actualGameNb)
            {
                case 1:
                    storyGameLogic.finishedDanceGame1 = true;
                    break;
                case 2:
                    storyGameLogic.finishedDanceGame2 = true;
                    break;
                case 3:
                    storyGameLogic.finishedBeatHandsGame1 = true;
                    break;
                case 4:
                    storyGameLogic.finishedBalanceGame1 = true;
                    break;
                case 5:
                    storyGameLogic.finishedBeatHandsGame2 = true;
                    break;
                case 6:
                    storyGameLogic.finishedBalanceGame2 = true;
                    break;
                default:
                    break;
            }
            actualTab.SetActive(false);
            actualTab = storyGameTab;
            actualTab.SetActive(true);
            controllerTab.SetActive(false);
            controllerTabGO.transform.localPosition = controllerInitPosGO.transform.localPosition;
            controllerTabGO.transform.localEulerAngles = new Vector3(0f, -55f, 0f);
            menuTabGO.transform.localPosition = menuInitPosGO.transform.localPosition;
            menuTabGO.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
            backgroundTab.SetActive(false);
            batteriesTab.SetActive(false);
        }
        
    }

    public void PressBackToMenuButton()
    {
        danceGameDifficultyButton.gameObject.SetActive(true);
        danceGameGO.SetActive(false);
        actualLandscape.SetActive(false);
        actualLandscape = menuLandscape;
        actualLandscape.SetActive(true);
        menuTab.SetActive(true);
        PressGamesButton();
        gamesButton.Select();
        controllerTabGO.transform.localPosition = controllerInitPosGO.transform.localPosition;
        controllerTabGO.transform.localEulerAngles = new Vector3(0f, -55f, 0f);
        menuTabGO.transform.localPosition = menuInitPosGO.transform.localPosition;
        menuTabGO.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
        RenderSettings.skybox = menuSkyMat;
        soundManager.stopActualMusic();
        soundManager.playHomeMusic();
        Wip.WIP = false;
        player.transform.localPosition = initPlayerTransform.localPosition;
        player.transform.localEulerAngles = new Vector3(0f, -90f, 0f);
        backgroundTab.SetActive(true);
        batteriesTab.SetActive(true);
        rightBracelet.SetActive(false);
        leftBracelet.SetActive(false);
        controllerTab.SetActive(true);
        if (inStoryGame)
        {
            inStoryGame = false;
            storyGameLogic.resetGame();
            storyGameGO.SetActive(false);
            danceGameGO.transform.position = danceGameInitPos.transform.position;
            beatHandsGameGO.transform.position = beatHandsGameInitPos.transform.position;
        }
    }

    public void PressPlayDanceGameButton()
    {
        game1Logic.inGame = true;
        actualTab.SetActive(false);
        actualTab = danceGameInGameTab;
        actualTab.SetActive(true);
        abdZeroButton2.Select();
        game1Logic.isBlinking = false;
    }

    //Change if the "mirror avatar" copies the movements like a mirror or not.
    public void ToggleMirrorAvatarButton()
    {
        if (isMirror)
        {
            mirrorAvatar.transform.localScale = new Vector3(1f, 1f, 1f);
            isMirror = false;
            spawner.isMirror = false;
            isMirrorCheckMark.SetActive(false);
        }
        else
        {
            mirrorAvatar.transform.localScale = new Vector3(-1f, 1f, 1f);
            isMirror = true;
            spawner.isMirror = true;
            isMirrorCheckMark.SetActive(true);
        }    
    }

    public void SetGameFinishedTab()
    {
        game1Logic.finished = false;
        actualTab.SetActive(false);
        actualTab = danceGameFinishedTab;
        actualTab.SetActive(true);
        soundManager.playCheeringSound();
        danceGameSeeStatsButton.Select();
    }

    public void PressDanceGameSeeStatsButton()
    {
        actualTab.SetActive(false);
        actualTab = danceGameStatsTab;
        actualTab.SetActive(true);
        danceGameDoneStatsButton.Select();
        game1Logic.isBlinking = false;
    }

    public void PressDanceGamedifficultyButton()
    {
        actualTab.SetActive(false);
        actualTab = danceGameDifficultyTab;
        actualTab.SetActive(true);
        difficulty0Button.Select();
    }

    public void PressWIPButton()
    {
        menuTab.SetActive(false);
        actualLandscape.SetActive(false);
        actualLandscape = WIPlandscape;
        actualLandscape.SetActive(true);
        backgroundTab.SetActive(false);
        batteriesTab.SetActive(false);
        actualTab.SetActive(false);
        actualTab = WIPTab;
        actualTab.SetActive(true);
        Wip.WIP = true;
        soundManager.stopActualMusic();
        soundManager.playWIPMusic();
        WIPBackToMenuButton.Select();
    }

    public void PressBeatHandsGameButton()
    {
        if (!inStoryGame)
        {
            menuTab.SetActive(false);
            actualLandscape.SetActive(false);
            actualLandscape = BeatHandsLandscape;
            actualLandscape.SetActive(true);
            beatHandsGameGO.SetActive(true);
            actualTab.SetActive(false);
            actualTab = beatHandsGameTab;
            actualTab.SetActive(true);
            beatHandsGameDifficultyButton.Select();
            RenderSettings.skybox = danceGameSkyMat;
            soundManager.stopActualMusic();
            soundManager.playGame1Music();
            rightBracelet.SetActive(true);
            leftBracelet.SetActive(true);
        }
        else
        {
            //This is called when beathands game is finished in the story game
            switch (storyGameLogic.actualGameNb)
            {
                case 1:
                    storyGameLogic.finishedDanceGame1 = true;
                    break;
                case 2:
                    storyGameLogic.finishedDanceGame2 = true;
                    break;
                case 3:
                    storyGameLogic.finishedBeatHandsGame1 = true;
                    break;
                case 4:
                    storyGameLogic.finishedBalanceGame1 = true;
                    break;
                case 5:
                    storyGameLogic.finishedBeatHandsGame2 = true;
                    break;
                case 6:
                    storyGameLogic.finishedBalanceGame2 = true;
                    break;
                default:
                    break;
            }
            actualTab.SetActive(false);
            actualTab = storyGameTab;
            actualTab.SetActive(true);
            controllerTab.SetActive(false);
            backgroundTab.SetActive(false);
            batteriesTab.SetActive(false);
        }
    }

    public void PressBeatHandsGamedifficultyButton()
    {
        actualTab.SetActive(false);
        actualTab = beatHandsGameDifficultyTab;
        actualTab.SetActive(true);
        beatHandsDifficulty0Button.Select();
    }

    public void PressPlayBeatHandsGameButton()
    {
        actualTab.SetActive(false);
        actualTab = beatHandsGameInGameTab;
        actualTab.SetActive(true);
        beatHandsGameLogic.ToggleIsPlaying();
        abdZeroButton2.Select();
    }

    public void BeatHandsSetGameFinishedTab()
    {
        beatHandsGameLogic.finished = false;
        actualTab.SetActive(false);
        actualTab = beatHandsGameFinishedTab;
        actualTab.SetActive(true);
        soundManager.playCheeringSound();
        beatHandsFinishNextButton.Select();
    }

    public void PressShifumiButton()
    {
        menuTab.SetActive(false);
        backgroundTab.SetActive(false);
        batteriesTab.SetActive(false);
        actualTab.SetActive(false);
        actualTab = shifumiTab;
        actualTab.SetActive(true);
        shifumiBackToMenuButton.Select();
    }

    public void ToggleControllerTab()
    {
        controllerTab.SetActive(!controllerTab.activeSelf);
    }

    #region Story Game functions

    public void PressStoryGameButton()
    {
        menuTab.SetActive(false);
        actualLandscape.SetActive(false);
        actualLandscape = storyGameLandscape;
        actualLandscape.SetActive(true);
        backgroundTab.SetActive(false);
        batteriesTab.SetActive(false);
        actualTab.SetActive(false);
        actualTab = storyGameTab;
        actualTab.SetActive(true);
        soundManager.stopActualMusic();
        soundManager.playWIPMusic();
        storyGameBackToMenuButton.Select();
        storyGameGO.SetActive(true);
        controllerTab.SetActive(false);
        inStoryGame = true;
        danceGameGO.transform.position = danceGameStoryGamePos.transform.position;
        beatHandsGameGO.transform.position = beatHandsGameStoryGamePos.transform.position;
    }

    public void StoryGameGoToDanceGame()
    {
        danceGameGO.SetActive(true);
        actualTab.SetActive(false);
        backgroundTab.SetActive(true);
        batteriesTab.SetActive(true);
        controllerTab.SetActive(false);
        actualTab = storyGameDanceGameTab;
        actualTab.SetActive(true);
        storyGameStartDanceGameButton.Select();
        controllerTabGO.SetActive(true);
        controllerTabGO.transform.localPosition = controllerDanceGamePosGO.transform.localPosition;
        controllerTabGO.transform.localEulerAngles = new Vector3(0f, 65f, 0f);
        menuTabGO.transform.localPosition = menuDanceGamePosGO.transform.localPosition;
        menuTabGO.transform.localEulerAngles = new Vector3(50f, 0f, 0f);
        RenderSettings.skybox = danceGameSkyMat;
        game1Logic.isBlinking = true;
        soundManager.stopActualMusic();
        soundManager.playGame1Music();
        scoreBarImg.fillAmount = 0f;
        scoreBarImgOpponent.fillAmount = 0f;
        scoreBarLogic.done1 = false;
        scoreBarLogic.done2 = false;
        scoreBarLogic.done3 = false;
        opponent.poseNb = 0;
        playerScoreText.SetText("Accuracy: -");
        opponentScoreText.SetText("Accuracy: -");
    }

    public void StoryGameGoToBeatHandsGame()
    {
        beatHandsGameGO.SetActive(true);
        actualTab.SetActive(false);
        backgroundTab.SetActive(true);
        batteriesTab.SetActive(true);
        controllerTab.SetActive(false);
        actualTab = storyGameBeatHandsGameTab;
        actualTab.SetActive(true);
        storyGameStartBeatHandsGameButton.Select();
        controllerTabGO.SetActive(true);
        RenderSettings.skybox = danceGameSkyMat;
        soundManager.stopActualMusic();
        soundManager.playGame1Music();
        rightBracelet.SetActive(true);
        leftBracelet.SetActive(true);
    }

    public void StoryGameGoToBalanceGame()
    {
        actualTab.SetActive(false);
        controllerTab.SetActive(false);
        actualTab = storyGameBalanceGameTab;
        actualTab.SetActive(true);
        storyGameStartBalanceGameButton.gameObject.SetActive(true);
        storyGameStartBalanceGameButton.Select();
    }

    public void StoryGameBalanceGamePressPlay(GameObjectController sphere)
    {
        sphere.startGame();
        storyGameStartBalanceGameButton.gameObject.SetActive(false);
    }

    public void StoryGameBalanceGamePressPlay2(GameObjectController sphere)
    {
        sphere.startGame();
        storyGameStartBalanceGameButton2.gameObject.SetActive(false);
    }

    public void StoryGameBalanceGamePressFinish()
    {
        switch (storyGameLogic.actualGameNb)
        {
            case 1:
                storyGameLogic.finishedDanceGame1 = true;
                break;
            case 2:
                storyGameLogic.finishedDanceGame2 = true;
                break;
            case 3:
                storyGameLogic.finishedBeatHandsGame1 = true;
                break;
            case 4:
                storyGameLogic.finishedBalanceGame1 = true;
                storyGameStartBalanceGameButton.gameObject.SetActive(true);
                break;
            case 5:
                storyGameLogic.finishedBeatHandsGame2 = true;
                break;
            case 6:
                storyGameLogic.finishedBalanceGame2 = true;
                storyGameStartBalanceGameButton2.gameObject.SetActive(true);
                break;
            default:
                break;
        }
        actualTab.SetActive(false);
        actualTab = storyGameTab;
        actualTab.SetActive(true);
        controllerTab.SetActive(false);
        backgroundTab.SetActive(false);
        batteriesTab.SetActive(false);
    }

    public void StoryGameGoToBalanceGame2()
    {
        actualTab.SetActive(false);
        controllerTab.SetActive(false);
        actualTab = storyGameBalanceGame2Tab;
        actualTab.SetActive(true);
        storyGameStartBalanceGameButton2.gameObject.SetActive(true);
        storyGameStartBalanceGameButton2.Select();
    }

    public void StoryGameGoToShifumiGame()
    {
        actualTab.SetActive(false);
        controllerTab.SetActive(false);
        actualTab = storyGameShifumiGame1Tab;
        actualTab.SetActive(true);
        storyGameStartShifumiGameButton.gameObject.SetActive(true);
        storyGameStartShifumiGameButton.Select();
    }

    public void StoryGameShifumiGamePressFinish()
    {
        switch (storyGameLogic.actualGameNb)
        {
            case 1:
                storyGameLogic.finishedDanceGame1 = true;
                break;
            case 2:
                storyGameLogic.finishedDanceGame2 = true;
                break;
            case 3:
                storyGameLogic.finishedBeatHandsGame1 = true;
                break;
            case 4:
                storyGameLogic.finishedBalanceGame1 = true;
                storyGameStartBalanceGameButton.gameObject.SetActive(true);
                break;
            case 5:
                storyGameLogic.finishedBeatHandsGame2 = true;
                break;
            case 6:
                storyGameLogic.finishedBalanceGame2 = true;
                storyGameStartBalanceGameButton2.gameObject.SetActive(true);
                break;
            case 7:
                storyGameLogic.finishedShifumiGame1 = true;
                storyGameStartShifumiGameButton.gameObject.SetActive(true);
                break;
            default:
                break;
        }
        actualTab.SetActive(false);
        actualTab = storyGameTab;
        actualTab.SetActive(true);
        controllerTab.SetActive(false);
        backgroundTab.SetActive(false);
        batteriesTab.SetActive(false);
    }

    #endregion
}
