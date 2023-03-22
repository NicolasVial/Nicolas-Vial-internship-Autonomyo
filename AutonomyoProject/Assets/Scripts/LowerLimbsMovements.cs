using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LowerLimbsMovements : MonoBehaviour
{
    // Constant variables
    [SerializeField] private float REDUCTION_FACTOR = 1200f;

    // Editor-assigned variables
    [SerializeField] GameObject theClient;

    //offset needed because the foot height position is lower than 0 (0.9f works well)
    [SerializeField] float heightOffset = 0.9f;
    [SerializeField] Transform leftFootTransform;
    [SerializeField] Transform rightFootTransform;

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
                done = true;
            }
            else
            {
                // The exoskeleton is connected and streaming
                // articulations angles in radians
                l_abd_angle = leftAbdAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                r_abd_angle = rightAbdAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                l_hip_angle = leftHipAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                r_hip_angle = rightHipAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                l_knee_angle = leftKneeAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                r_knee_angle = rightKneeAngle.FloatVar / 360.0f * 2 * Mathf.PI;

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
                /*
                float l_knee_posx = l2 + Mathf.Sin(l_hip_angle) * l3;
                float l_knee_posz = -Mathf.Cos(l_abd_angle) * Mathf.Cos(l_hip_angle) * l3;
                float r_knee_posx = l2 + Mathf.Sin(r_hip_angle) * l3;
                float r_knee_posz = -Mathf.Cos(r_abd_angle) * Mathf.Cos(r_hip_angle) * l3;
                */
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

                Debug.Log("left foot position avant (z): " + (l_foot_posx));
                Debug.Log("left foot position haut (y): " + l_foot_posz);
                Debug.Log("left foot position abd (x): " + l_foot_posy);
                //Debug.Log("right foot position avant: " + r_foot_posx);
                //Debug.Log("right foot position haut: " + r_foot_posz);
                leftFootTransform.localPosition = new Vector3(l_foot_posy, l_foot_posz + heightOffset, l_foot_posx);
                rightFootTransform.localPosition = new Vector3(r_foot_posy, r_foot_posz + heightOffset, r_foot_posx);
            }

        }
    }
}
