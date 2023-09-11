using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SagittalAndFrontalPlanesInfos : MonoBehaviour
{
    // Constant variables
    [SerializeField] private float REDUCTION_FACTOR = 1200f;
    [SerializeField] private float SEGMENTWIDTH = 0.025f;

    private const int SATURATION_THRESHOLD = 200;

    // Editor-assigned variables
    [SerializeField] GameObject theClient;

    //texts
    [SerializeField] TextMeshProUGUI abdAngleText;
    [SerializeField] TextMeshProUGUI hipAngleText;
    [SerializeField] TextMeshProUGUI kneeAngleText;

    [SerializeField] TextMeshProUGUI f_backPosText;
    [SerializeField] TextMeshProUGUI f_abdPosText;
    [SerializeField] TextMeshProUGUI f_hipPosText;
    [SerializeField] TextMeshProUGUI f_kneePosText;
    [SerializeField] TextMeshProUGUI f_footPosText;

    [SerializeField] TextMeshProUGUI s_abdPosText;
    [SerializeField] TextMeshProUGUI s_hipPosText;
    [SerializeField] TextMeshProUGUI s_kneePosText;
    [SerializeField] TextMeshProUGUI s_footPosText;

    [SerializeField] TextMeshProUGUI l_soleForce;
    [SerializeField] TextMeshProUGUI r_soleForce;

    [SerializeField] TextMeshProUGUI l_footPosText;
    [SerializeField] TextMeshProUGUI r_footPosText;
    [SerializeField] TextMeshProUGUI hipPosText;
    [SerializeField] private Transform leftFootTransform;
    [SerializeField] private Transform rightFootTransform;
    [SerializeField] private Transform hipTransform;


    // Public but editor-hidden variables
    [HideInInspector] float leftAbd;
    [HideInInspector] float rightAbd;
    [HideInInspector] float leftHip;
    [HideInInspector] float rightHip;
    [HideInInspector] float leftKnee;
    [HideInInspector] float rightKnee;
    [HideInInspector] float leftFoot;
    [HideInInspector] float rightFoot;

    private SyncVar activatedCells;
    private SyncVar[] svLeft = new SyncVar[8];
    private SyncVar[] svRight = new SyncVar[8];
    private float left_force_total = 0;
    private float right_force_total = 0;

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

    // articluations angles
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

        l0 = 25.0f / REDUCTION_FACTOR;
        l1 = 135.5f / REDUCTION_FACTOR;
        l2 = 191.26f / REDUCTION_FACTOR;
        l3 = 450.0f / REDUCTION_FACTOR;
        l4 = 550.0f / REDUCTION_FACTOR;
    }

    void Update()
    {
        // The exoskeleton is connected and streaming
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
                // articulations angles in radians
                l_abd_angle = leftAbdAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                r_abd_angle = rightAbdAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                l_hip_angle = leftHipAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                r_hip_angle = rightHipAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                l_knee_angle = leftKneeAngle.FloatVar / 360.0f * 2 * Mathf.PI;
                r_knee_angle = rightKneeAngle.FloatVar / 360.0f * 2 * Mathf.PI;

                //update texte of angles (in degrees and radiants?)
                abdAngleText.SetText("ABD Left deg: " + leftAbdAngle.FloatVar + " // Right deg: " + rightAbdAngle.FloatVar);
                hipAngleText.SetText("HIP Left deg: " + leftHipAngle.FloatVar + " // Right deg: " + rightHipAngle.FloatVar);
                kneeAngleText.SetText("KNEE Left deg: " + leftKneeAngle.FloatVar + " // Right deg: " + rightKneeAngle.FloatVar);

                UpdateTextsFrontal();
                UpdateTextsSagittal();
                UpdateTextsSoles();
            }

        }



    }

    public void UpdateTextsFrontal()
    {
        // segment in the back
        float l_back_posy = l0;
        float l_back_posz = 0.0f;
        float r_back_posy = -l0;
        float r_back_posz = 0.0f;

        // abduction
        float l_abd_posy = l0 + l1 * Mathf.Cos(l_abd_angle);
        float l_abd_posz = l1 * Mathf.Sin(l_abd_angle);
        float r_abd_posy = -l0 - l1 * Mathf.Cos(r_abd_angle);
        float r_abd_posz = l1 * Mathf.Sin(r_abd_angle);

        // hip
        float l_hip_posy = l_abd_posy;
        float l_hip_posz = l_abd_posz;
        float r_hip_posy = r_abd_posy;
        float r_hip_posz = r_abd_posz;

        // knee
        float l_knee_posy = l0 + l1 * Mathf.Cos(l_abd_angle)
                            + Mathf.Sin(l_abd_angle) * Mathf.Cos(l_hip_angle) * l3;
        float l_knee_posz = l1 * Mathf.Sin(l_abd_angle)
                            - Mathf.Cos(l_abd_angle) * Mathf.Cos(l_hip_angle) * l3;
        float r_knee_posy = -l0 - l1 * Mathf.Cos(r_abd_angle)
                            - Mathf.Sin(r_abd_angle) * Mathf.Cos(r_hip_angle) * l3;
        float r_knee_posz = l1 * Mathf.Sin(r_abd_angle)
                            - Mathf.Cos(r_abd_angle) * Mathf.Cos(r_hip_angle) * l3;

        // foot
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

        f_backPosText.SetText("BACK Left: x: " + l_back_posy + " , y: " + l_back_posz + " , z: " + 0f + " // Right: x: " + r_back_posy + " , y: " + r_back_posz + " , z: " + 0f);
        f_abdPosText.SetText("ABD Left: x: " + l_abd_posy + " , y: " + l_abd_posz + " , z: " + 0f + " // Right: x: " + r_abd_posy + " , y: " + r_abd_posz + " , z: " + 0f);
        f_hipPosText.SetText("HIP Left: x: " + l_hip_posy + " , y: " + l_hip_posz + " , z: " + 0f + " // Right: x: " + r_hip_posy + " , y: " + r_hip_posz + " , z: " + 0f);
        f_kneePosText.SetText("KNEE Left: x: " + l_knee_posy + " , y: " + l_knee_posz + " , z: " + 0f + " // Right: x: " + r_knee_posy + " , y: " + r_knee_posz + " , z: " + 0f);
        f_footPosText.SetText("FOOT Left: x: " + l_foot_posy + " , y: " + l_foot_posz + " , z: " + 0f + " // Right: x: " + r_foot_posy + " , y: " + r_foot_posz + " , z: " + 0f);

        l_footPosText.SetText("Left foot Pos: x: " + leftFootTransform.localPosition.x + " , y: " + leftFootTransform.localPosition.y + " , z: " + leftFootTransform.localPosition.z);
        r_footPosText.SetText("Right foot Pos: x: " + rightFootTransform.localPosition.x + " , y: " + rightFootTransform.localPosition.y + " , z: " + rightFootTransform.localPosition.z);
        hipPosText.SetText("hip Pos: x: " + hipTransform.localPosition.x + " , y: " + hipTransform.localPosition.y + " , z: " + hipTransform.localPosition.z);
    }

    public void UpdateTextsSagittal()
    {
        // abduction
        float l_abd_posx = 0.0f;
        float l_abd_posz = l1 * Mathf.Sin(l_abd_angle);
        float r_abd_posx = 0.0f;
        float r_abd_posz = l1 * Mathf.Sin(r_abd_angle);

        // hip
        float l_hip_posx = -l2;
        float l_hip_posz = l1 * Mathf.Sin(l_abd_angle);
        float r_hip_posx = -l2;
        float r_hip_posz = l1 * Mathf.Sin(r_abd_angle);

        // knee
        float l_knee_posx = -(l2 + Mathf.Sin(l_hip_angle) * l3);
        float l_knee_posz = -Mathf.Cos(l_abd_angle) * Mathf.Cos(l_hip_angle) * l3;
        float r_knee_posx = -(l2 + Mathf.Sin(r_hip_angle) * l3);
        float r_knee_posz = -Mathf.Cos(r_abd_angle) * Mathf.Cos(r_hip_angle) * l3;

        // foot
        float l_foot_posx = -(l2 + Mathf.Sin(l_hip_angle) * l3
                            + Mathf.Sin(l_hip_angle - l_knee_angle) * l4);
        float l_foot_posz = -Mathf.Cos(l_abd_angle)
                            * (Mathf.Cos(l_hip_angle) * l3
                            + Mathf.Cos(l_hip_angle - l_knee_angle) * l4);
        float r_foot_posx = -(l2 + Mathf.Sin(r_hip_angle) * l3
                            + Mathf.Sin(r_hip_angle - r_knee_angle) * l4);
        float r_foot_posz = -Mathf.Cos(r_abd_angle)
                            * (Mathf.Cos(r_hip_angle) * l3
                            + Mathf.Cos(r_hip_angle - r_knee_angle) * l4);

        s_abdPosText.SetText("ABD Left: x: " + l_abd_posx + " , y: " + l_abd_posz + " , z: " + 0f + " // Right: x: " + r_abd_posx + " , y: " + r_abd_posz + " , z: " + 0f);
        s_hipPosText.SetText("HIP Left: x: " + l_hip_posx + " , y: " + l_hip_posz + " , z: " + 0f + " // Right: x: " + r_hip_posx + " , y: " + r_hip_posz + " , z: " + 0f);
        s_kneePosText.SetText("KNEE Left: x: " + l_knee_posx + " , y: " + l_knee_posz + " , z: " + 0f + " // Right: x: " + r_knee_posx + " , y: " + r_knee_posz + " , z: " + 0f);
        s_footPosText.SetText("FOOT Left: x: " + l_foot_posx + " , y: " + l_foot_posz + " , z: " + 0f + " // Right: x: " + r_foot_posx + " , y: " + r_foot_posz + " , z: " + 0f);

    }

    private void UpdateTextsSoles()
    {
        //get the force applicated on the soles
        left_force_total = 0f;
        right_force_total = 0f;
        for (int i = 0; i < 8; i++)
        {
            float value = UpdateCells(i, 'L');
            left_force_total += value;
            value = UpdateCells(i, 'R');
            right_force_total += value;
        }

        l_soleForce.SetText("left sole force: " + left_force_total);
        r_soleForce.SetText("right sole force: " + right_force_total);
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
            if (letter == 'L' && ((aC & bit) == aC)) // vérifier si c'est plutôt ça ou l'autre ligne
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
        }
        if (float.IsInfinity(value))
        {
            value = 0;
        }


        return value;
    }
}
