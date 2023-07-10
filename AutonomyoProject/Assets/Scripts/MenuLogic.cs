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
    [SerializeField] private GameObject languageTab;
    [SerializeField] private GameObject connexionTab;
    [SerializeField] private GameObject connexionTabFR;
    [SerializeField] private GameObject controllerTab;
    [SerializeField] private GameObject welcomeTab;
    [SerializeField] private GameObject welcomeTabFR;
    [SerializeField] private GameObject menuTab;
    [SerializeField] private GameObject gamesTab;
    [SerializeField] private GameObject gamesTabFR;
    [SerializeField] private GameObject danceGameTab;
    [SerializeField] private GameObject danceGameTabFR;
    [SerializeField] private GameObject danceGameDifficultyTab;
    [SerializeField] private GameObject danceGameDifficultyTabFR;
    [SerializeField] private GameObject danceGameFinishedTab;
    [SerializeField] private GameObject danceGameFinishedTabFR;
    [SerializeField] private GameObject danceGameInGameTab;
    [SerializeField] private GameObject danceGameInGameTabFR;
    [SerializeField] private GameObject danceGameStatsTab;
    [SerializeField] private GameObject danceGameStatsTabFR;
    [SerializeField] private GameObject beatHandsGameTab;
    [SerializeField] private GameObject beatHandsGameTabFR;
    [SerializeField] private GameObject beatHandsGameDifficultyTab;
    [SerializeField] private GameObject beatHandsGameDifficultyTabFR;
    [SerializeField] private GameObject beatHandsGameInGameTab;
    [SerializeField] private GameObject beatHandsGameInGameTabFR;
    [SerializeField] private GameObject beatHandsGameFinishedTab;
    [SerializeField] private GameObject beatHandsGameFinishedTabFR;
    [SerializeField] private GameObject calibrationTab;
    [SerializeField] private GameObject calibrationTabFR;
    [SerializeField] private GameObject WIPTab;
    [SerializeField] private GameObject shifumiTab;
    [SerializeField] private GameObject shifumiTabFR;
    [SerializeField] private GameObject backgroundTab;
    [SerializeField] private GameObject batteriesTab;
    [SerializeField] private GameObject storyGameTab;
    [SerializeField] private GameObject storyGameTabFR;
    [SerializeField] private GameObject storyGameDanceGameTab;
    [SerializeField] private GameObject storyGameDanceGameTabFR;
    [SerializeField] private GameObject storyGameBeatHandsGameTab;
    [SerializeField] private GameObject storyGameBeatHandsGameTabFR;
    [SerializeField] private GameObject storyGameBalanceGameTab;
    [SerializeField] private GameObject storyGameBalanceGameTabFR;
    [SerializeField] private GameObject storyGameBalanceGame2Tab;
    [SerializeField] private GameObject storyGameBalanceGame2TabFR;
    [SerializeField] private GameObject storyGameShifumiGame1Tab;
    [SerializeField] private GameObject storyGameShifumiGame1TabFR;
    [SerializeField] private GameObject balanceGameTab;
    [SerializeField] private GameObject balanceGameTabFR;

    //start Buttons
    [SerializeField] private Button firstButton;
    [SerializeField] private Button connectionButton;
    [SerializeField] private Button connectionButtonFR;
    [SerializeField] private Button EngButton;


    //CalibrationTab variables
    [SerializeField] private Button zeroLeftCellsButton;
    [SerializeField] private Button zeroLeftCellsButtonFR;
    [SerializeField] private Button zeroRightCellsButton;
    [SerializeField] private Button zeroRightCellsButtonFR;
    [SerializeField] private GameObject zeroLeftCellsTextGO;
    [SerializeField] private GameObject zeroRightCellsTextGO;
    [SerializeField] private GameObject zeroLeftCellsTextGOFR;
    [SerializeField] private GameObject zeroRightCellsTextGOFR;
    [SerializeField] private Toggle armMotorsToggle;
    [SerializeField] private Button abdZeroButton;
    [SerializeField] private Button jointZeroButton;
    [SerializeField] private Button abdZeroButton2;
    [SerializeField] private Button doneAbdZeroButton;
    [SerializeField] private Button doneCalibrationButton;
    [SerializeField] private GameObject howToCalibrateAvatarTextGO;
    [SerializeField] private Toggle armMotorsToggleFR;
    [SerializeField] private Button abdZeroButtonFR;
    [SerializeField] private Button jointZeroButtonFR;
    [SerializeField] private Button doneAbdZeroButtonFR;
    [SerializeField] private Button doneCalibrationButtonFR;
    [SerializeField] private GameObject howToCalibrateAvatarTextGOFR;

    //littleMenu variables
    [SerializeField] private Button gamesButton;

    //dance game variables
    [SerializeField] private Button danceGameDoneStatsButton;
    [SerializeField] private Button danceGameDoneStatsButtonFR;
    [SerializeField] private Button danceGameDifficultyButton;
    [SerializeField] private Button danceGameDifficultyButtonFR;
    [SerializeField] private Button danceGameBackToMenuButton;
    [SerializeField] private Button danceGameSeeStatsButton;
    [SerializeField] private Button danceGameSeeStatsButtonFR;
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
    [SerializeField] private Button difficulty0ButtonFR;
    [SerializeField] private GameObject isMirrorCheckMark;
    [SerializeField] private GameObject isMirrorCheckMarkFR;
    [SerializeField] private GameObject danceGameInitPos;
    [SerializeField] private GameObject danceGameStoryGamePos;

    //BeatHands game variables
    [SerializeField] private Button beatHandsGameDifficultyButton;
    [SerializeField] private Button beatHandsGameDifficultyButtonFR;
    [SerializeField] private GameObject beatHandsGameGO;
    [SerializeField] private GameObject rightBracelet;
    [SerializeField] private GameObject leftBracelet;
    [SerializeField] private Button beatHandsDifficulty0Button;
    [SerializeField] private Button beatHandsDifficulty0ButtonFR;
    [SerializeField] private BeatHandsSpawner beatHandsSpawner;
    [SerializeField] private BeatHandsGameLogic beatHandsGameLogic;
    [SerializeField] private Button beatHandsFinishNextButton;
    [SerializeField] private Button beatHandsFinishNextButtonFR;
    [SerializeField] private GameObject beatHandsGameInitPos;
    [SerializeField] private GameObject beatHandsGameStoryGamePos;

    //Balance game variables
    [SerializeField] private Button storyGameStartBalanceGameButton;
    [SerializeField] private Button storyGameStartBalanceGameButtonFR;
    [SerializeField] private Button storyGameStartBalanceGameButton2;
    [SerializeField] private Button storyGameStartBalanceGameButton2FR;
    [SerializeField] private Button startBalanceGameButton;
    [SerializeField] private Button startBalanceGameButtonFR;
    [SerializeField] private GameObject balanceGameGO;
    [SerializeField] private DoorPuzzleLogic balance1Logic;
    [SerializeField] private DoorPuzzleLogic balance2Logic;

    //Walking in Place
    [SerializeField] private WalkingInPlace Wip;
    [SerializeField] private Button WIPBackToMenuButton;

    //Shifumi variables
    [SerializeField] private Button shifumiBackToMenuButton;
    [SerializeField] private Button shifumiBackToMenuButtonFR;
    [SerializeField] private Button storyGameStartShifumiGameButton;
    [SerializeField] private Button storyGameStartShifumiGameButtonFR;
    [SerializeField] private HandPositions shifumiLogic;
    [SerializeField] private HandPositions storyShifumiLogic;
    [SerializeField] private HandPositions shifumiLogicFR;
    [SerializeField] private HandPositions storyShifumiLogicFR;

    //Story game variables
    [SerializeField] private Button storyGameBackToMenuButton;
    [SerializeField] private Button storyGameBackToMenuButtonFR;
    [SerializeField] private GameObject storyGameGO;
    [SerializeField] private Button storyGameStartDanceGameButton;
    [SerializeField] private Button storyGameStartDanceGameButtonFR;
    [SerializeField] private StoryGameLogic storyGameLogic;
    [SerializeField] private Button storyGameStartBeatHandsGameButton;
    [SerializeField] private Button storyGameStartBeatHandsGameButtonFR;
    [SerializeField] private StoryGameResults resultsTexts;

    private bool isMirror = true;
    private bool inStoryGame = false;
    public int language = 0; //0 == english, 1 == français

    private GameObject actualLandscape; //keep in memory which landscape is active
    private GameObject actualTab; //keep in memory which tab is active

    public bool isConnected = false;

    // Start is called before the first frame update
    void Start()
    {
        actualLandscape = menuLandscape;
        actualLandscape.SetActive(true);

        //actualTab = welcomeTab;
        actualTab = welcomeTabFR;
        //actualTab = languageTab;
        //actualTab = gamesTab;
        actualTab.SetActive(true);
        firstButton.Select();
        soundManager.Invoke("playIntroMenu1", 5f);
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

    public void PressWelcomeContinueButton()
    {
        actualTab.SetActive(false);
        actualTab = languageTab;
        actualTab.SetActive(true);
        EngButton.Select();
    }

    public void PressLanguageButton(int language)
    {
        this.language = language;
        soundManager.playIntroMenu2();
        if (language == 0)
        {
            changeActualTab(connexionTab);
            connectionButton.Select();
        }
        else
        {
            changeActualTab(connexionTabFR);
            connectionButtonFR.Select();
        }
    }

    #region Little Menu Functions

    public void PressGamesButton()
    {
        if (language == 0)
        {
            changeActualTab(gamesTab);
            gamesButton.Select();
        }
        else
        {
            changeActualTab(gamesTabFR);
            gamesButton.Select();
        }
    }
    

    public void PressConnexionTabButton()
    {
        if (language == 0)
        {
            changeActualTab(connexionTab);
            connectionButton.Select();
        }
        else
        {
            changeActualTab(connexionTabFR);
            connectionButtonFR.Select();
        }
    }
    #endregion

    public void PressControllerTabButton()
    {
        changeActualTab(controllerTab);
    }

    #region Calibration functions

    public void ConnectedToTheExo()
    {
        soundManager.playIntroMenu3();
        if (language == 0)
        {
            changeActualTab(calibrationTab);
            zeroLeftCellsButton.Select();
        }
        else
        {
            changeActualTab(calibrationTabFR);
            zeroLeftCellsButtonFR.Select();
        }
    }

    public void PressLeftCellsZero()
    {
        if (language == 0)
        {
            zeroLeftCellsButton.gameObject.SetActive(false);
            zeroLeftCellsTextGO.SetActive(false);
            zeroRightCellsButton.gameObject.SetActive(true);
            zeroRightCellsTextGO.SetActive(true);
            zeroRightCellsButton.Select();
        }
        else
        {
            zeroLeftCellsButtonFR.gameObject.SetActive(false);
            zeroLeftCellsTextGOFR.SetActive(false);
            zeroRightCellsButtonFR.gameObject.SetActive(true);
            zeroRightCellsTextGOFR.SetActive(true);
            zeroRightCellsButtonFR.Select();
        }
    }

    public void PressRightCellsZero()
    {
        if(language == 0)
        {
            zeroRightCellsButton.gameObject.SetActive(false);
            zeroRightCellsTextGO.SetActive(false);
            armMotorsToggle.gameObject.SetActive(true);
            doneAbdZeroButton.gameObject.SetActive(true);
            abdZeroButton.gameObject.SetActive(true);
            jointZeroButton.gameObject.SetActive(true);
            armMotorsToggle.Select();
        }
        else
        {
            zeroRightCellsButtonFR.gameObject.SetActive(false);
            zeroRightCellsTextGOFR.SetActive(false);
            armMotorsToggleFR.gameObject.SetActive(true);
            doneAbdZeroButtonFR.gameObject.SetActive(true);
            abdZeroButtonFR.gameObject.SetActive(true);
            jointZeroButtonFR.gameObject.SetActive(true);
            armMotorsToggleFR.Select();
        }
    }

    public void PressDoneAbdZero()
    {
        if(language == 0)
        {
            armMotorsToggle.gameObject.SetActive(false);
            doneAbdZeroButton.gameObject.SetActive(false);
            abdZeroButton.gameObject.SetActive(false);
            jointZeroButton.gameObject.SetActive(false);
            howToCalibrateAvatarTextGO.SetActive(true);
            doneCalibrationButton.gameObject.SetActive(true);
            doneCalibrationButton.Select();
        }
        else
        {
            armMotorsToggleFR.gameObject.SetActive(false);
            doneAbdZeroButtonFR.gameObject.SetActive(false);
            abdZeroButtonFR.gameObject.SetActive(false);
            jointZeroButtonFR.gameObject.SetActive(false);
            howToCalibrateAvatarTextGOFR.SetActive(true);
            doneCalibrationButtonFR.gameObject.SetActive(true);
            doneCalibrationButtonFR.Select();
        }
    }

    public void PressDoneCalibration()
    {
        if(language == 0)
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
        else
        {
            howToCalibrateAvatarTextGOFR.SetActive(false);
            doneCalibrationButtonFR.gameObject.SetActive(false);
            zeroLeftCellsButtonFR.gameObject.SetActive(true);
            zeroLeftCellsTextGOFR.SetActive(true);
            PressGamesButton();
            menuTab.SetActive(true);
            controllerTab.SetActive(true);
            gamesButton.Select();
        }      
    }

    #endregion

    public void PressDanceGameButton()
    {
        if (!inStoryGame)
        {
            menuTab.SetActive(false);
            actualLandscape.SetActive(false);
            actualLandscape = danceGameLandscape;
            actualLandscape.SetActive(true);
            controllerTabGO.transform.localPosition = controllerDanceGamePosGO.transform.localPosition;
            controllerTabGO.transform.localEulerAngles = new Vector3(0f, 65f, 0f);
            menuTabGO.transform.localPosition = menuDanceGamePosGO.transform.localPosition;
            menuTabGO.transform.localEulerAngles = new Vector3(50f, 0f, 0f);
            danceGameGO.SetActive(true);
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

            if(language == 0)
            {
                changeActualTab(danceGameTab);
                danceGameDifficultyButton.Select();
                playerScoreText.SetText("Accuracy: -");
                opponentScoreText.SetText("Accuracy: -");
            }
            else
            {
                changeActualTab(danceGameTabFR);
                danceGameDifficultyButtonFR.Select();
                playerScoreText.SetText("Précision: -");
                opponentScoreText.SetText("Précision: -");
            }
        }
        else
        {

            //This is called when dance game is finished in the story game
            switch (storyGameLogic.actualGameNb)
            {
                case 1:
                    storyGameLogic.finishedDanceGame1 = true;
                    resultsTexts.changeDanceScore1Text(game1Logic.resultText);
                    break;
                case 2:
                    storyGameLogic.finishedDanceGame2 = true;
                    resultsTexts.changeDanceScore2Text(game1Logic.resultText);
                    break;
                default:
                    break;
            }
            controllerTabGO.transform.localPosition = controllerInitPosGO.transform.localPosition;
            controllerTabGO.transform.localEulerAngles = new Vector3(0f, -55f, 0f);
            menuTabGO.transform.localPosition = menuInitPosGO.transform.localPosition;
            menuTabGO.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
            backgroundTab.SetActive(false);
            batteriesTab.SetActive(false);
            controllerTab.SetActive(false);
            scoreBarImg.fillAmount = 0f;
            scoreBarImgOpponent.fillAmount = 0f;
            scoreBarLogic.done1 = false;
            scoreBarLogic.done2 = false;
            scoreBarLogic.done3 = false;
            opponent.poseNb = 0;
            if (language == 0)
            {
                changeActualTab(storyGameTab);
            }
            else
            {
                changeActualTab(storyGameTabFR);
            }
        }
        
    }

    public void PressBackToMenuButton()
    {
        danceGameGO.SetActive(false);
        balanceGameGO.SetActive(false);
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
        shifumiLogic.ResetGame();
        storyShifumiLogic.ResetGame();
        shifumiLogicFR.ResetGame();
        storyShifumiLogicFR.ResetGame();
        if (inStoryGame)
        {
            inStoryGame = false;
            storyGameLogic.resetGame();
            storyGameGO.SetActive(false);
            danceGameGO.transform.position = danceGameInitPos.transform.position;
            beatHandsGameGO.transform.position = beatHandsGameInitPos.transform.position;
        }

        if (language == 0)
        {
            danceGameDifficultyButton.gameObject.SetActive(true);
        }
        else
        {
            danceGameDifficultyButtonFR.gameObject.SetActive(true);  
        }
        
    }

    public void PressPlayDanceGameButton()
    {
        if (language == 0)
        {
            changeActualTab(danceGameInGameTab);
        }
        else
        {
            changeActualTab(danceGameInGameTabFR);
        }
        game1Logic.inGame = true;
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
            if(language == 0)
            {
                isMirrorCheckMark.SetActive(false);
            }
            else
            {
                isMirrorCheckMarkFR.SetActive(false);
            }
        }
        else
        {
            mirrorAvatar.transform.localScale = new Vector3(-1f, 1f, 1f);
            isMirror = true;
            spawner.isMirror = true;
            if (language == 0)
            {
                isMirrorCheckMark.SetActive(true);
            }
            else
            {
                isMirrorCheckMarkFR.SetActive(true);
            }
        }    
    }

    public void SetGameFinishedTab()
    {
        game1Logic.finished = false;
        if (language == 0)
        {
            changeActualTab(danceGameFinishedTab);
            danceGameSeeStatsButton.Select();
        }
        else
        {
            changeActualTab(danceGameFinishedTabFR);
            danceGameSeeStatsButtonFR.Select();
        }
        soundManager.playCheeringSound();
    }

    public void PressDanceGameSeeStatsButton()
    {
        if (language == 0)
        {
            changeActualTab(danceGameStatsTab);
            danceGameDoneStatsButton.Select();
        }
        else
        {
            changeActualTab(danceGameStatsTabFR);
            danceGameDoneStatsButtonFR.Select();
        }
        game1Logic.isBlinking = false;
    }

    public void PressDanceGamedifficultyButton()
    {
        if (language == 0)
        {
            changeActualTab(danceGameDifficultyTab);
            difficulty0Button.Select();
        }
        else
        {
            changeActualTab(danceGameDifficultyTabFR);
            difficulty0ButtonFR.Select();
        }
    }

    public void PressWIPButton()
    {
        menuTab.SetActive(false);
        actualLandscape.SetActive(false);
        actualLandscape = WIPlandscape;
        actualLandscape.SetActive(true);
        backgroundTab.SetActive(false);
        batteriesTab.SetActive(false);
        changeActualTab(WIPTab);
        Wip.WIP = true;
        soundManager.stopActualMusic();
        soundManager.playWIPMusic();
        WIPBackToMenuButton.Select();
    }

    public void PressBeatHandsGameButton()
    {
        if (!inStoryGame)
        {
            if (language == 0)
            {
                changeActualTab(beatHandsGameTab);
                beatHandsGameDifficultyButton.Select();
            }
            else
            {
                changeActualTab(beatHandsGameTabFR);
                beatHandsGameDifficultyButtonFR.Select();
            }
            menuTab.SetActive(false);
            actualLandscape.SetActive(false);
            actualLandscape = BeatHandsLandscape;
            actualLandscape.SetActive(true);
            beatHandsGameGO.SetActive(true);
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
                case 3:
                    storyGameLogic.finishedBeatHandsGame1 = true;
                    resultsTexts.changeBeatHandsScore1Text(beatHandsGameLogic.resultText);
                    break;
                case 5:
                    storyGameLogic.finishedBeatHandsGame2 = true;
                    resultsTexts.changeBeatHandsScore2Text(beatHandsGameLogic.resultText);
                    break;
                default:
                    break;
            }
            if(language == 0)
            {
                changeActualTab(storyGameTab);
            }
            else
            {
                changeActualTab(storyGameTabFR);
            }
            controllerTab.SetActive(false);
            backgroundTab.SetActive(false);
            batteriesTab.SetActive(false);
        }
    }

    public void PressBeatHandsGamedifficultyButton()
    {
        if (language == 0)
        {
            changeActualTab(beatHandsGameDifficultyTab);
            beatHandsDifficulty0Button.Select();
        }
        else
        {
            changeActualTab(beatHandsGameDifficultyTabFR);
            beatHandsDifficulty0ButtonFR.Select();
        }
    }

    public void PressPlayBeatHandsGameButton()
    {
        if (language == 0)
        {
            changeActualTab(beatHandsGameInGameTab);
        }
        else
        {
            changeActualTab(beatHandsGameInGameTabFR);
        }
        beatHandsGameLogic.ToggleIsPlaying();
        abdZeroButton2.Select();
    }

    public void BeatHandsSetGameFinishedTab()
    {
        beatHandsGameLogic.finished = false;
        if (language == 0)
        {
            changeActualTab(beatHandsGameFinishedTab);
            beatHandsFinishNextButton.Select();
        }
        else
        {
            changeActualTab(beatHandsGameFinishedTabFR);
            beatHandsFinishNextButtonFR.Select();
        }
        soundManager.playCheeringSound();
    }

    public void PressShifumiButton()
    {
        menuTab.SetActive(false);
        controllerTabGO.SetActive(false);
        backgroundTab.SetActive(false);
        batteriesTab.SetActive(false);
        if (language == 0)
        {
            changeActualTab(shifumiTab);
            shifumiBackToMenuButton.Select();
        }
        else
        {
            changeActualTab(shifumiTabFR);
            shifumiBackToMenuButtonFR.Select();
        }
    }

    public void PressBalanceGameButton()
    {
        actualLandscape.SetActive(false);
        actualLandscape = WIPlandscape;
        actualLandscape.SetActive(true);
        menuTab.SetActive(false);
        controllerTabGO.SetActive(false);
        backgroundTab.SetActive(false);
        batteriesTab.SetActive(false);
        if (language == 0)
        {
            changeActualTab(balanceGameTab);
            startBalanceGameButton.gameObject.SetActive(true);
            startBalanceGameButton.Select();
        }
        else
        {
            changeActualTab(balanceGameTabFR);
            startBalanceGameButtonFR.gameObject.SetActive(true);
            startBalanceGameButtonFR.Select();
        }
        balanceGameGO.SetActive(true);
    }

    public void ToggleControllerTab()
    {
        controllerTab.SetActive(!controllerTab.activeSelf);
    }

    public void BalanceGamePressPlay(GameObjectController sphere)
    {
        sphere.startGame();
        if(language == 0)
        {
            startBalanceGameButton.gameObject.SetActive(false);
        }
        else
        {
            startBalanceGameButtonFR.gameObject.SetActive(false);
        }
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
        if (language == 0)
        {
            changeActualTab(storyGameTab);
            storyGameBackToMenuButton.Select();
        }
        else
        {
            changeActualTab(storyGameTabFR);
            storyGameBackToMenuButtonFR.Select();
        }
        soundManager.stopActualMusic();
        soundManager.playWIPMusic();
        storyGameGO.SetActive(true);
        controllerTab.SetActive(false);
        inStoryGame = true;
        danceGameGO.transform.position = danceGameStoryGamePos.transform.position;
        beatHandsGameGO.transform.position = beatHandsGameStoryGamePos.transform.position;
    }

    public void StoryGameGoToDanceGame()
    {
        danceGameGO.SetActive(true);
        backgroundTab.SetActive(true);
        batteriesTab.SetActive(true);
        controllerTab.SetActive(false);
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
        if (language == 0)
        {
            changeActualTab(storyGameDanceGameTab);
            storyGameStartDanceGameButton.Select();
            playerScoreText.SetText("Accuracy: -");
            opponentScoreText.SetText("Accuracy: -");
        }
        else
        {
            changeActualTab(storyGameDanceGameTabFR);
            storyGameStartDanceGameButtonFR.Select();
            playerScoreText.SetText("Précision: -");
            opponentScoreText.SetText("Précision: -");
        }
    }

    public void StoryGameGoToBeatHandsGame()
    {
        beatHandsGameGO.SetActive(true);
        backgroundTab.SetActive(true);
        batteriesTab.SetActive(true);
        controllerTab.SetActive(false);
        controllerTabGO.SetActive(true);
        RenderSettings.skybox = danceGameSkyMat;
        soundManager.stopActualMusic();
        soundManager.playGame1Music();
        rightBracelet.SetActive(true);
        leftBracelet.SetActive(true);
        if (language == 0)
        {
            changeActualTab(storyGameBeatHandsGameTab);
            storyGameStartBeatHandsGameButton.Select();
        }
        else
        {
            changeActualTab(storyGameBeatHandsGameTabFR);
            storyGameStartBeatHandsGameButtonFR.Select();
        }
    }

    public void StoryGameGoToBalanceGame()
    {
        controllerTab.SetActive(false);
        if (language == 0)
        {
            changeActualTab(storyGameBalanceGameTab);
            storyGameStartBeatHandsGameButton.Select();
            storyGameStartBalanceGameButton.gameObject.SetActive(true);
            storyGameStartBalanceGameButton.Select();
        }
        else
        {
            changeActualTab(storyGameBalanceGameTabFR);
            storyGameStartBeatHandsGameButtonFR.Select();
            storyGameStartBalanceGameButtonFR.gameObject.SetActive(true);
            storyGameStartBalanceGameButtonFR.Select();
        }
    }

    public void StoryGameBalanceGamePressPlay(GameObjectController sphere)
    {
        sphere.startGame();
        if (language == 0)
        {
            storyGameStartBalanceGameButton.gameObject.SetActive(false);
        }
        else
        {
            storyGameStartBalanceGameButtonFR.gameObject.SetActive(false);
        }
    }

    public void StoryGameBalanceGamePressPlay2(GameObjectController sphere)
    {
        sphere.startGame();
        if (language == 0)
        {
            storyGameStartBalanceGameButton2.gameObject.SetActive(false);
        }
        else
        {
            storyGameStartBalanceGameButton2FR.gameObject.SetActive(false);
        }
    }

    public void StoryGameBalanceGamePressFinish()
    {
        if (language == 0)
        {
            changeActualTab(storyGameTab);
            switch (storyGameLogic.actualGameNb)
            {
                case 4:
                    storyGameLogic.finishedBalanceGame1 = true;
                    storyGameStartBalanceGameButton.gameObject.SetActive(true);
                    resultsTexts.changeBalanceScore1Text(balance1Logic.resultText);
                    break;
                case 6:
                    storyGameLogic.finishedBalanceGame2 = true;
                    storyGameStartBalanceGameButton2.gameObject.SetActive(true);
                    resultsTexts.changeBalanceScore2Text(balance2Logic.resultText);
                    break;
                default:
                    break;
            }
        }
        else
        {
            changeActualTab(storyGameTab);
            switch (storyGameLogic.actualGameNb)
            {
                case 4:
                    storyGameLogic.finishedBalanceGame1 = true;
                    storyGameStartBalanceGameButtonFR.gameObject.SetActive(true);
                    resultsTexts.changeBalanceScore1Text(balance1Logic.resultText);
                    break;
                case 6:
                    storyGameLogic.finishedBalanceGame2 = true;
                    storyGameStartBalanceGameButton2FR.gameObject.SetActive(true);
                    resultsTexts.changeBalanceScore2Text(balance2Logic.resultText);
                    break;
                default:
                    break;
            }
        }
        controllerTab.SetActive(false);
        backgroundTab.SetActive(false);
        batteriesTab.SetActive(false);
    }

    public void StoryGameGoToBalanceGame2()
    {
        controllerTab.SetActive(false);
        if (language == 0)
        {
            changeActualTab(storyGameBalanceGame2Tab);
            storyGameStartBalanceGameButton2.gameObject.SetActive(true);
            storyGameStartBalanceGameButton2.Select();
        }
        else
        {
            changeActualTab(storyGameBalanceGame2TabFR);
            storyGameStartBalanceGameButton2FR.gameObject.SetActive(true);
            storyGameStartBalanceGameButton2FR.Select();
        }
    }

    public void StoryGameGoToShifumiGame()
    {
        controllerTab.SetActive(false);
        if (language == 0)
        {
            changeActualTab(storyGameShifumiGame1Tab);
            storyGameStartShifumiGameButton.gameObject.SetActive(true);
            storyGameStartShifumiGameButton.Select();
        }
        else
        {
            changeActualTab(storyGameShifumiGame1TabFR);
            storyGameStartShifumiGameButtonFR.gameObject.SetActive(true);
            storyGameStartShifumiGameButtonFR.Select();
        }
    }

    public void StoryGameShifumiGamePressFinish()
    {
        if (language == 0)
        {
            changeActualTab(storyGameTab);
            switch (storyGameLogic.actualGameNb)
            {
                case 7:
                    resultsTexts.changeShifumiScoreText(storyShifumiLogic.resultText);
                    storyGameLogic.finishedShifumiGame1 = true;
                    storyGameStartShifumiGameButton.gameObject.SetActive(true);
                    break;
                default:
                    break;
            }
        }
        else
        {
            changeActualTab(storyGameTab);
            switch (storyGameLogic.actualGameNb)
            {
                case 7:
                    resultsTexts.changeShifumiScoreText(storyShifumiLogicFR.resultText);
                    storyGameLogic.finishedShifumiGame1 = true;
                    storyGameStartShifumiGameButtonFR.gameObject.SetActive(true);
                    break;
                default:
                    break;
            }
        }
        controllerTab.SetActive(false);
        backgroundTab.SetActive(false);
        batteriesTab.SetActive(false);
    }

    #endregion

    private void changeActualTab(GameObject newTab)
    {
        actualTab.SetActive(false);
        actualTab = newTab;
        actualTab.SetActive(true);
    }
}
