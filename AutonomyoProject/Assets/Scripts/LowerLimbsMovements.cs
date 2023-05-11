using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using QuickVR;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 26.04.2023
  Summary: The following script moves the lower limbs (hips, knees, foot) of the player's avatar accordingly with the
           data received by the exoskeleton.
*/

public class LowerLimbsMovements : MonoBehaviour
{
    // for debugging
    [SerializeField] TextMeshProUGUI reductionfactortext;
    [SerializeField] TextMeshProUGUI heightoffsettext;
    [SerializeField] TextMeshProUGUI forwardoffsettext;
    [SerializeField] TextMeshProUGUI rForceXText;
    [SerializeField] TextMeshProUGUI rForceYText;
    [SerializeField] TextMeshProUGUI lForceXText;
    [SerializeField] TextMeshProUGUI lForceYText;



    // Constant variables
    [SerializeField] private float REDUCTION_FACTOR = 1200f;

    private const int SATURATION_THRESHOLD = 200;

    // Editor-assigned variables
    [SerializeField] GameObject theClient;

    //offset used to have a good representation of the exo position on the avatar;
    [SerializeField] private float heightOffset;
    [SerializeField] private float forwardOffset;

    [SerializeField] private Transform leftFootTransform;
    [SerializeField] private Transform rightFootTransform;
    [SerializeField] private Transform hipTransform;
    [SerializeField] private float footOnGroundThreshold;
    [SerializeField] private GameObject feetOnGroundColorGO;
    [SerializeField] private GameObject balanceSphere;
    [SerializeField] private GameObject[] leftCells;
    [SerializeField] private GameObject[] rightCells;

    //initial Positions of the avatar
    [SerializeField] private Vector3 hipInitPos;
    [SerializeField] private Vector3 rFootInitPos;
    [SerializeField] private Vector3 lFootInitPos;


    // Public but editor-hidden variables
    [HideInInspector] float leftAbd;
    [HideInInspector] float rightAbd;
    [HideInInspector] float leftHip;
    [HideInInspector] float rightHip;
    [HideInInspector] float leftKnee;
    [HideInInspector] float rightKnee;
    [HideInInspector] float leftFoot;
    [HideInInspector] float rightFoot;

    // Other variables
    private ClientSide clientSide;
    private SyncVar leftAbdAngle;
    private SyncVar rightAbdAngle;
    private SyncVar leftHipAngle;
    private SyncVar rightHipAngle;
    private SyncVar leftKneeAngle;
    private SyncVar rightKneeAngle;
    private SyncVar activatedCells;
    private SyncVar[] svLeft = new SyncVar[8];
    private SyncVar[] svRight = new SyncVar[8];
    private float left_force_total = 0;
    private float right_force_total = 0;
    public bool leftFootOnGround;
    public bool rightFootOnGround;
    private bool lastFootOnGroundIsLeft = false;
    private Vector3 lastLeftPos = new Vector3(0f, 0f, 0f);
    private Vector3 lastRightPos = new Vector3(0f, 0f, 0f);
    private bool isMirror = true;

    // robot segments length
    private float l0;
    private float l1;
    private float l2;
    private float l3;
    private float l4;

    // articulations angles
    private float l_abd_angle = -8.0f / 360.0f * 2 * Mathf.PI;
    private float r_abd_angle = 0;
    private float l_hip_angle = 40.0f / 360.0f * 2 * Mathf.PI;
    private float r_hip_angle = -30.0f / 360.0f * 2 * Mathf.PI;
    private float l_knee_angle = 60.0f / 360.0f * 2 * Mathf.PI;
    private float r_knee_angle = 10.0f / 360.0f * 2 * Mathf.PI;

    private bool done = false;


    // Start is called before the first frame update
    void Start()
    {
        clientSide = theClient.GetComponent<ClientSide>();

        // The exoskeleton is connected and streaming
        // So we can get access to the SyncVars
        if (clientSide.isStreaming)
        {
            leftAbdAngle = clientSide.GetSyncVar("controller/joints/LeftAbd/angle");
            rightAbdAngle = clientSide.GetSyncVar("controller/joints/RightAbd/angle");
            leftHipAngle = clientSide.GetSyncVar("controller/joints/LeftHip/angle");
            rightHipAngle = clientSide.GetSyncVar("controller/joints/RightHip/angle");
            leftKneeAngle = clientSide.GetSyncVar("controller/joints/LeftKnee/angle");
            rightKneeAngle = clientSide.GetSyncVar("controller/joints/RightKnee/angle");
            for (int i = 0; i < 8; i++)
            {
                svLeft[i] = clientSide.GetSyncVar("controller/load_cells/L" + (i + 1));
                svRight[i] = clientSide.GetSyncVar("controller/load_cells/R" + (i + 1));
            }
            activatedCells = clientSide.GetSyncVar("controller/activatedCells");
            done = true;
        }

        l0 = 25.0f/REDUCTION_FACTOR;
        l1 = 135.5f / REDUCTION_FACTOR;
        l2 = 191.26f / REDUCTION_FACTOR;
        l3 = 450.0f / REDUCTION_FACTOR;
        l4 = 550.0f / REDUCTION_FACTOR;
    }

    void Update()
    {
        if (InputManager.GetButtonDown("resetInitPos"))
        {
            lFootInitPos = new Vector3(leftFootTransform.localPosition.x, leftFootTransform.localPosition.y, leftFootTransform.localPosition.z);
            rFootInitPos = new Vector3(rightFootTransform.localPosition.x, rightFootTransform.localPosition.y, rightFootTransform.localPosition.z);
            lastLeftPos = new Vector3(leftFootTransform.localPosition.x, leftFootTransform.localPosition.y, leftFootTransform.localPosition.z);
            lastRightPos = new Vector3(rightFootTransform.localPosition.x, rightFootTransform.localPosition.y, rightFootTransform.localPosition.z);
            hipInitPos = new Vector3(hipTransform.localPosition.x, hipTransform.localPosition.y, hipTransform.localPosition.z);
        }
        
        /*
        if (InputManager.GetButtonDown("reducfactordown"))
        {
            REDUCTION_FACTOR -= 10f;
        }
        if (InputManager.GetButtonDown("reducfactorup"))
        {
            REDUCTION_FACTOR += 10f;
        }
        
        if (InputManager.GetButtonDown("heightoffsetdown"))
        {
            heightOffset -= 0.01f;
        }
        if (InputManager.GetButtonDown("heightoffsetup"))
        {
            heightOffset += 0.01f;
        }
        if (InputManager.GetButtonDown("forwardoffsetdown"))
        {
            forwardOffset -= 0.01f;
        }
        if (InputManager.GetButtonDown("forwardoffsetup"))
        {
            forwardOffset += 0.01f;
        }
        */
        reductionfactortext.SetText("reduction factor: " + REDUCTION_FACTOR);
        heightoffsettext.SetText("height offset: " + heightOffset);
        forwardoffsettext.SetText("forward offset: " + forwardOffset);

        // The exoskeleton is connected and streaming
        // So we can get access to the SyncVars
        if (clientSide.isStreaming)
        {
            if (!done)
            {
                leftAbdAngle = clientSide.GetSyncVar("controller/joints/LeftAbd/angle");
                rightAbdAngle = clientSide.GetSyncVar("controller/joints/RightAbd/angle");
                leftHipAngle = clientSide.GetSyncVar("controller/joints/LeftHip/angle");
                rightHipAngle = clientSide.GetSyncVar("controller/joints/RightHip/angle");
                leftKneeAngle = clientSide.GetSyncVar("controller/joints/LeftKnee/angle");
                rightKneeAngle = clientSide.GetSyncVar("controller/joints/RightKnee/angle");
                for (int i = 0; i < 8; i++)
                {
                    svLeft[i] = clientSide.GetSyncVar("controller/load_cells/L" + (i + 1));
                    svRight[i] = clientSide.GetSyncVar("controller/load_cells/R" + (i + 1));
                }
                activatedCells = clientSide.GetSyncVar("controller/activatedCells");
                done = true;
            }
            else
            {
                //for debugging
                l0 = 25.0f / REDUCTION_FACTOR;
                l1 = 135.5f / REDUCTION_FACTOR;
                l2 = 191.26f / REDUCTION_FACTOR;
                l3 = 450.0f / REDUCTION_FACTOR;
                l4 = 550.0f / REDUCTION_FACTOR;

                // The exoskeleton is connected and streaming
                // articulations angles in radians
                l_abd_angle = leftAbdAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                r_abd_angle = rightAbdAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                l_hip_angle = leftHipAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                r_hip_angle = rightHipAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                l_knee_angle = leftKneeAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                r_knee_angle = rightKneeAngle.FloatVar / 360.0f * 2 * Mathf.PI;

                //get the force applicated on the soles
                left_force_total = 0.0000001f;
                right_force_total = 0.0000001f;
                float centerOfMassXRight = 0f;
                float centerOfMassZRight = 0f;
                float centerOfMassXLeft = 0f;
                float centerOfMassZLeft = 0f;
                float centerOfMassX = 0f;
                float centerOfMassZ = 0f;

                for (int i = 0; i < 8; i++)
                {
                    float value = UpdateCells(i, 'L');
                    left_force_total += value;
                    centerOfMassXLeft += value * leftCells[i].transform.position.x;
                    centerOfMassZLeft += value * leftCells[i].transform.position.z;
                    value = UpdateCells(i, 'R');
                    right_force_total += value;
                    centerOfMassXRight += value * rightCells[i].transform.position.x;
                    centerOfMassZRight += value * rightCells[i].transform.position.z;
                }
                centerOfMassX = centerOfMassXLeft + centerOfMassXRight;
                centerOfMassZ = centerOfMassZLeft + centerOfMassZRight;
                centerOfMassX /= (left_force_total + right_force_total);
                centerOfMassZ /= (left_force_total + right_force_total);

                rForceXText.SetText("R Force X = " + centerOfMassXRight / right_force_total);
                rForceYText.SetText("R Force Y = " + centerOfMassZRight / right_force_total);
                lForceXText.SetText("L Force X = " + centerOfMassXLeft / left_force_total);
                lForceYText.SetText("L Force Y = " + centerOfMassZLeft / left_force_total);

                balanceSphere.transform.position = new Vector3(centerOfMassX, balanceSphere.transform.position.y, centerOfMassZ);
                balanceSphere.transform.localPosition = new Vector3(-balanceSphere.transform.localPosition.x * 2f, balanceSphere.transform.localPosition.y * 2.45f, balanceSphere.transform.localPosition.z);

                //Compute the lower limbs relative positions using the angles given by the exoskeleton
                // segment in the back
                float l_back_posy = l0;
                float l_back_posz = 0.0f;
                float r_back_posy = -l0;
                float r_back_posz = 0.0f;

                // abduction
                float l_abd_posx = 0.0f;
                float l_abd_posz = l1 * Mathf.Sin(l_abd_angle);
                float r_abd_posx = 0.0f;
                float r_abd_posz = l1 * Mathf.Sin(r_abd_angle);
                float l_abd_posy = l0 + l1 * Mathf.Cos(l_abd_angle);
                float r_abd_posy = -l0 - l1 * Mathf.Cos(r_abd_angle);

                // hip
                float l_hip_posx = l2;
                float l_hip_posz = l_abd_posz;
                float r_hip_posx = l2;
                float r_hip_posz = r_abd_posz;
                float l_hip_posy = l_abd_posy;
                float r_hip_posy = r_abd_posy;

                // knee
                float l_knee_posx = l2 + Mathf.Sin(l_hip_angle) * l3;
                float r_knee_posx = l2 + Mathf.Sin(r_hip_angle) * l3;
                float l_knee_posy = l0 + l1 * Mathf.Cos(l_abd_angle)
                                    + Mathf.Sin(l_abd_angle) * Mathf.Cos(l_hip_angle) * l3;
                float l_knee_posz = l1 * Mathf.Sin(l_abd_angle)
                                    - Mathf.Cos(l_abd_angle) * Mathf.Cos(l_hip_angle) * l3;
                float r_knee_posy = -l0 - l1 * Mathf.Cos(r_abd_angle)
                                    - Mathf.Sin(r_abd_angle) * Mathf.Cos(r_hip_angle) * l3;
                float r_knee_posz = l1 * Mathf.Sin(r_abd_angle)
                                    - Mathf.Cos(r_abd_angle) * Mathf.Cos(r_hip_angle) * l3;

                // foot
                float l_foot_posx = -(l2 + Mathf.Sin(l_hip_angle) * l3
                                    + Mathf.Sin(l_hip_angle - l_knee_angle) * l4);
                float r_foot_posx = -(l2 + Mathf.Sin(r_hip_angle) * l3
                                    + Mathf.Sin(r_hip_angle - r_knee_angle) * l4);
                float l_foot_posy = l0 + l1 * Mathf.Cos(l_abd_angle)
                                    + Mathf.Sin(l_abd_angle) * (Mathf.Cos(l_hip_angle) * l3
                                    + Mathf.Cos(l_knee_angle - l_hip_angle) * l4);
                float l_foot_posz = l1 * Mathf.Sin(l_abd_angle) - Mathf.Cos(l_abd_angle)
                                    * (Mathf.Cos(l_hip_angle) * l3
                                    + Mathf.Cos(l_knee_angle - l_hip_angle) * l4);
                float r_foot_posy = -l0 - l1 * Mathf.Cos(r_abd_angle)
                                    - Mathf.Sin(r_abd_angle) * (Mathf.Cos(r_hip_angle) * l3
                                    + Mathf.Cos(r_knee_angle - r_hip_angle) * l4);
                float r_foot_posz = l1 * Mathf.Sin(r_abd_angle) - Mathf.Cos(r_abd_angle)
                                    * (Mathf.Cos(r_hip_angle) * l3
                                    + Mathf.Cos(r_knee_angle - r_hip_angle) * l4);

                //check which foot is on the ground
                if(left_force_total >= footOnGroundThreshold)
                {
                    leftFootOnGround = true;
                }
                else
                {
                    leftFootOnGround = false;
                }
                if(right_force_total >= footOnGroundThreshold)
                {
                    rightFootOnGround = true;
                }
                else
                {
                    rightFootOnGround = false;
                }
                

                // If the feet are both on the ground, it means that the hip should be moving, o.w one of the leg is moving.
                // This is done to differantiate when the user is moving the legs or the hip (since the received positions are relative we
                // need to find a way to differantiate those 2 cases, here done using the force applied on the soles)
                if (leftFootOnGround && rightFootOnGround)
                {
                    feetOnGroundColorGO.GetComponent<Image>().color = Color.green;

                    Vector3 footPosDiff = new Vector3(0f, 0f, 0f);
                    if (lastFootOnGroundIsLeft)
                    {
                        footPosDiff = new Vector3(lFootInitPos.x - lastLeftPos.x - 0.032f, lFootInitPos.y - lastLeftPos.y, lFootInitPos.z - lastLeftPos.z);
                    }
                    else
                    {
                        footPosDiff = new Vector3(rFootInitPos.x - lastRightPos.x + 0.032f, rFootInitPos.y - lastRightPos.y, rFootInitPos.z - lastRightPos.z);
                    }

                    hipTransform.localPosition = new Vector3(hipInitPos.x + footPosDiff.x, hipInitPos.y + footPosDiff.y, hipInitPos.z + (footPosDiff.z * 0.5f));

                    leftFootTransform.localPosition = new Vector3(leftFootTransform.localPosition.x, lFootInitPos.y, leftFootTransform.localPosition.z);
                    rightFootTransform.localPosition = new Vector3(rightFootTransform.localPosition.x, rFootInitPos.y, rightFootTransform.localPosition.z);

                    lastLeftPos = new Vector3(-l_foot_posy, l_foot_posz + heightOffset, -l_foot_posx + forwardOffset);
                    lastRightPos = new Vector3(-r_foot_posy, r_foot_posz + heightOffset, -r_foot_posx + forwardOffset);
                }
                else
                {
                    feetOnGroundColorGO.GetComponent<Image>().color = Color.red;
     
                    if (leftFootOnGround)
                    {
                        Vector3 footPosDiff = new Vector3(lFootInitPos.x - lastLeftPos.x - 0.025f, lFootInitPos.y - lastLeftPos.y, lFootInitPos.z - lastLeftPos.z);
                        hipTransform.localPosition = new Vector3(hipInitPos.x + footPosDiff.x, hipInitPos.y + footPosDiff.y, hipInitPos.z + (footPosDiff.z * 0.5f));

                        leftFootTransform.localPosition = new Vector3(leftFootTransform.localPosition.x, lFootInitPos.y, leftFootTransform.localPosition.z);
                        rightFootTransform.localPosition = new Vector3(-r_foot_posy, r_foot_posz + heightOffset, -r_foot_posx + forwardOffset);
                        lastFootOnGroundIsLeft = true;
                        lastRightPos = new Vector3(-r_foot_posy, r_foot_posz + heightOffset, -r_foot_posx + forwardOffset);
                        lastLeftPos = new Vector3(-l_foot_posy, l_foot_posz + heightOffset, -l_foot_posx + forwardOffset);
                    }
                    if (rightFootOnGround)
                    {
                        Vector3 footPosDiff = new Vector3(rFootInitPos.x - lastRightPos.x + 0.025f, rFootInitPos.y - lastRightPos.y, rFootInitPos.z - lastRightPos.z);
                        hipTransform.localPosition = new Vector3(hipInitPos.x + footPosDiff.x, hipInitPos.y + footPosDiff.y, hipInitPos.z + (footPosDiff.z * 0.5f));

                        rightFootTransform.localPosition = new Vector3(rightFootTransform.localPosition.x, rFootInitPos.y, rightFootTransform.localPosition.z);
                        leftFootTransform.localPosition = new Vector3(-l_foot_posy, l_foot_posz + heightOffset, -l_foot_posx + forwardOffset);
                        lastFootOnGroundIsLeft = false;
                        lastLeftPos = new Vector3(-l_foot_posy, l_foot_posz + heightOffset, -l_foot_posx + forwardOffset);
                        lastRightPos = new Vector3(-r_foot_posy, r_foot_posz + heightOffset, -r_foot_posx + forwardOffset);
                    }
                    
                }

                //we can do this check since the player is not supposed to jump -> the initial hip position is the heighest position possible.
                if(hipTransform.localPosition.y > hipInitPos.y)
                {
                    hipTransform.localPosition = new Vector3(hipTransform.localPosition.x, hipInitPos.y, hipTransform.localPosition.z);
                }
                
            }

        }

    }

    private float UpdateCells(int i, char letter)
    {
        //arbitrary value used for debugging
        float value = 1234;

        if (clientSide.isStreaming)
        {
            SyncVar sv;
            int bit = 1 << i;
            int aC = activatedCells.IntVar;
            if (letter == 'L' && ((aC & bit) == aC))
            {
                sv = svLeft[i];
                if (sv != null)
                {
                    value = sv.FloatVar;
                }
            }
            else if (letter == 'R' && ((activatedCells.IntVar & (1 << (i + 8))) == aC))
            {
                sv = svRight[i];
                if (sv != null)
                {
                    value = sv.FloatVar;
                }
            }
            else
            {
                value = 0;
            }
        }

        if (value == double.NaN)
        {
            value = 0;
            Debug.Log("SoleCells value was NaN.");
        }
        if (float.IsInfinity(value))
        {
            value = 0;
            Debug.Log("SoleCells value was infinity.");
        }

        if (value > SATURATION_THRESHOLD)
        {
            value = 0;
            if (clientSide.isStreaming)
            {
                Debug.LogError("SoleCells : a cell is saturated.");
            }
        }


        return value;
    }


}
