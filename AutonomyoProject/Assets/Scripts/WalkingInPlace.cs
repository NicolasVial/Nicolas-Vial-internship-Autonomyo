using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine;
using System;
using QuickVR;


/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// The following script contains the logic of the Walking in place (static walking).
/// </summary>

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
    [SerializeField] private GameObject teleportGO;
    [SerializeField] private SoundManager soundManager;
    [SerializeField] private GameObject leftFoot;
    [SerializeField] private GameObject rightFoot;

    [SerializeField] private float desiredDuration = 2f;
    [SerializeField] private AnimationCurve curve;
    [SerializeField] private bool alwaysStraight = false;


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
    private bool TPButtonPressed = false;
    private bool setupDone = false;

    public bool WIP = false;
    public int walkingMode = 1; //mode 1 == realistic with periodic rotations, mode 2 == realistic with linear rotations, mode 3 == teleportation (no cybersickness)

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

            if (WIP)
            {
                if (!setupDone)
                {
                    lastForwardValueLeft = leftFoot.transform.localPosition.y;
                    lastForwardValueRight = rightFoot.transform.localPosition.y;
                    setupDone = true;
                }
                if (walkingMode == 1 || walkingMode == 2)
                {
                    teleportGO.SetActive(false);
                }
                if (walkingMode == 3)
                {
                    teleportGO.SetActive(true);
                }

                float diffAngle = 0f;
                float diff = 0f;
                float angle = 0f;
                switch (walkingMode)
                {
                    case 1:
                        //realistic mode with periodic rotations
                        if (!lowerLimbs.leftFootOnGround || !lowerLimbs.rightFootOnGround)
                        {

                            if (isStraight)
                            {
                                isStraight = false;
                                diffAngle = camera.transform.localEulerAngles.y;
                                if (diffAngle > 5f)
                                {
                                    playerGO.transform.localEulerAngles = new Vector3(playerGO.transform.localEulerAngles.x, playerGO.transform.localEulerAngles.y + diffAngle, playerGO.transform.localEulerAngles.z);
                                }
                            }

                            diff = Math.Abs(leftFoot.transform.localPosition.y - lastForwardValueLeft) + Math.Abs(rightFoot.transform.localPosition.y - lastForwardValueRight);
                            diff *= 2.5f;
                            angle = (playerGO.transform.localEulerAngles.y) * MathF.PI / 180;
                            diffX = MathF.Sin(angle) * diff;
                            diffZ = MathF.Cos(angle) * diff;
                            movePlayer(playerGO);
                        }
                        else
                        {
                            isStraight = true;
                        }
                        lastForwardValueLeft = leftFoot.transform.localPosition.y;
                        lastForwardValueRight = rightFoot.transform.localPosition.y;
                        break;
                    case 2:
                        //realistic mode with linear rotations
                        diffAngle = camera.transform.localEulerAngles.y;
                        diff = Math.Abs(leftFoot.transform.localPosition.y - lastForwardValueLeft) + Math.Abs(rightFoot.transform.localPosition.y - lastForwardValueRight);
                        diff *= 2.5f;
                        angle = (playerGO.transform.localEulerAngles.y + diffAngle) * MathF.PI / 180;
                        diffX = MathF.Sin(angle) * diff;
                        diffZ = MathF.Cos(angle) * diff;
                        movePlayer(playerGO);
                        lastForwardValueLeft = leftFoot.transform.localPosition.y;
                        lastForwardValueRight = rightFoot.transform.localPosition.y;
                        break;
                    case 3:
                        //teleportation mode
                        if (TPButtonPressed){
                            TPButtonPressed = false;
                            teleport();
                        }
                        diffAngle = camera.transform.localEulerAngles.y;
                        diff = Math.Abs(leftFoot.transform.localPosition.y - lastForwardValueLeft) + Math.Abs(rightFoot.transform.localPosition.y - lastForwardValueRight);
                        diff *= 2.5f;
                        angle = (playerGO.transform.localEulerAngles.y + diffAngle) * MathF.PI / 180;
                        diffX = MathF.Sin(angle) * diff;
                        diffZ = MathF.Cos(angle) * diff;
                        movePlayer(teleportGO);
                        lastForwardValueLeft = leftFoot.transform.localPosition.y;
                        lastForwardValueRight = rightFoot.transform.localPosition.y;
                        break;
                    default:
                        break;
                }
            }
            else
            {
                teleportGO.transform.localPosition = new Vector3(0f, 0f, 0f);
                teleportGO.SetActive(false);
                setupDone = false;
            }
        }
    }

    /// <summary>
    /// This method rotates the avatar in the direction where the player is looking at. 
    /// </summary>
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

    /// <summary>
    /// This method is triggered whenever another collider enters the collider attached to this object.
    /// It checks if the players hits a wall.
    /// </summary>
    /// <param name="other">The other collider that hit the collider attached to this object.</param>
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

    /// <summary>
    /// This method is triggered whenever another collider exits the collider attached to this object.
    /// It checks if the players hits a wall.
    /// </summary>
    /// <param name="other">The other collider that hit the collider attached to this object.</param>
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

    /// <summary>
    /// This is used to avoid the player to move through the walls.
    /// </summary>
    private void movePlayer(GameObject playerGO)
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

    /// <summary>
    /// This method toggles the walking in place.
    /// </summary>
    public void toggleWIP()
    {
        this.WIP = !this.WIP;
    }

    /// <summary>
    /// This method is triggered when the player wants to teleport to the desired position.
    /// </summary>
    public void pressTPButton()
    {
        TPButtonPressed = true;
    }

    /// <summary>
    /// This method is used to teleport the player to the desired position.
    /// </summary>
    public void teleport()
    {
        playerGO.transform.position = teleportGO.transform.position;
        teleportGO.transform.localPosition = new Vector3(0f, 0f, 0f);
    }

    /// <summary>
    /// This method is used to change the walking mode.
    /// </summary>
    /// <param name="newMode">The new mode.</param>
    public void changeWalkingMode(int newMode)
    {
        walkingMode = newMode;
    }
}
