using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine;
using System;
using QuickVR;

public class WalkingInPlace : MonoBehaviour
{
    [SerializeField] private GameObject camera;
    [SerializeField] private GameObject centerEye;
    [SerializeField] private LowerLimbsMovements lowerLimbs;
    [SerializeField] private GameObject theClient;
    [SerializeField] private float marginOfErrorAngles;
    [SerializeField] private float marginOfErrorAnglesAbd;
    [SerializeField] private float[] targetAnglesRight;
    [SerializeField] private float[] targetAnglesLeft;
    [SerializeField] private float[] targetAnglesDown;
    [SerializeField] private GameObject playerGO;
    [SerializeField] private SoundManager soundManager;
    [SerializeField] private GameObject leftFoot;
    [SerializeField] private GameObject rightFoot;
    [SerializeField] private bool isLinearWalk = true;

    [SerializeField] private float desiredDuration = 2f;
    [SerializeField] private AnimationCurve curve;


    private ClientSide clientSide;
    private SyncVar leftAbdAngle;
    private SyncVar rightAbdAngle;
    private SyncVar leftHipAngle;
    private SyncVar rightHipAngle;
    private SyncVar leftKneeAngle;
    private SyncVar rightKneeAngle;
    private bool done = false;
    private bool leftLegUp = false;
    private bool rightLegUp = false;
    private bool bothLegsDown = false;
    private bool leftLegUpDone = false;
    private bool rightLegUpDone = false;
    private bool bothLegsDownDone = true;
    private bool movedForward = false;
    private List<bool> doneTab = new List<bool>();
    private List<float> startTimeTab = new List<float>();
    private List<Vector3> startPosTab = new List<Vector3>();
    private List<Vector3> endPosTab = new List<Vector3>();

    private float lastForwardValueRight = -1f;
    private float lastForwardValueLeft = -1f;

    private bool isStraight;
    private bool canGoPositivX = true;
    private bool canGoNegativX = true;
    private bool canGoPositivZ = true;
    private bool canGoNegativZ = true;
    private double diffX = 0;
    private double diffZ = 0;

    public bool WIP = false;

    // Start is called before the first frame update
    void Start()
    {
        clientSide = theClient.GetComponent<ClientSide>();
    }

    // Update is called once per frame
    void Update()
    {
        /*
        float angle = (playerGO.transform.localEulerAngles.y) * MathF.PI / 180;
        diffX = MathF.Sin(angle) * 0.001f;
        diffZ = MathF.Cos(angle) * 0.001f;
        Debug.Log("diffX = " + diffX);
        Debug.Log("diffZ = " + diffZ);
        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
        */
        if (InputManager.GetButtonDown("toggleIsLinearWalk"))
        {
            isLinearWalk = !isLinearWalk;
        }

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

            if (WIP)
            {
                leftLegUp = checkPosewithAngles(targetAnglesLeft);
                rightLegUp = checkPosewithAngles(targetAnglesRight);
                bothLegsDown = checkPosewithAngles(targetAnglesDown);


                if (!isLinearWalk)
                {
                    if (leftLegUp && !leftLegUpDone && !rightLegUp)
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x - 0.6f, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                        leftLegUpDone = true;
                        bothLegsDownDone = false;
                    }
                    else
                    {
                        if (rightLegUp && !rightLegUpDone && !leftLegUp)
                        {
                            playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x - 0.6f, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                            rightLegUpDone = true;
                            bothLegsDownDone = false;
                        }
                        else
                        {
                            if (bothLegsDown && !bothLegsDownDone)
                            {
                                playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x - 0.6f, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                                rightLegUpDone = false;
                                leftLegUpDone = false;
                                bothLegsDownDone = true;
                                movedForward = false;
                            }
                            else
                            {

                                //if(!bothLegsDown && bothLegsDownDone && !movedForward)
                                //{
                                //    moveABitForward();
                                //    movedForward = true;
                                //}

                            }
                        }
                    }
                }
                else
                {
                    if (!lowerLimbs.leftFootOnGround || !lowerLimbs.rightFootOnGround)
                    {
                        
                        if (isStraight)
                        {
                            isStraight = false;
                            float diffAngle = camera.transform.localEulerAngles.y;
                            if(diffAngle > 5f)
                            {
                                playerGO.transform.localEulerAngles = new Vector3(playerGO.transform.localEulerAngles.x, playerGO.transform.localEulerAngles.y + diffAngle, playerGO.transform.localEulerAngles.z);
                            }
                        }

                        float diff = Math.Abs(leftFoot.transform.localPosition.y - lastForwardValueLeft) + Math.Abs(rightFoot.transform.localPosition.y - lastForwardValueRight);
                        diff *= 2f;
                        float angle = (playerGO.transform.localEulerAngles.y) * MathF.PI / 180;
                        diffX = MathF.Sin(angle) * diff;
                        diffZ = MathF.Cos(angle) * diff;
                        movePlayer();                   
                    }
                    else
                    {
                        isStraight = true;
                    }
                    lastForwardValueLeft = leftFoot.transform.localPosition.y;
                    lastForwardValueRight = rightFoot.transform.localPosition.y;
                }
            }

            //moveGameObjects();
        }



    }

    private bool checkPosewithAngles(float[] targetAngles)
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

        if (check_l_abdAngle != -1f && check_r_abdAngle != -1f && check_l_hipAngle != -1f && check_r_hipAngle != -1f && check_l_kneeAngle != -1f && check_r_kneeAngle != -1f)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    private float checkSpecificAngle(float targetAngle, float actualAngle, float marginOfError)
    {
        float abs = Math.Abs(targetAngle - actualAngle);
       
        if (abs <= marginOfError)
        {
            return 1f;
        }
        else
        {
            return -1f;
        }

    }

    private void RotatePlayer()
    {
        float angle = (camera.transform.eulerAngles.y > 180f) ? camera.transform.eulerAngles.y - 360f : camera.transform.eulerAngles.y;
        angle += 90f;
        if (angle > 10f)
        {
            playerGO.transform.eulerAngles = new Vector3(playerGO.transform.eulerAngles.x, playerGO.transform.eulerAngles.y + 0.1f, playerGO.transform.eulerAngles.z);
        }
        if (angle < -10f)
        {
            playerGO.transform.eulerAngles = new Vector3(playerGO.transform.eulerAngles.x, playerGO.transform.eulerAngles.y - 0.1f, playerGO.transform.eulerAngles.z);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        switch (other.gameObject.tag)
        {
            case "LeftWall":
                canGoNegativZ = false;
                break;
            case "RightWall":
                canGoPositivZ = false;
                break;
            case "FrontWall":
                canGoNegativX = false;
                break;
            case "BackWall":
                canGoPositivX = false;
                break;
            default:
                break;
        }

    }

    private void OnTriggerExit(Collider other)
    {
        switch (other.gameObject.tag)
        {
            case "LeftWall":
                canGoNegativZ = true;
                break;
            case "RightWall":
                canGoPositivZ = true;
                break;
            case "FrontWall":
                canGoNegativX = true;
                break;
            case "BackWall":
                canGoPositivX = true;
                break;
            default:
                break;
        }
        
    }

    private void movePlayer()
    {
        switch ((canGoPositivX, canGoNegativX, canGoPositivZ, canGoNegativZ))
        {
            case (true, true, true, true):
                playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                break;
            case (true, true, true, false):
                if(diffZ < 0)
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                }
                else
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                }
                break;
            case (true, true, false, true):
                if(diffZ >= 0)
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                }
                else
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                }
                break;
            case (true, false, true, true):
                if(diffX < 0)
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                }
                else
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                }
                break;
            case (false, true, true, true):
                if(diffX >= 0)
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                }
                else
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                }
                break;
            case (true, true, false, false):
                playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                break;
            case (true, false, true, false):
                if(diffX < 0)
                {
                    if(diffZ < 0)
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                    }
                    else
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                    }
                }
                else
                {
                    if (diffZ < 0)
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                    }
                    else
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                    }
                }
                break;
            case (false, true, true, false):
                if (diffX >= 0)
                {
                    if (diffZ < 0)
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                    }
                    else
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                    }
                }
                else
                {
                    if (diffZ < 0)
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                    }
                    else
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                    }
                }
                break;
            case (true, false, false, true):
                if (diffX < 0)
                {
                    if (diffZ >= 0)
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                    }
                    else
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                    }
                }
                else
                {
                    if (diffZ >= 0)
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                    }
                    else
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                    }
                }
                break;
            case (false, true, false, true):
                if (diffX >= 0)
                {
                    if (diffZ >= 0)
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                    }
                    else
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                    }
                }
                else
                {
                    if (diffZ >= 0)
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                    }
                    else
                    {
                        playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                    }
                }
                break;
            case (false, false, true, true):
                playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                break;
            case (true, false, false, false):
                if(diffX < 0)
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                }
                else
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                }
                break;
            case (false, true, false, false):
                if (diffX >= 0)
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                }
                else
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x + Convert.ToSingle(diffX), playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                }
                break;
            case (false, false, true, false):
                if (diffZ < 0)
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                }
                else
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                }
                break;
            case (false, false, false, true):
                if (diffZ >= 0)
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                }
                else
                {
                    playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z + Convert.ToSingle(diffZ));
                }
                break;
            case (false, false, false, false):
                playerGO.transform.localPosition = new Vector3(playerGO.transform.localPosition.x, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
                break;
            default:
                break;
        }
    }

    public void toggleWIP()
    {
        this.WIP = !this.WIP;
    }

    /*
    private void moveGameObjects()
    {
        List<int> indexToRemove = new List<int>();

        float percentageComplete = 0f;
        if (!doneTab[0])
        {
            doneTab[0] = true;
            startTimeTab[0] = Time.time;
            startPosTab[0] = playerGO.transform.localPosition;
            endPosTab[0] = new Vector3(playerGO.transform.localPosition.x - 0.3f, playerGO.transform.localPosition.y, playerGO.transform.localPosition.z);
        }
        else
        {
            float elapsedTime = (Time.time - startTimeTab[0]);
            percentageComplete = elapsedTime / desiredDuration;
            playerGO.transform.localPosition = Vector3.Lerp(startPosTab[0], endPosTab[0], curve.Evaluate(percentageComplete));
        }

        if (percentageComplete >= 1f)
        {
            indexToRemove.Add(0);
        }
        

        if(indexToRemove.Count != 0)
        {
            doneTab.RemoveAt(0);
            startTimeTab.RemoveAt(0);
            startPosTab.RemoveAt(0);
            endPosTab.RemoveAt(0);
        }

    }

    private void moveABitForward()
    {
        doneTab.Add(false);
        startTimeTab.Add(0f);
        startPosTab.Add(playerGO.transform.localPosition);
        endPosTab.Add(playerGO.transform.localPosition);
    }
    */
}
