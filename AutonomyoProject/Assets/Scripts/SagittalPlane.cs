using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SagittalPlane : MonoBehaviour
{
    // Constant variables
    [SerializeField] private float REDUCTION_FACTOR = 10f;
    [SerializeField] private float SEGMENTWIDTH = 3f;

    // Editor-assigned variables
    [SerializeField] GameObject theClient;
    [SerializeField] private Vector3 canvasPositionOffset;

    [SerializeField] RectTransform leftAbdRT;
    [SerializeField] RectTransform rightAbdRT;
    [SerializeField] RectTransform leftHipRT;
    [SerializeField] RectTransform rightHipRT;
    [SerializeField] RectTransform leftKneeRT;
    [SerializeField] RectTransform rightKneeRT;
    [SerializeField] RectTransform leftFootRT;
    [SerializeField] RectTransform rightFootRT;

    [SerializeField] RectTransform leftAH_rt;
    [SerializeField] RectTransform rightAH_rt;
    [SerializeField] RectTransform leftHK_rt;
    [SerializeField] RectTransform rightHK_rt;
    [SerializeField] RectTransform leftKF_rt;
    [SerializeField] RectTransform rightKF_rt;

    // Public but editor-hidden variables
    [HideInInspector] float leftAbd;
    [HideInInspector] float rightAbd;
    [HideInInspector] float leftHip;
    [HideInInspector] float rightHip;
    [HideInInspector] float leftKnee;
    [HideInInspector] float rightKnee;
    [HideInInspector] float leftFoot;
    [HideInInspector] float rightFoot;
    [HideInInspector] public float l_knee_posx;
    [HideInInspector] public float l_knee_posz;
    [HideInInspector] public float r_knee_posx;
    [HideInInspector] public float r_knee_posz;
    [HideInInspector] public float l_foot_posx;
    [HideInInspector] public float l_foot_posz;
    [HideInInspector] public float r_foot_posx;
    [HideInInspector] public float r_foot_posz;

    // Other variables
    private ClientSide clientSide;
    private SyncVar leftAbdAngle;
    private SyncVar rightAbdAngle;
    private SyncVar leftHipAngle;
    private SyncVar rightHipAngle;
    private SyncVar leftKneeAngle;
    private SyncVar rightKneeAngle;

    // robot segments length
    //private float l0 = 25.0f/REDUCTION_FACTOR;
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
            transform.localPosition = new Vector3(transform.localPosition.x + canvasPositionOffset.x, transform.localPosition.y + canvasPositionOffset.y, transform.localPosition.z + canvasPositionOffset.z);
        }

        //private float l0 = 25.0f/REDUCTION_FACTOR;
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
                transform.localPosition = new Vector3(transform.localPosition.x + canvasPositionOffset.x, transform.localPosition.y + canvasPositionOffset.y, transform.localPosition.z + canvasPositionOffset.z);
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

                // abduction
                float l_abd_posx = 0.0f;
                float l_abd_posz = l1 * Mathf.Sin(l_abd_angle);
                float r_abd_posx = 0.0f;
                float r_abd_posz = l1 * Mathf.Sin(r_abd_angle);

                // hip
                float l_hip_posx = -l2;
                float l_hip_posz = l_abd_posz;
                float r_hip_posx = -l2;
                float r_hip_posz = r_abd_posz;

                // knee
                l_knee_posx = -(l2 + Mathf.Sin(l_hip_angle) * l3);
                l_knee_posz = -Mathf.Cos(l_abd_angle) * Mathf.Cos(l_hip_angle) * l3;
                r_knee_posx = -(l2 + Mathf.Sin(r_hip_angle) * l3);
                r_knee_posz = -Mathf.Cos(r_abd_angle) * Mathf.Cos(r_hip_angle) * l3;

                // foot
                l_foot_posx = -(l2 + Mathf.Sin(l_hip_angle) * l3
                                    + Mathf.Sin(l_hip_angle - l_knee_angle) * l4);
                l_foot_posz = -Mathf.Cos(l_abd_angle)
                                    * (Mathf.Cos(l_hip_angle) * l3
                                    + Mathf.Cos(l_hip_angle - l_knee_angle) * l4);
                r_foot_posx = -(l2 + Mathf.Sin(r_hip_angle) * l3
                                    + Mathf.Sin(r_hip_angle - r_knee_angle) * l4);
                r_foot_posz = -Mathf.Cos(r_abd_angle)
                                    * (Mathf.Cos(r_hip_angle) * l3
                                    + Mathf.Cos(r_hip_angle - r_knee_angle) * l4);

                // Move the RectTransforms of the GameObjects
                leftAbdRT.anchoredPosition = new Vector3(l_abd_posx, l_abd_posz, 0);
                rightAbdRT.anchoredPosition = new Vector3(r_abd_posx, r_abd_posz, 0);
                leftHipRT.anchoredPosition = new Vector3(l_hip_posx, l_hip_posz, 0);
                rightHipRT.anchoredPosition = new Vector3(r_hip_posx, r_hip_posz, 0);
                leftKneeRT.anchoredPosition = new Vector3(l_knee_posx, l_knee_posz, 0);
                rightKneeRT.anchoredPosition = new Vector3(r_knee_posx, r_knee_posz, 0);
                leftFootRT.anchoredPosition = new Vector3(l_foot_posx, l_foot_posz, 0);
                rightFootRT.anchoredPosition = new Vector3(r_foot_posx, r_foot_posz, 0);

                UpdateSegment(leftAH_rt, leftAbdRT, leftHipRT);
                UpdateSegment(rightAH_rt, rightAbdRT, rightHipRT);
                UpdateSegment(leftHK_rt, leftHipRT, leftKneeRT);
                UpdateSegment(rightHK_rt, rightHipRT, rightKneeRT);
                UpdateSegment(leftKF_rt, leftKneeRT, leftFootRT);
                UpdateSegment(rightKF_rt, rightKneeRT, rightFootRT);
            }
            
        }
    }

    public void UpdateSegment(RectTransform rectTransform, RectTransform object1, RectTransform object2)
    {
        rectTransform.localPosition = (object1.localPosition + object2.localPosition) / 2;
        Vector3 dif = object2.localPosition - object1.localPosition;
        rectTransform.sizeDelta = new Vector3(dif.magnitude, SEGMENTWIDTH);
        if (dif.x != 0)
            rectTransform.rotation = Quaternion.Euler(new Vector3(0, 90, 180 * Mathf.Atan(dif.y / dif.x) / Mathf.PI));
    }
}