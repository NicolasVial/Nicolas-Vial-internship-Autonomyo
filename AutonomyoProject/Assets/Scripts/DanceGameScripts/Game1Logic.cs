using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;
using System.Linq;
using UnityEngine;
using System;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// The following script contains the logic of the Dance Game. The validation of the movements, the trigger 
/// of the movements of the avatar to copy as well as all the game gestion are done here.
/// </summary>

public class Game1Logic : MonoBehaviour
{
    [SerializeField] private OpponentLogic opponent;
    [SerializeField] private AvatarToCopyLogic avatarToCopyLogic;
    [SerializeField] private float timeToValidate;
    [SerializeField] private FrontalPlane frontalPlane;
    [SerializeField] private SagittalPlane sagittalPlane;
    [SerializeField] private float marginOfErrorPos;
    [SerializeField] private float marginOfErrorAngles;
    [SerializeField] private float marginOfErrorAnglesAbd;
    [SerializeField] private CircularProgressBar progressBar;
    [SerializeField] private GameObject theClient;
    [SerializeField] private GameObject f_l_kneeGO;
    [SerializeField] private GameObject f_r_kneeGO;
    [SerializeField] private GameObject f_l_footGO;
    [SerializeField] private GameObject f_r_footGO;
    [SerializeField] private GameObject s_l_kneeGO;
    [SerializeField] private GameObject s_r_kneeGO;
    [SerializeField] private GameObject s_l_footGO;
    [SerializeField] private GameObject s_r_footGO;
    [SerializeField] private TextMeshProUGUI scoreText;
    [SerializeField] private TextMeshProUGUI avrTimeText;
    [SerializeField] private TextMeshProUGUI scoreTextFR;
    [SerializeField] private TextMeshProUGUI avrTimeTextFR;
    [SerializeField] private int maxNbOfSuccesses = 10;
    [SerializeField] private SoundManager soundManager;
    [SerializeField] private Spawner spawner;
    [SerializeField] private WindowGraph graph;
    [SerializeField] private WindowGraph graphFR;
    [SerializeField] private MenuLogic menu;
    [SerializeField] private Material correctAngleMat;
    [SerializeField] private Material wrongAngleMat;
    [SerializeField] private GameObject l_hipCorrectness;
    [SerializeField] private GameObject l_kneeCorrectness;
    [SerializeField] private GameObject r_hipCorrectness;
    [SerializeField] private GameObject r_kneeCorrectness;
    [SerializeField] private GameObject l_arrowExter;
    [SerializeField] private GameObject l_arrowInter;
    [SerializeField] private GameObject r_arrowExter;
    [SerializeField] private GameObject r_arrowInter;

    private float validationCounter = 0f;
    private Vector3[] targetPositions = null;
    private float[] targetAngles = null;
    private bool newPose = true;
    private ClientSide clientSide;
    private bool done = false;
    private SyncVar leftAbdAngle;
    private SyncVar rightAbdAngle;
    private SyncVar leftHipAngle;
    private SyncVar rightHipAngle;
    private SyncVar leftKneeAngle;
    private SyncVar rightKneeAngle;
    private int nbOfSuccesses = 0;

    private string poseName; //name of the pose to imitate
    private bool poseFinished = false;

    //transparent blue legs are blinking during explanation
    private GameObject blinkGO1;
    private GameObject blinkGO2;
    private bool blinkUp = true;

    // timer variables
    private float startTime;
    private float totalTime;
    private List<float> poseTimes = new List<float>();

    //score variables
    [SerializeField] private Image scoreBarImg;
    private bool firstFrame = true;
    private float poseScore = 0f;
    [SerializeField] private TextMeshProUGUI finalScoreText;
    [SerializeField] private TextMeshProUGUI finalScoreTextFR;
    [SerializeField] private TextMeshProUGUI playerScoreText;

    //public variables
    public bool inGame = false;
    public bool finished = false;
    public bool isBlinking = false;
    public float totalScore = 0f;
    public int difficulty = 0;
    public string resultText = "";


    /// <summary>
    /// Start method is called before the first frame update and is used to setup what is needed at the start of the App.
    /// </summary>
    void Start()
    {
        clientSide = theClient.GetComponent<ClientSide>();
    }

    /// <summary>
    /// Update method is called once per frame and is used to update what needs to be updated each frame.
    /// </summary>
    void Update()
    {
       
        if (clientSide.isStreaming)
        {
            //Get the syncVars once
            if (!done)
            {
                leftAbdAngle = clientSide.GetSyncVar("controller/joints/LeftAbd/angle");
                rightAbdAngle = clientSide.GetSyncVar("controller/joints/RightAbd/angle");
                leftHipAngle = clientSide.GetSyncVar("controller/joints/LeftHip/angle");
                rightHipAngle = clientSide.GetSyncVar("controller/joints/RightHip/angle");
                leftKneeAngle = clientSide.GetSyncVar("controller/joints/LeftKnee/angle");
                rightKneeAngle = clientSide.GetSyncVar("controller/joints/RightKnee/angle");
                done = true;
            }

            if (newPose && GameObject.FindGameObjectsWithTag("PoseObject").Length != 0)
            {
                if ((GameObject.FindGameObjectsWithTag("PoseObject")[0]).GetComponent<targetAngles>() != null)
                {
                    targetAngles = (GameObject.FindGameObjectsWithTag("PoseObject")[0]).GetComponent<targetAngles>().getTargetAngles();
                    poseName = (GameObject.FindGameObjectsWithTag("PoseObject")[0]).GetComponent<targetAngles>().poseName;

                    switch (poseName)
                    {
                        case "leftKneeUp":
                            avatarToCopyLogic.leftKneeUp = true;
                            break;
                        case "rightKneeUp":
                            avatarToCopyLogic.rightKneeUp = true;
                            break;
                        case "straight":
                            avatarToCopyLogic.straight = true;
                            break;
                        case "leftKneeMiddleUp":
                            avatarToCopyLogic.leftKneeMiddleUp = true;
                            break;
                        case "rightKneeMiddleUp":
                            avatarToCopyLogic.rightKneeMiddleUp = true;
                            break;
                        case "leftTargetPoint":
                            avatarToCopyLogic.leftTargetPoint = true;
                            break;
                        case "rightTargetPoint":
                            avatarToCopyLogic.rightTargetPoint = true;
                            break;
                        default:
                            Debug.Log("poseName received doesn't exist!");
                            break;
                    }
                }

                if (poseName != "straight")
                {
                    Invoke(nameof(setStartTime), 2.5f);
                }

                newPose = false;
                poseFinished = false;
            }

            // The blink game objects are the transparent blue shapes used to help te player to imitate correctly the position.
            if (GameObject.FindGameObjectsWithTag("TransparentMesh").Length != 0)
            {
                blinkGO1 = GameObject.FindGameObjectsWithTag("TransparentMesh")[0];
                blinkGO2 = GameObject.FindGameObjectsWithTag("TransparentMesh")[1];
            }

            if (blinkGO1 != null && blinkGO2 != null)
            {
                if (isBlinking)
                {
                    blink();
                }
                else
                {
                    Color color = blinkGO1.GetComponent<SkinnedMeshRenderer>().materials[0].color;
                    color.a = 0.3921569f;
                    blinkGO1.GetComponent<SkinnedMeshRenderer>().materials[0].color = color;
                    blinkGO2.GetComponent<SkinnedMeshRenderer>().materials[0].color = color;
                }

            }

            if (inGame)
            {
                if (targetPositions != null || targetAngles != null)
                {
                    bool checkAngles = false;
                    bool checkPos = false;
                    bool correctPos = false;
                    bool correctAngles = false;
                    
                    if (targetAngles != null)
                    {
                        checkAngles = true;
                        correctAngles = checkPosewithAngles();
                    }

                    if (checkAngles && checkPos)
                    {
                        if (correctAngles || correctPos)
                        {
                            validationCounter += Time.deltaTime;
                            progressBar.m_FillAmount = validationCounter / timeToValidate;
                        }

                    }
                    else
                    {
                        if (checkAngles)
                        {
                            if (correctAngles)
                            {
                                validationCounter += Time.deltaTime;
                                progressBar.m_FillAmount = validationCounter / timeToValidate;
                            }
                        }
                    }
                }

                //actions to do when pose is validated
                if (validationCounter >= timeToValidate)
                {
                    poseFinished = true;
                    validationCounter = 0;
                    targetPositions = null;
                    newPose = true;
                    progressBar.m_FillAmount = 0f;

                    if (poseName != "straight")
                    {
                        if (Time.time >= startTime)
                        {
                            totalTime += Time.time - startTime;
                            poseTimes.Add(Time.time - startTime);
                        }
                        else
                        {
                            totalTime += 0f;
                            poseTimes.Add(0f);
                        }
                        totalScore += poseScore / 10f;
                        nbOfSuccesses += 1;
                        if(menu.language == 0)
                        {
                            playerScoreText.SetText("Accuracy: " + (totalScore * 10f / nbOfSuccesses).ToString("0.0") + "%");
                        }
                        else
                        {
                            playerScoreText.SetText("Précision: " + (totalScore * 10f / nbOfSuccesses).ToString("0.0") + "%");
                        }
                        scoreBarImg.fillAmount += poseScore / 1000f;
                        soundManager.playSuccessSound();
                    }
                    Destroy(GameObject.FindGameObjectsWithTag("PoseObject")[0]);
                    firstFrame = true;
                    poseScore = 0f;
                }

                //update the score in real time
                if(menu.language == 0)
                {
                    scoreText.SetText(nbOfSuccesses + "/" + maxNbOfSuccesses);
                }
                else
                {
                    scoreTextFR.SetText(nbOfSuccesses + "/" + maxNbOfSuccesses);
                }

                if (nbOfSuccesses == maxNbOfSuccesses)
                {
                    if(menu.language == 0)
                    {
                        avrTimeText.SetText(poseTimes.Average().ToString("0.0") + " seconds");
                        resultText = totalScore.ToString("0.0") + "% Accuracy";
                        finalScoreText.SetText(totalScore.ToString("0.0") + "/100");
                        graph.showGraph(poseTimes);
                    }
                    else
                    {
                        avrTimeTextFR.SetText(poseTimes.Average().ToString("0.0") + " secondes");
                        resultText = totalScore.ToString("0.0") + "% Précision";
                        finalScoreTextFR.SetText(totalScore.ToString("0.0") + "/100");
                        graphFR.showGraph(poseTimes);
                    }
                    
                    inGame = false;
                    nbOfSuccesses = 0;
                    poseTimes.Clear();
                    totalTime = 0f;
                    startTime = 0f;
                    totalScore = 0f;
                    finished = true;
                }
            } 
        }
    }

    /// <summary>
    /// This method checks if the position of the player (depending on knee hip and abduction angles) is correct.
    /// </summary>
    /// <returns>true if the position of the player (depending on knee hip and abduction angles) is correct, return false otherwise.</returns>
    private bool checkPosewithAngles()
    {
        //target positions of left/right knee and foot
        float l_targetAbdAngle = targetAngles[0];
        float r_targetAbdAngle = targetAngles[1];
        float l_targetHipAngle = targetAngles[2];
        float r_targetHipAngle = targetAngles[3];
        float l_targetKneeAngle = targetAngles[4];
        float r_targetKneeAngle = targetAngles[5];

        //check all the angles
        float check_l_abdAngle = checkSpecificAngle(l_targetAbdAngle, leftAbdAngle.FloatVar, marginOfErrorAnglesAbd);
        float check_r_abdAngle = checkSpecificAngle(r_targetAbdAngle, rightAbdAngle.FloatVar, marginOfErrorAnglesAbd);
        float check_l_hipAngle = checkSpecificAngle(l_targetHipAngle, leftHipAngle.FloatVar, marginOfErrorAngles);
        float check_r_hipAngle = checkSpecificAngle(r_targetHipAngle, rightHipAngle.FloatVar, marginOfErrorAngles);
        float check_l_kneeAngle = checkSpecificAngle(l_targetKneeAngle, leftKneeAngle.FloatVar, marginOfErrorAngles);
        float check_r_kneeAngle = checkSpecificAngle(r_targetKneeAngle, rightKneeAngle.FloatVar, marginOfErrorAngles);

        bool angleCorrectness = checkAngleCorrectness(check_l_abdAngle, check_r_abdAngle, check_l_hipAngle, check_r_hipAngle, check_l_kneeAngle, check_r_kneeAngle);

        return angleCorrectness;
    }

    /// <summary>
    /// This method checks if an angle is correct given the actual angle, the target angle and the margin of error.
    /// </summary>
    /// <param name="targetAngle">The angle the player has to reach.</param>
    /// <param name="actualAngle">The angle of the actual position of the player.</param>
    /// <param name="marginOfError">The margin of error accepted between the actual angle and the target angle.</param>
    /// <returns>1 if the angle done by the player is correct, return -1 otherwise.</returns>
    private float checkSpecificAngle(float targetAngle, float actualAngle, float marginOfError)
    {
        float abs = Math.Abs(targetAngle - actualAngle);
        if (firstFrame)
        {
            poseScore += 100f - (abs * 2f);
            firstFrame = false;
        }
        else
        {
            poseScore += 100f - (abs * 2f);
            poseScore /= 2f;
        }
        if (abs <= marginOfError)
        {
            return 1f;
        }
        else
        {
            return -1f;
        }

    }

    /// <summary>
    /// This method checks if all angles (hips, knees, abductions) are correct given the results for each angle. This method also modifies the color of the helpers (green if correct, red otherwise).
    /// </summary>
    /// <param name="check_l_abdAngle">The correctness result of the left abduction angle.</param>
    /// <param name="check_r_abdAngle">The correctness result of the right abduction angle.</param>
    /// <param name="check_l_hipAngle">The correctness result of the left hip angle.</param>
    /// <param name="check_r_hipAngle">The correctness result of the right hip angle.</param>
    /// <param name="check_l_kneeAngle">The correctness result of the left knee angle.</param>
    /// <param name="check_r_kneeAngle">The correctness result of the right knee angle.</param>
    /// <returns>true if all the angles are correct, false otherwise.</returns>
    private bool checkAngleCorrectness(float check_l_abdAngle, float check_r_abdAngle, float check_l_hipAngle, float check_r_hipAngle, float check_l_kneeAngle, float check_r_kneeAngle)
    {
        if(check_l_hipAngle == -1f)
        {
            l_hipCorrectness.GetComponent<MeshRenderer>().material = wrongAngleMat;
        }
        else
        {
            l_hipCorrectness.GetComponent<MeshRenderer>().material = correctAngleMat;
        }

        if (check_r_hipAngle == -1f)
        {
            r_hipCorrectness.GetComponent<MeshRenderer>().material = wrongAngleMat;
        }
        else
        {
            r_hipCorrectness.GetComponent<MeshRenderer>().material = correctAngleMat;
        }

        if (check_l_kneeAngle == -1f)
        {
            l_kneeCorrectness.GetComponent<MeshRenderer>().material = wrongAngleMat;
        }
        else
        {
            l_kneeCorrectness.GetComponent<MeshRenderer>().material = correctAngleMat;
        }

        if (check_r_kneeAngle == -1f)
        {
            r_kneeCorrectness.GetComponent<MeshRenderer>().material = wrongAngleMat;
        }
        else
        {
            r_kneeCorrectness.GetComponent<MeshRenderer>().material = correctAngleMat;
        }

        if (check_l_abdAngle != -1f && check_r_abdAngle != -1f && check_l_hipAngle != -1f && check_r_hipAngle != -1f && check_l_kneeAngle != -1f && check_r_kneeAngle != -1f)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    /// <summary>
    /// This method is used to create a blink effect for the blue helpers of the position to immitate.
    /// </summary>
    private void blink()
    {
        Color color = blinkGO1.GetComponent<SkinnedMeshRenderer>().materials[0].color;
        if (blinkUp)
        {
            color.a += 0.02f;
        }
        else
        {
            color.a -= 0.02f;
        }
        blinkGO1.GetComponent<SkinnedMeshRenderer>().materials[0].color = color;
        blinkGO2.GetComponent<SkinnedMeshRenderer>().materials[0].color = color;

        if (color.a >= 1f)
        {
            blinkUp = false;
        }
        if (color.a <= 0f)
        {
            blinkUp = true;
        }
    }

    /// <summary>
    /// This method is used to setup the start time of the game in order to get time data during the game.
    /// </summary>
    private void setStartTime()
    {
        startTime = Time.time;
    }

    /// <summary>
    /// This method sets the difficulty of the game (modifying the margin of errors of the angles).
    /// </summary>
    /// <param name="difficulty">The difficulty set for the game..</param>
    public void SetDifficulty (int difficulty)
    {
        this.difficulty = difficulty;
        spawner.SetDifficulty(difficulty);
        opponent.SetDifficulty(difficulty);
        
        switch (difficulty)
        {
            case 0:
                marginOfErrorAngles = 20f;
                marginOfErrorAnglesAbd = 15f;
                break;
            case 1:
                marginOfErrorAngles = 17f;
                marginOfErrorAnglesAbd = 13f;
                break;
            case 2:
                marginOfErrorAngles = 15f;
                marginOfErrorAnglesAbd = 11f;
                break;
            default:
                break;
        }
    }
}
