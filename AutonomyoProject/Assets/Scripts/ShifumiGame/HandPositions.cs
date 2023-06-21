using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class HandPositions : MonoBehaviour
{
    [SerializeField] private SoundManager soundManager;
    [SerializeField] private MenuLogic menu;

    [SerializeField] private GameObject r_thumbGO;
    [SerializeField] private GameObject r_indexGO;
    [SerializeField] private GameObject r_middleGO;
    [SerializeField] private GameObject r_ringGO;
    [SerializeField] private GameObject r_littleGO;
    [SerializeField] private GameObject l_thumbGO;
    [SerializeField] private GameObject l_indexGO;
    [SerializeField] private GameObject l_middleGO;
    [SerializeField] private GameObject l_ringGO;
    [SerializeField] private GameObject l_littleGO;

    
    [SerializeField] private TextMeshProUGUI t1;
    [SerializeField] private TextMeshProUGUI t2;
    [SerializeField] private TextMeshProUGUI t3;
    [SerializeField] private TextMeshProUGUI t4;
    [SerializeField] private TextMeshProUGUI t5;
    [SerializeField] private TextMeshProUGUI t12;
    [SerializeField] private TextMeshProUGUI t22;
    [SerializeField] private TextMeshProUGUI t32;
    [SerializeField] private TextMeshProUGUI t42;
    [SerializeField] private TextMeshProUGUI t52;
    [SerializeField] private TextMeshProUGUI tScissors;
    [SerializeField] private TextMeshProUGUI tRock;
    [SerializeField] private TextMeshProUGUI tPaper;
    

    [SerializeField] private GameObject r_RockGO;
    [SerializeField] private GameObject r_PaperGO;
    [SerializeField] private GameObject r_ScissorsGO;
    [SerializeField] private GameObject l_RockGO;
    [SerializeField] private GameObject l_PaperGO;
    [SerializeField] private GameObject l_ScissorsGO;

    [SerializeField] private GameObject r_CrossGO;
    [SerializeField] private GameObject l_CrossGO;
    [SerializeField] private GameObject r_CheckGO;
    [SerializeField] private GameObject l_CheckGO;
    [SerializeField] private GameObject r_MinusGO;
    [SerializeField] private GameObject l_MinusGO;

    [SerializeField] private TextMeshProUGUI yourScoreText;
    [SerializeField] private TextMeshProUGUI opponentScoreText;
    [SerializeField] private TextMeshProUGUI timerText;
    [SerializeField] private Button useRightHandButton;
    [SerializeField] private Button useLeftHandButton;
    [SerializeField] private Color colorUsed;
    [SerializeField] private Color colorNotUsed;
    [SerializeField] private Color colorHighlighted;

    [SerializeField] private AvatarMovements avatarMovements;
    [SerializeField] private Button startButton;
    [SerializeField] private GameObject victoryGO;
    [SerializeField] private GameObject defeatGO;
    [SerializeField] private GameObject handPositionWarningGO;

    public bool isAlone = true;
    public bool startTimer = false;
    public string resultText = "";

    private bool botRock = false;
    private bool botPaper = false;
    private bool botScissors = false;
    private int botChoice = -1;
    private bool checkResult = false;
    private int result = 0;
    private bool isRightHand = true;
    private float timer = 0f;
    private bool waitBeforeCheck = false;
    private float waitTimer = 0f;
    private bool waitAfterCheck = false;
    private float waitAfterTimer = 0f;

    private int yourScore = 0;
    private int opponentScore = 0;

    // Start is called before the first frame update
    void Start()
    {
        pressUseRightHand();
        removeImages();
    }

    // Update is called once per frame
    void Update()
    {
        if (isAlone)
        {
            if (startTimer)
            {
                timer += Time.deltaTime;
                int seconds = (int)(timer % 60);
                timerText.SetText((3 - seconds).ToString());
                if (seconds >= 3)
                {
                    timerText.SetText("");
                    startTimer = false;
                    timer = 0f;
                    waitBeforeCheck = true;
                    botChoice = Random.Range(1, 4);
                    switch (botChoice)
                    {
                        case 1:
                            botPlaysRock();
                            avatarMovements.rock();
                            break;
                        case 2:
                            botPlaysPaper();
                            avatarMovements.paper();
                            break;
                        case 3:
                            botPlaysScissors();
                            avatarMovements.scissors();
                            break;
                        default:
                            break;
                    }
                }
            }

            if (waitBeforeCheck)
            {
                waitTimer += Time.deltaTime;
                if (waitTimer >= 0.75f)
                {
                    waitBeforeCheck = false;
                    waitTimer = 0f;
                    checkResult = true;
                }
            }

            if (isRightHand)
            {
                bool checkScissorsR = CheckScissorsRight();
                bool checkRockR = CheckRockRight();
                bool checkPaperR = CheckPaperRight();
                if (checkResult)
                {
                    if(!checkScissorsR && !checkRockR && !checkPaperR)
                    {
                        handPositionWarningGO.SetActive(true);
                    }
                    else
                    {
                        handPositionWarningGO.SetActive(false);
                    }
                    result = CheckResult(checkRockR, checkPaperR, checkScissorsR, botRock, botPaper, botScissors, true);
                    checkResult = false;
                    waitAfterCheck = true;
                    UpdateScores(result);
                    showBotImage();
                    if (checkScissorsR)
                    {
                        r_ScissorsGO.SetActive(true);
                    }
                    if (checkRockR)
                    {
                        r_RockGO.SetActive(true);
                    }
                    if (checkPaperR)
                    {
                        r_PaperGO.SetActive(true);
                    }
                    Invoke("StartTimer", 3f);
                }
            }
            else
            {
                bool checkScissorsL = CheckScissorsLeft();
                bool checkRockL = CheckRockLeft();
                bool checkPaperL = CheckPaperLeft();
                if (checkResult)
                {
                    if (!checkScissorsL && !checkRockL && !checkPaperL)
                    {
                        handPositionWarningGO.SetActive(true);
                    }
                    else
                    {
                        handPositionWarningGO.SetActive(false);
                    }
                    result = CheckResult(botRock, botPaper, botScissors, checkRockL, checkPaperL, checkScissorsL, false);
                    checkResult = false;
                    waitAfterCheck = true;
                    UpdateScores(result);
                    showBotImage();
                    if (checkScissorsL)
                    {
                        r_ScissorsGO.SetActive(true);
                    }
                    if (checkRockL)
                    {
                        r_RockGO.SetActive(true);
                    }
                    if (checkPaperL)
                    {
                        r_PaperGO.SetActive(true);
                    }
                    Invoke("StartTimer", 3f);
                }
            }

            if (waitAfterCheck)
            {
                waitAfterTimer += Time.deltaTime;
                if (waitAfterTimer >= 3f)
                {
                    waitAfterCheck = false;
                    waitAfterTimer = 0f;
                    removeImages();
                    DesactiveAllResultImages();
                    avatarMovements.goToStraight();
                    l_MinusGO.SetActive(true);
                    r_MinusGO.SetActive(true);
                }
            }
        }
        else
        {
            if (startTimer)
            {
                timer += Time.deltaTime;
                int seconds = (int)(timer % 60);
                timerText.SetText((3 - seconds).ToString());
                if(seconds >= 3)
                {
                    timerText.SetText("");
                    startTimer = false;
                    timer = 0f;
                    waitBeforeCheck = true;
                    botChoice = Random.Range(1, 4);
                    switch (botChoice)
                    {
                        case 1:
                            botPlaysRock();
                            avatarMovements.rock();
                            break;
                        case 2:
                            botPlaysPaper();
                            avatarMovements.paper();
                            break;
                        case 3:
                            botPlaysScissors();
                            avatarMovements.scissors();
                            break;
                        default:
                            break;
                    }
                }
            }

            if (waitBeforeCheck)
            {
                waitTimer += Time.deltaTime;
                if (waitTimer >= 0.75f)
                {
                    waitBeforeCheck = false;
                    waitTimer = 0f;
                    checkResult = true;
                }
            }

            if (isRightHand)
            {
                bool checkScissorsR = CheckScissorsRight();
                bool checkRockR = CheckRockRight();
                bool checkPaperR = CheckPaperRight();
                if (checkResult)
                {
                    if (!checkScissorsR && !checkRockR && !checkPaperR)
                    {
                        handPositionWarningGO.SetActive(true);
                    }
                    else
                    {
                        handPositionWarningGO.SetActive(false);
                    }
                    result = CheckResult(checkRockR, checkPaperR, checkScissorsR, botRock, botPaper, botScissors, true);
                    checkResult = false;
                    waitAfterCheck = true;
                    UpdateScores(result);
                    showBotImage();
                    if (checkScissorsR)
                    {
                        r_ScissorsGO.SetActive(true);
                    }
                    if (checkRockR)
                    {
                        r_RockGO.SetActive(true);
                    }
                    if (checkPaperR)
                    {
                        r_PaperGO.SetActive(true);
                    }
                    if (opponentScore >= 3 || yourScore >= 3)
                    {
                        resultText = yourScore.ToString() + "-" + opponentScore.ToString();
                        avatarMovements.goToStraight();
                        if (opponentScore >= 3)
                        {
                            defeatGO.SetActive(true);
                        }
                        else
                        {
                            victoryGO.SetActive(true);
                            menu.Invoke("StoryGameShifumiGamePressFinish", 3f);
                        }
                    }
                    else
                    {
                        Invoke("StartTimer", 3f);
                    }
                }
            }
            else
            {
                bool checkScissorsL = CheckScissorsLeft();
                bool checkRockL = CheckRockLeft();
                bool checkPaperL = CheckPaperLeft();
                if (checkResult)
                {
                    if (!checkScissorsL && !checkRockL && !checkPaperL)
                    {
                        handPositionWarningGO.SetActive(true);
                    }
                    else
                    {
                        handPositionWarningGO.SetActive(false);
                    }
                    result = CheckResult(botRock, botPaper, botScissors, checkRockL, checkPaperL, checkScissorsL, false);
                    checkResult = false;
                    waitAfterCheck = true;
                    UpdateScores(result);
                    showBotImage();
                    if (checkScissorsL)
                    {
                        r_ScissorsGO.SetActive(true);
                    }
                    if (checkRockL)
                    {
                        r_RockGO.SetActive(true);
                    }
                    if (checkPaperL)
                    {
                        r_PaperGO.SetActive(true);
                    }
                    if (opponentScore >= 3 || yourScore >= 3)
                    {
                        resultText = yourScore.ToString() + "-" + opponentScore.ToString();
                        avatarMovements.goToStraight();
                        if (opponentScore >= 3)
                        {
                            defeatGO.SetActive(true);
                        }
                        else
                        {
                            victoryGO.SetActive(true);
                        }
                    }
                    else
                    {
                        Invoke("StartTimer", 3f);
                    }
                }
            }

            if (waitAfterCheck)
            {
                waitAfterTimer += Time.deltaTime;
                if (waitAfterTimer >= 3f)
                {
                    waitAfterCheck = false;
                    waitAfterTimer = 0f;
                    removeImages();
                    DesactiveAllResultImages();
                    avatarMovements.goToStraight();
                    l_MinusGO.SetActive(true);
                    r_MinusGO.SetActive(true);  
                }
            }
        }
        

        /*
        t1.SetText(r_thumbGO.transform.localEulerAngles.x.ToString());
        t2.SetText(r_indexGO.transform.localEulerAngles.x.ToString());
        t3.SetText(r_middleGO.transform.localEulerAngles.x.ToString());
        float test = r_ringGO.transform.localEulerAngles.x;
        test = (test > 180f) ? test - 360f : test;
        t4.SetText(test.ToString());
        t5.SetText(r_littleGO.transform.localEulerAngles.x.ToString());
        t12.SetText(l_thumbGO.transform.localEulerAngles.x.ToString());
        t22.SetText(l_indexGO.transform.localEulerAngles.x.ToString());
        t32.SetText(l_middleGO.transform.localEulerAngles.x.ToString());
        t42.SetText(l_ringGO.transform.localEulerAngles.x.ToString());
        t52.SetText(l_littleGO.transform.localEulerAngles.x.ToString());
        */
    }

    private bool CheckScissorsRight()
    {
        float x1 = r_thumbGO.transform.localEulerAngles.x;
        float x2 = r_indexGO.transform.localEulerAngles.x;
        float x3 = r_middleGO.transform.localEulerAngles.x;
        float x4 = r_ringGO.transform.localEulerAngles.x;
        float x5 = r_littleGO.transform.localEulerAngles.x;
        bool check1 = CheckAngle(x1, 10f, 25f);
        bool check2 = CheckAngle(x2, 10f, 25f);
        bool check3 = CheckAngle(x3, 20f, 45f);
        bool check4 = CheckAngle(x4, -35f, 30f);
        bool check5 = CheckAngle(x5, -35f, 30f);

        bool check = false;
        if (check1 && check2 && check3 && check4 && check5)
        {
            check = true;
        }
        return check;
    }

    private bool CheckScissorsLeft()
    {
        float x12 = l_thumbGO.transform.localEulerAngles.x;
        float x22 = l_indexGO.transform.localEulerAngles.x;
        float x32 = l_middleGO.transform.localEulerAngles.x;
        float x42 = l_ringGO.transform.localEulerAngles.x;
        float x52 = l_littleGO.transform.localEulerAngles.x;
        bool check12 = CheckAngle(x12, 10f, 25f);
        bool check22 = CheckAngle(x22, 10f, 25f);
        bool check32 = CheckAngle(x32, 20f, 45f);
        bool check42 = CheckAngle(x42, -35f, 30f);
        bool check52 = CheckAngle(x52, -35f, 30f);

        bool check = false;
        if (check12 && check22 && check32 && check42 && check52)
        {
            check = true;
        }
        return check;
    }

    private bool CheckRockRight()
    {
        float x1 = r_thumbGO.transform.localEulerAngles.x;
        float x2 = r_indexGO.transform.localEulerAngles.x;
        float x3 = r_middleGO.transform.localEulerAngles.x;
        float x4 = r_ringGO.transform.localEulerAngles.x;
        float x5 = r_littleGO.transform.localEulerAngles.x;
        bool check1 = CheckAngle(x1, 10f, 25f);
        bool check2 = CheckAngle(x2, -60f, 25f);
        bool check3 = CheckAngle(x3, -60f, 25f);
        bool check4 = CheckAngle(x4, -60f, 25f);
        bool check5 = CheckAngle(x5, -60f, 25f);

        bool check = false;
        if (check1 && check2 && check3 && check4 && check5)
        {
            check = true;
        }
        
        return check;
    }

    private bool CheckRockLeft()
    {
        float x12 = l_thumbGO.transform.localEulerAngles.x;
        float x22 = l_indexGO.transform.localEulerAngles.x;
        float x32 = l_middleGO.transform.localEulerAngles.x;
        float x42 = l_ringGO.transform.localEulerAngles.x;
        float x52 = l_littleGO.transform.localEulerAngles.x;
        bool check12 = CheckAngle(x12, 10f, 25f);
        bool check22 = CheckAngle(x22, -60f, 25f);
        bool check32 = CheckAngle(x32, -60f, 25f);
        bool check42 = CheckAngle(x42, -60f, 25f);
        bool check52 = CheckAngle(x52, -60f, 25f);

        bool check = false;
        if (check12 && check22 && check32 && check42 && check52)
        {
            check = true;
        }

        return check;
    }


    private bool CheckPaperRight()
    {
        float x1 = r_thumbGO.transform.localEulerAngles.x;
        float x2 = r_indexGO.transform.localEulerAngles.x;
        float x3 = r_middleGO.transform.localEulerAngles.x;
        float x4 = r_ringGO.transform.localEulerAngles.x;
        float x5 = r_littleGO.transform.localEulerAngles.x;
        bool check1 = CheckAngle(x1, 15f, 25f);
        bool check2 = CheckAngle(x2, 15f, 25f);
        bool check3 = CheckAngle(x3, 15f, 25f);
        bool check4 = CheckAngle(x4, 15f, 25f);
        bool check5 = CheckAngle(x5, 15f, 25f);

        bool check = false;
        if (check1 && check2 && check3 && check4 && check5)
        {
            check = true;
        }
        
        return check;
    }

    private bool CheckPaperLeft()
    {
        float x12 = l_thumbGO.transform.localEulerAngles.x;
        float x22 = l_indexGO.transform.localEulerAngles.x;
        float x32 = l_middleGO.transform.localEulerAngles.x;
        float x42 = l_ringGO.transform.localEulerAngles.x;
        float x52 = l_littleGO.transform.localEulerAngles.x;
        bool check12 = CheckAngle(x12, 15f, 25f);
        bool check22 = CheckAngle(x22, 15f, 25f);
        bool check32 = CheckAngle(x32, 15f, 25f);
        bool check42 = CheckAngle(x42, 15f, 25f);
        bool check52 = CheckAngle(x52, 15f, 25f);

        bool check = false;
        if (check12 && check22 && check32 && check42 && check52)
        {
            check = true;
        }

        return check;
    }

    private bool CheckAngle(float angle, float target, float marginOfAngle)
    {
        bool check = false;
        angle = (angle > 180f) ? angle - 360f : angle;
        if (angle + marginOfAngle >= target && angle - marginOfAngle <= target)
        {
            check = true;
        }
        else
        {
            check = false;
        }
        return check;
    }

    private int CheckResult(bool rockR, bool paperR, bool scissorsR, bool rockL, bool paperL, bool scissorsL, bool isRightHand)
    {
        if ((rockL && scissorsR) || (scissorsL && paperR) || (paperL && rockR))
        {
            DesactiveAllResultImages();
            l_CheckGO.SetActive(true);
            r_CrossGO.SetActive(true);
            if (isRightHand)
            {
                return -1;
            }
            else
            {
                return 1;
            }
        }
        else
        {
            if ((rockR && scissorsL) || (scissorsR && paperL) || (paperR && rockL))
            {
                DesactiveAllResultImages();
                r_CheckGO.SetActive(true);
                l_CrossGO.SetActive(true);
                if (isRightHand)
                {
                    return 1;
                }
                else
                {
                    return -1;
                }
            }
            else
            {
                DesactiveAllResultImages();
                l_MinusGO.SetActive(true);
                r_MinusGO.SetActive(true);
                return 0;
            }
        }
        
    }

    private void DesactiveAllResultImages()
    {
        l_CrossGO.SetActive(false);
        r_CrossGO.SetActive(false);
        l_CheckGO.SetActive(false);
        r_CheckGO.SetActive(false);
        l_MinusGO.SetActive(false);
        r_MinusGO.SetActive(false);
    }

    public void botPlaysRock()
    {
        botRock = true;
        botPaper = false;
        botScissors = false;
    }

    public void botPlaysPaper()
    {
        botRock = false;
        botPaper = true;
        botScissors = false;
    }

    public void botPlaysScissors()
    {
        botRock = false;
        botPaper = false;
        botScissors = true;
    }

    private void pressCheckResult()
    {
        checkResult = true;
    }

    private void UpdateScores(int result)
    {
        switch (result)
        {
            case -1:
                opponentScore += 1;
                opponentScoreText.SetText(opponentScore.ToString());
                break;
            case 0:
                break;
            case 1:
                yourScore += 1;
                yourScoreText.SetText(yourScore.ToString());
                break;
            default:
                break;
        }
    }

    public void ResetGame()
    {
        opponentScore = 0;
        yourScore = 0;
        opponentScoreText.SetText(opponentScore.ToString());
        yourScoreText.SetText(yourScore.ToString());
        timer = 0f;
        botRock = false;
        botPaper = false;
        botScissors = false;
        victoryGO.SetActive(false);
        defeatGO.SetActive(false);
        waitBeforeCheck = false;
        checkResult = false;
        startTimer = false;
        startButton.gameObject.SetActive(true);
        startButton.gameObject.SetActive(true);
    }

    public void pressUseRightHand()
    {
        ColorBlock rightColors = useRightHandButton.colors;
        rightColors.normalColor = colorUsed;
        rightColors.selectedColor = colorUsed;
        useRightHandButton.colors = rightColors;

        ColorBlock leftColors = useLeftHandButton.colors;
        leftColors.normalColor = colorNotUsed;
        leftColors.selectedColor = colorHighlighted;
        useLeftHandButton.colors = leftColors;

        isRightHand = true;
    }

    public void pressUseLeftHand()
    {
        ColorBlock rightColors = useRightHandButton.colors;
        rightColors.normalColor = colorNotUsed;
        rightColors.selectedColor = colorHighlighted;
        useRightHandButton.colors = rightColors;

        ColorBlock leftColors = useLeftHandButton.colors;
        leftColors.normalColor = colorUsed;
        leftColors.selectedColor = colorUsed;
        useLeftHandButton.colors = leftColors;

        isRightHand = false;
    }

    private void removeImages()
    {
        r_ScissorsGO.SetActive(false);
        l_ScissorsGO.SetActive(false);
        r_RockGO.SetActive(false);
        l_RockGO.SetActive(false);
        r_PaperGO.SetActive(false);
        l_PaperGO.SetActive(false);
    }

    private void showBotImage()
    {
        switch (botChoice)
        {
            case 1:
                l_RockGO.SetActive(true);
                break;
            case 2:
                l_PaperGO.SetActive(true);
                break;
            case 3:
                l_ScissorsGO.SetActive(true);
                break;
            default:
                break;
        }
    }

    public void restart()
    {
        ResetGame();
        StartTimer();
        startButton.gameObject.SetActive(false);
    }

    private void StartTimer()
    {
        startTimer = true;
    }
}
