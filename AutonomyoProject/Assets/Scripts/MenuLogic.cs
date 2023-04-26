using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;
using UnityEngine.XR;
using TMPro;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 26.04.2023
  Summary: The following script contains the logic of the menu. All the buttons logic and all the transitions are handled here.
*/

public class MenuLogic : MonoBehaviour
{

    //Spawner
    [SerializeField] private Spawner spawner;

    //Sound manager
    [SerializeField] private SoundManager soundManager;

    //Skybox materials
    [SerializeField] private Material danceGameSkyMat;
    [SerializeField] private Material menuSkyMat;

    //curved menu variables
    [SerializeField] private GameObject curvedMenuGO;
    [SerializeField] private GameObject curvedMenuInitPosGO;
    [SerializeField] private GameObject curvedMenuDanceGamePosGO;

    //landscapes
    [SerializeField] private GameObject freeMoutains;
    [SerializeField] private GameObject danceGameLandscape;
    [SerializeField] private GameObject menuLandscape;

    //Tabs of the menu
    [SerializeField] private GameObject connexionTab;
    [SerializeField] private GameObject controllerTab;
    [SerializeField] private GameObject welcomeTab;
    [SerializeField] private GameObject menuTab;
    [SerializeField] private GameObject gamesTab;
    [SerializeField] private GameObject danceGameTab;
    [SerializeField] private GameObject danceGameFinishedTab;
    [SerializeField] private GameObject danceGameInGameTab;
    [SerializeField] private GameObject calibrationTab;
    [SerializeField] private GameObject danceGameStatsTab;

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
    [SerializeField] private Button danceGameStartButton;
    [SerializeField] private Button danceGameBackToMenuButton;
    [SerializeField] private Button danceGameSeeStatsButton;
    [SerializeField] private Game1Logic game1Logic;
    [SerializeField] private GameObject danceGameGO;
    [SerializeField] private GameObject mirrorAvatar;
    [SerializeField] private GameObject avatarToCopy;
    private bool isMirror = true;

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
        menuTab.SetActive(false);
        actualLandscape.SetActive(false);
        actualLandscape = danceGameLandscape;
        actualLandscape.SetActive(true);
        danceGameGO.SetActive(true);
        actualTab.SetActive(false);
        actualTab = danceGameTab;
        actualTab.SetActive(true);
        danceGameStartButton.Select();
        curvedMenuGO.transform.localPosition = curvedMenuDanceGamePosGO.transform.localPosition;
        curvedMenuGO.transform.localEulerAngles = curvedMenuDanceGamePosGO.transform.localEulerAngles;
        RenderSettings.skybox = danceGameSkyMat;
        game1Logic.isBlinking = true;
        soundManager.stopActualMusic();
        soundManager.playGame1Music();
    }

    public void PressBackToMenuButton()
    {
        danceGameStartButton.gameObject.SetActive(true);
        danceGameGO.SetActive(false);
        actualLandscape.SetActive(false);
        actualLandscape = menuLandscape;
        actualLandscape.SetActive(true);
        menuTab.SetActive(true);
        PressGamesButton();
        gamesButton.Select();
        curvedMenuGO.transform.localPosition = curvedMenuInitPosGO.transform.localPosition;
        curvedMenuGO.transform.localEulerAngles = curvedMenuInitPosGO.transform.localEulerAngles;
        RenderSettings.skybox = menuSkyMat;
        soundManager.stopActualMusic();
        soundManager.playHomeMusic();
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
        }
        else
        {
            mirrorAvatar.transform.localScale = new Vector3(-1f, 1f, 1f);
            isMirror = true;
            spawner.isMirror = true;
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
}
