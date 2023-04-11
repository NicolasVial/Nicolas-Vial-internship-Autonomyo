using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class Game1Logic : MonoBehaviour
{
    [SerializeField] private float timeToValidate;
    [SerializeField] private FrontalPlane frontalPlane;
    [SerializeField] private SagittalPlane sagittalPlane;
    [SerializeField] private float marginOfErrorPos;
    [SerializeField] private float marginOfErrorAngles;
    [SerializeField] private CircularProgressBar progressBar;
    [SerializeField] GameObject theClient;
    [SerializeField] private GameObject f_l_kneeGO;
    [SerializeField] private GameObject f_r_kneeGO;
    [SerializeField] private GameObject f_l_footGO;
    [SerializeField] private GameObject f_r_footGO;
    [SerializeField] private GameObject s_l_kneeGO;
    [SerializeField] private GameObject s_r_kneeGO;
    [SerializeField] private GameObject s_l_footGO;
    [SerializeField] private GameObject s_r_footGO;

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

    // Start is called before the first frame update
    void Start()
    {
        clientSide = theClient.GetComponent<ClientSide>();
    }

    // Update is called once per frame
    void Update()
    {
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

            if (newPose && GameObject.FindGameObjectsWithTag("PoseObject").Length != 0)
            {
                if ((GameObject.FindGameObjectsWithTag("PoseObject")[0]).GetComponent<targetPositions>() != null)
                {
                    targetPositions = (GameObject.FindGameObjectsWithTag("PoseObject")[0]).GetComponent<targetPositions>().getTargetPositions();
                }
                if ((GameObject.FindGameObjectsWithTag("PoseObject")[0]).GetComponent<targetAngles>() != null)
                {
                    targetAngles = (GameObject.FindGameObjectsWithTag("PoseObject")[0]).GetComponent<targetAngles>().getTargetAngles();
                }

                newPose = false;
            }

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
                if (targetPositions != null)
                {
                    checkPos = true;
                    correctPos = checkPosewithPos();
                }

                if (checkAngles && checkPos)
                {
                    if (correctAngles || correctPos)
                    {
                        validationCounter += Time.deltaTime;
                        progressBar.m_FillAmount = validationCounter / timeToValidate;
                    }
                    else
                    {
                        //What is the best? when position is not good reset or continue whenever it's good again??
                        //validationCounter = 0f;
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
                        else
                        {
                            //What is the best? when position is not good reset or continue whenever it's good again??
                            //validationCounter = 0f;
                        }
                    }
                    if (checkPos)
                    {
                        if (correctPos)
                        {
                            validationCounter += Time.deltaTime;
                            progressBar.m_FillAmount = validationCounter / timeToValidate;
                        }
                        else
                        {
                            //What is the best? when position is not good reset or continue whenever it's good again??
                            //validationCounter = 0f;
                        }
                    }
                }
            }

            //actions to do when pose is validated
            if (validationCounter >= timeToValidate)
            {
                validationCounter = 0;
                Destroy(GameObject.FindGameObjectsWithTag("PoseObject")[0]);
                targetPositions = null;
                newPose = true;
            }
        }
    }

    private bool checkPosewithPos()
    {
        //target positions of left/right knee and foot
        Vector3 f_l_targetKneePos = targetPositions[0];
        Vector3 f_r_targetKneePos = targetPositions[1];
        Vector3 f_l_targetFootPos = targetPositions[2];
        Vector3 f_r_targetFootPos = targetPositions[3];
        Vector3 s_l_targetKneePos = targetPositions[4];
        Vector3 s_r_targetKneePos = targetPositions[5];
        Vector3 s_l_targetFootPos = targetPositions[6];
        Vector3 s_r_targetFootPos = targetPositions[7];

        //actual positions of left/right knee and foot
        Vector3 f_l_actualKneePos = new Vector3(frontalPlane.l_knee_posy, frontalPlane.l_knee_posz, 0f);
        Vector3 f_r_actualKneePos = new Vector3(frontalPlane.r_knee_posy, frontalPlane.r_knee_posz, 0f);
        Vector3 f_l_actualFootPos = new Vector3(frontalPlane.l_foot_posy, frontalPlane.l_foot_posz, 0f);
        Vector3 f_r_actualFootPos = new Vector3(frontalPlane.r_foot_posy, frontalPlane.r_foot_posz, 0f);
        Vector3 s_l_actualKneePos = new Vector3(sagittalPlane.l_knee_posx, sagittalPlane.l_knee_posz, 0f);
        Vector3 s_r_actualKneePos = new Vector3(sagittalPlane.r_knee_posx, sagittalPlane.r_knee_posz, 0f);
        Vector3 s_l_actualFootPos = new Vector3(sagittalPlane.l_foot_posx, sagittalPlane.l_foot_posz, 0f);
        Vector3 s_r_actualFootPos = new Vector3(sagittalPlane.r_foot_posx, sagittalPlane.r_foot_posz, 0f);

        bool check_f_l_kneePos = checkSpecificPose(f_l_targetKneePos.x, f_l_targetKneePos.y, f_l_actualKneePos.x, f_l_actualKneePos.y, f_l_kneeGO, true);
        bool check_f_r_kneePos = checkSpecificPose(f_r_targetKneePos.x, f_r_targetKneePos.y, f_r_actualKneePos.x, f_r_actualKneePos.y, f_r_kneeGO, false);
        bool check_f_l_footPos = checkSpecificPose(f_l_targetFootPos.x, f_l_targetFootPos.y, f_l_actualFootPos.x, f_l_actualFootPos.y, f_l_footGO, true);
        bool check_f_r_footPos = checkSpecificPose(f_r_targetFootPos.x, f_r_targetFootPos.y, f_r_actualFootPos.x, f_r_actualFootPos.y, f_r_footGO, false);
        bool check_s_l_kneePos = checkSpecificPose(s_l_targetKneePos.x, s_l_targetKneePos.y, s_l_actualKneePos.x, s_l_actualKneePos.y, s_l_kneeGO, true);
        bool check_s_r_kneePos = checkSpecificPose(s_r_targetKneePos.x, s_r_targetKneePos.y, s_r_actualKneePos.x, s_r_actualKneePos.y, s_r_kneeGO, false);
        bool check_s_l_footPos = checkSpecificPose(s_l_targetFootPos.x, s_l_targetFootPos.y, s_l_actualFootPos.x, s_l_actualFootPos.y, s_l_footGO, true);
        bool check_s_r_footPos = checkSpecificPose(s_r_targetFootPos.x, s_r_targetFootPos.y, s_r_actualFootPos.x, s_r_actualFootPos.y, s_r_footGO, false);

        if(check_f_l_kneePos && check_f_r_kneePos && check_f_l_footPos && check_f_r_footPos && check_s_l_kneePos && check_s_r_kneePos && check_s_l_footPos && check_s_r_footPos)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    private bool checkPosewithAngles()
    {
        //target positions of left/right knee and foot
        float l_targetAbdAngle = targetAngles[0];
        float r_targetAbdAngle = targetAngles[1];
        float l_targetHipAngle = targetAngles[2];
        float r_targetHipAngle = targetAngles[3];
        float l_targetKneeAngle = targetAngles[4];
        float r_targetKneeAngle = targetAngles[5];

        bool check_l_abdAngle = checkSpecificAngle(l_targetAbdAngle, leftAbdAngle.FloatVar);
        bool check_r_abdAngle = checkSpecificAngle(r_targetAbdAngle, rightAbdAngle.FloatVar);
        bool check_l_hipAngle = checkSpecificAngle(l_targetHipAngle, leftHipAngle.FloatVar);
        bool check_r_hipAngle = checkSpecificAngle(r_targetHipAngle, rightHipAngle.FloatVar);
        bool check_l_kneeAngle = checkSpecificAngle(l_targetKneeAngle, leftKneeAngle.FloatVar);
        bool check_r_kneeAngle = checkSpecificAngle(r_targetKneeAngle, rightKneeAngle.FloatVar);

        if (check_l_abdAngle && check_r_abdAngle && check_l_hipAngle && check_r_hipAngle && check_l_kneeAngle && check_r_kneeAngle)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    private bool checkSpecificPose(float targetX, float targetY, float actualX, float actualY, GameObject gameObj, bool left)
    {
        if(targetX <= actualX + marginOfErrorPos && targetX >= actualX - marginOfErrorPos && targetY <= actualY + marginOfErrorPos && targetY >= actualY - marginOfErrorPos)
        {
            gameObj.GetComponent<Image>().color = Color.green;
            return true;
        }
        else
        {
            if (left)
            {
                gameObj.GetComponent<Image>().color = Color.black;
            }
            else
            {
                gameObj.GetComponent<Image>().color = Color.white;
            }
         
            return false;
        }
    }

    private bool checkSpecificAngle(float targetAngle, float actualAngle)
    {
        if (targetAngle <= actualAngle + marginOfErrorAngles && targetAngle >= actualAngle - marginOfErrorAngles)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}
