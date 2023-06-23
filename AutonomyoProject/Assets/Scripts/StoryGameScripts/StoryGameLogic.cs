using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryGameLogic : MonoBehaviour
{

    [SerializeField] private OVRScreenFade screenFade;
    [SerializeField] private WalkingInPlace WIP;
    [SerializeField] private GameObject playerGO;
    [SerializeField] private GameObject initialSpawnGO;
    [SerializeField] private MenuLogic menu;
    [SerializeField] private SoundManager soundManager;

    //Skybox materials
    [SerializeField] private Material danceGameSkyMat;
    [SerializeField] private Material menuSkyMat;

    //Intro Avatar variables
    [SerializeField] private GameObject introAvatarGO;
    [SerializeField] private JawMovement introAvatarJaw;
    [SerializeField] private AvatarMovements introAvatarMovements;

    //Game 1 Avatar variables
    [SerializeField] private GameObject game1AvatarGO;
    [SerializeField] private JawMovement game1AvatarJaw;
    [SerializeField] private AvatarMovements game1AvatarMovements;

    //Game 2 Avatar variables
    [SerializeField] private GameObject game2AvatarGO;
    [SerializeField] private JawMovement game2AvatarJaw;
    [SerializeField] private AvatarMovements game2AvatarMovements;

    //Game 3 Avatar variables
    [SerializeField] private GameObject game3AvatarGO;
    [SerializeField] private JawMovement game3AvatarJaw;
    [SerializeField] private AvatarMovements game3AvatarMovements;

    //Game 4 Avatar variables
    [SerializeField] private GameObject game4AvatarGO;
    [SerializeField] private JawMovement game4AvatarJaw;
    [SerializeField] private AvatarMovements game4AvatarMovements;

    //Game 5 Avatar variables
    [SerializeField] private GameObject game5AvatarGO;
    [SerializeField] private JawMovement game5AvatarJaw;
    [SerializeField] private AvatarMovements game5AvatarMovements;

    //Game 6 Avatar variables
    [SerializeField] private GameObject game6AvatarGO;
    [SerializeField] private JawMovement game6AvatarJaw;
    [SerializeField] private AvatarMovements game6AvatarMovements;

    //Dance game variables
    [SerializeField] private GameObject danceGameSpawnerGO;
    [SerializeField] private Game1Logic danceGameLogic;
    private int danceGameDifficulty = 1;

    //BeatHands game variables
    [SerializeField] private GameObject beatHandsGameSpawnerGO;
    [SerializeField] private BeatHandsGameLogic beathandsGameLogic;
    private int beatHandsGameDifficulty = 1;

    //Balance game variables
    [SerializeField] private GameObject balanceGame1SpawnerGO;
    [SerializeField] private GameObject balanceGame2SpawnerGO;

    //DanceGame 1 variables
    [SerializeField] private GameObject danceGame1RespawnGO;
    private bool doneDanceGame1 = false;
    public bool finishedDanceGame1 = false;

    //DanceGame 2 variables
    [SerializeField] private GameObject danceGame2RespawnGO;
    private bool doneDanceGame2 = false;
    public bool finishedDanceGame2 = false;

    //Beathands game 1 variables
    [SerializeField] private GameObject beatHandsGame1RespawnGO;
    private bool doneBeatHandsGame1 = false;
    public bool finishedBeatHandsGame1 = false;

    //Beathands game 2 variables
    [SerializeField] private GameObject beatHandsGame2RespawnGO;
    private bool doneBeatHandsGame2 = false;
    public bool finishedBeatHandsGame2 = false;

    //Balance game 1 variables
    [SerializeField] private GameObject balanceGame1RespawnGO;
    private bool doneBalanceGame1 = false;
    public bool finishedBalanceGame1 = false;
    [SerializeField] private DoorPuzzleLogic balanceGame1Logic;

    //Balance game 2 variables
    [SerializeField] private GameObject balanceGame2RespawnGO;
    private bool doneBalanceGame2 = false;
    public bool finishedBalanceGame2 = false;
    [SerializeField] private DoorPuzzleLogic balanceGame2Logic;

    //Shifumi game 1 variables
    private bool doneShifumiGame1 = false;
    public bool finishedShifumiGame1 = false;
    [SerializeField] private HandPositions shifumiLogic;

    //General variables
    private bool restart = true;
    public int actualGameNb = 0;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (restart)
        {
            screenFade.FadeIn();
            runIntro();
            restart = false;
        }

        if (finishedDanceGame1 && !doneDanceGame1)
        {
            doneDanceGame1 = true;
            screenFade.FadeOut();
            Invoke("danceGame1Finished", 5f);
        }

        if (finishedDanceGame2 && !doneDanceGame2)
        {
            doneDanceGame2 = true;
            screenFade.FadeOut();
            Invoke("danceGame2Finished", 5f);
        }

        if (finishedBeatHandsGame1 && !doneBeatHandsGame1)
        {
            doneBeatHandsGame1 = true;
            screenFade.FadeOut();
            Invoke("BeatHandsGame1Finished", 5f);
        }

        if (finishedBalanceGame1 && !doneBalanceGame1)
        {
            doneBalanceGame1 = true;
            screenFade.FadeOut();
            Invoke("BalanceGame1Finished", 5f);
        }

        if (finishedBeatHandsGame2 && !doneBeatHandsGame2)
        {
            doneBeatHandsGame2 = true;
            screenFade.FadeOut();
            Invoke("BeatHandsGame2Finished", 5f);
        }

        if (finishedBalanceGame2 && !doneBalanceGame2)
        {
            doneBalanceGame2 = true;
            Invoke("BalanceGame2Finished", 5f);
        }

        if (finishedShifumiGame1 && !doneShifumiGame1)
        {
            doneShifumiGame1 = true;
            game6AvatarJaw.Invoke("toggleIsTalking", 2f);
            soundManager.Invoke("playStoryV7_2", 2f);
            game6AvatarJaw.Invoke("toggleIsTalking", 5.5f);
            screenFade.Invoke("FadeOut", 5f);
            Invoke("ShifumiGame1Finished", 9f);
        }
    }

    private void runIntro()
    {
        introAvatarJaw.Invoke("toggleIsTalking", 3f);
        soundManager.Invoke("playStoryV1_1", 3f);
        //Animation of Avatar to say hello to player
        for (int i = 0; i < 8; ++i)
        {
            if (i % 2 == 0)
            {
                introAvatarMovements.Invoke("waveHandRight", 3f + (i / 2f));
            }
            else
            {
                introAvatarMovements.Invoke("waveHandLeft", 3f + (i / 2f));
            }
        }
        introAvatarMovements.Invoke("goToStraight", 7f);

        //hands animation when avatar is talking
        for (int i = 0; i < 16; ++i)
        {
            if (i % 2 == 0)
            {
                introAvatarMovements.Invoke("handsTalkingDown", 12f + (i / 2f));
            }
            else
            {
                introAvatarMovements.Invoke("handsTalkingUp", 12f + (i / 2f));
            }
        }
        introAvatarMovements.Invoke("goToStraight", 21f);

        //animation of the avatar to show how to walk to the player
        for (int i = 0; i < 5; ++i)
        {
            if (i % 2 == 0)
            {
                introAvatarMovements.Invoke("walkRight", 25f + (3f * i / 2f));
            }
            else
            {
                introAvatarMovements.Invoke("walkLeft", 25f + (3f * i / 2f));
            }
            introAvatarMovements.Invoke("goToStraight", 25f + (3f * i / 2f) + 0.75f);
        }

        WIP.Invoke("toggleWIP", 24.5f);
        introAvatarJaw.Invoke("toggleIsTalking", 40f);
    }

    public void RunDanceGame1()
    {
        actualGameNb = 1;
        game1AvatarJaw.Invoke("toggleIsTalking", 0f);
        soundManager.playStoryV2_1();
        screenFade.Invoke("FadeOut", 13f);
        Invoke("goToDanceGame", 19f);
        danceGameDifficulty = 1;
        game1AvatarJaw.Invoke("toggleIsTalking", 14f);
    }

    public void RunDanceGame2()
    {
        actualGameNb = 2;
        game3AvatarJaw.Invoke("toggleIsTalking", 0f);
        soundManager.playStoryV5_1();
        screenFade.Invoke("FadeOut", 12f);
        Invoke("goToDanceGame", 18f);
        danceGameDifficulty = 2;
        game3AvatarJaw.Invoke("toggleIsTalking", 13f);
    }

    public void RunBeatHandsGame1()
    {
        actualGameNb = 3;
        game2AvatarJaw.Invoke("toggleIsTalking", 0f);
        soundManager.playStoryV3_1();
        screenFade.Invoke("FadeOut", 6f);
        Invoke("goToBeatHandsGame", 12f);
        beatHandsGameDifficulty = 2;
        game2AvatarJaw.Invoke("toggleIsTalking", 7f);
    }

    public void RunBeatHandsGame2()
    {
        actualGameNb = 5;
        game5AvatarJaw.Invoke("toggleIsTalking", 0f);
        soundManager.playStoryV6_1();
        screenFade.Invoke("FadeOut", 12f);
        Invoke("goToBeatHandsGame", 18f);
        beatHandsGameDifficulty = 3;
        game5AvatarJaw.Invoke("toggleIsTalking", 13f);
    }

    public void RunBalanceGame1()
    {
        actualGameNb = 4;
        game4AvatarJaw.Invoke("toggleIsTalking", 0f);
        soundManager.playStoryV4_1();
        screenFade.Invoke("FadeOut", 7f);
        Invoke("goToBalanceGame1", 13f);
        game4AvatarJaw.Invoke("toggleIsTalking", 8f);
    }

    public void RunBalanceGame2()
    {
        actualGameNb = 6;
        Invoke("goToBalanceGame2", 0f);
    }
    public void RunShifumiGame1()
    {
        actualGameNb = 7;
        game6AvatarJaw.Invoke("toggleIsTalking", 0f);
        soundManager.playStoryV7_1();
        screenFade.Invoke("FadeOut", 10f);
        Invoke("goToShifumiGame1", 16f);
        game6AvatarJaw.Invoke("toggleIsTalking", 11f);
    }

    public void RunEnd()
    {
        menu.Invoke("PressBackToMenuButton", 24f);
        screenFade.Invoke("FadeOut", 18f);
        screenFade.Invoke("FadeIn", 24f);
    }


    public void goToDanceGame()
    {
        playerGO.transform.position = danceGameSpawnerGO.transform.position;
        playerGO.transform.localEulerAngles = new Vector3(0f, -90f, 0f);
        screenFade.FadeIn();
        RenderSettings.skybox = danceGameSkyMat;
        soundManager.toggleWIPMusic();
        menu.StoryGameGoToDanceGame();
        danceGameLogic.SetDifficulty(danceGameDifficulty);
    }

    public void goToBeatHandsGame()
    {
        playerGO.transform.position = beatHandsGameSpawnerGO.transform.position;
        playerGO.transform.localEulerAngles = new Vector3(0f, -90f, 0f);
        screenFade.FadeIn();
        RenderSettings.skybox = danceGameSkyMat;
        soundManager.toggleWIPMusic();
        menu.StoryGameGoToBeatHandsGame();
        beathandsGameLogic.SetDifficulty(beatHandsGameDifficulty);
    }

    public void goToBalanceGame1()
    {
        playerGO.transform.position = balanceGame1SpawnerGO.transform.position;
        playerGO.transform.localEulerAngles = new Vector3(0f, -180f, 0f);
        screenFade.FadeIn();
        menu.StoryGameGoToBalanceGame();
        game4AvatarGO.SetActive(false);
    }

    public void goToBalanceGame2()
    {
        playerGO.transform.position = balanceGame2SpawnerGO.transform.position;
        playerGO.transform.localEulerAngles = new Vector3(0f, -90f, 0f);
        menu.StoryGameGoToBalanceGame2();
    }

    public void goToShifumiGame1()
    {
        playerGO.transform.position = balanceGame2SpawnerGO.transform.position;
        playerGO.transform.localEulerAngles = new Vector3(0f, -90f, 0f);
        screenFade.FadeIn();
        menu.StoryGameGoToShifumiGame();
    }

    private void danceGame1Finished()
    {
        playerGO.transform.position = danceGame1RespawnGO.transform.position;
        screenFade.FadeIn();
        RenderSettings.skybox = menuSkyMat;
        soundManager.stopActualMusic();
        soundManager.toggleWIPMusic();
        WIP.WIP = true;
        game1AvatarJaw.Invoke("toggleIsTalking", 4f);
        soundManager.Invoke("playStoryV2_2", 4f);
        game1AvatarJaw.Invoke("toggleIsTalking", 16f);
    }

    private void danceGame2Finished()
    {
        playerGO.transform.position = danceGame2RespawnGO.transform.position;
        screenFade.FadeIn();
        RenderSettings.skybox = menuSkyMat;
        soundManager.stopActualMusic();
        soundManager.toggleWIPMusic();
        WIP.WIP = true;
        game3AvatarJaw.Invoke("toggleIsTalking", 4f);
        soundManager.Invoke("playStoryV5_2", 4f);
        game3AvatarJaw.Invoke("toggleIsTalking", 18f);
    }

    private void BeatHandsGame1Finished()
    {
        playerGO.transform.position = beatHandsGame1RespawnGO.transform.position;
        screenFade.FadeIn();
        RenderSettings.skybox = menuSkyMat;
        soundManager.stopActualMusic();
        soundManager.toggleWIPMusic();
        WIP.WIP = true;
        game2AvatarJaw.Invoke("toggleIsTalking", 4f);
        soundManager.Invoke("playStoryV3_2", 4f);
        game2AvatarJaw.Invoke("toggleIsTalking", 11f);
    }

    private void BeatHandsGame2Finished()
    {
        playerGO.transform.position = beatHandsGame2RespawnGO.transform.position;
        screenFade.FadeIn();
        RenderSettings.skybox = menuSkyMat;
        soundManager.stopActualMusic();
        soundManager.toggleWIPMusic();
        WIP.WIP = true;
        game5AvatarJaw.Invoke("toggleIsTalking", 4f);
        soundManager.Invoke("playStoryV6_2", 4f);
        game5AvatarJaw.Invoke("toggleIsTalking", 9f);
    }

    private void BalanceGame1Finished()
    {
        playerGO.transform.position = balanceGame1RespawnGO.transform.position;
        playerGO.transform.localEulerAngles = new Vector3(0f, -90f, 0f);
        screenFade.FadeIn();
        game4AvatarGO.SetActive(true);
        WIP.WIP = true;
        game4AvatarJaw.Invoke("toggleIsTalking", 4f);
        soundManager.Invoke("playStoryV4_2", 4f);
        game4AvatarJaw.Invoke("toggleIsTalking", 13f);
    }

    private void BalanceGame2Finished()
    {
        playerGO.transform.position = balanceGame2RespawnGO.transform.position;
        playerGO.transform.localEulerAngles = new Vector3(0f, -90f, 0f);
        WIP.WIP = true;
    }

    private void ShifumiGame1Finished()
    {
        playerGO.transform.position = balanceGame2RespawnGO.transform.position;
        playerGO.transform.localEulerAngles = new Vector3(0f, -90f, 0f);
        screenFade.FadeIn();
        game6AvatarGO.SetActive(false);
        Invoke("RunBalanceGame2", 1f);
    }

    public void resetGame()
    {
        playerGO.transform.position = initialSpawnGO.transform.position;
        doneDanceGame1 = false;
        finishedDanceGame1 = false;
        doneDanceGame2 = false;
        finishedDanceGame2 = false;
        doneBeatHandsGame1 = false;
        finishedBeatHandsGame1 = false;
        doneBalanceGame1 = false;
        finishedBalanceGame1 = false;
        doneBeatHandsGame2 = false;
        finishedBeatHandsGame2 = false;
        doneBalanceGame2 = false;
        finishedBalanceGame2 = false;
        doneShifumiGame1 = false;
        finishedShifumiGame1 = false;
        restart = true;
    }

}
