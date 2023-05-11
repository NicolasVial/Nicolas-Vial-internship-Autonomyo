using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class OpponentLogic : MonoBehaviour
{
    //Spawner
    [SerializeField] private Spawner spawner;

    [SerializeField] private GameObject headGO;
    [SerializeField] private GameObject hipGO;
    [SerializeField] private GameObject l_handGO;
    [SerializeField] private GameObject r_handGO;
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
    [SerializeField] private GameObject l_footGO;
    [SerializeField] private GameObject r_footGO;

    [SerializeField] private Vector3[] neutralStraightPose;
    [SerializeField] private Vector3[] neutralStraightAngles;
    [SerializeField] private Vector3[] leftKneeUpPose;
    [SerializeField] private Vector3[] leftKneeUpAngles;
    [SerializeField] private Vector3[] rightKneeUpPose;
    [SerializeField] private Vector3[] rightKneeUpAngles;
    [SerializeField] private Vector3[] leftMiddleKneeUpPose;
    [SerializeField] private Vector3[] leftMiddleKneeUpAngles;
    [SerializeField] private Vector3[] rightMiddleKneeUpPose;
    [SerializeField] private Vector3[] rightMiddleKneeUpAngles;
    [SerializeField] private Vector3[] leftTargetPointPose;
    [SerializeField] private Vector3[] leftTargetPointAngles;
    [SerializeField] private Vector3[] rightTargetPointPose;
    [SerializeField] private Vector3[] rightTargetPointAngles;

    [SerializeField] private float desiredDuration = 2.5f;
    [SerializeField] private AnimationCurve curve;
    [SerializeField] private TextMeshProUGUI opponentScoreText;
    [SerializeField] private Image scoreBarImg;

    private GameObject[] gameObjects = new GameObject[16];
    private List<bool> doneTab = new List<bool>();
    private List<float> startTimeTab = new List<float>();
    private List<Vector3> startPosTab = new List<Vector3>();
    private List<Vector3> endPosTab = new List<Vector3>();
    private List<Vector3> startAngleTab = new List<Vector3>();
    private List<Vector3> endAngleTab = new List<Vector3>();
    private List<GameObject> GOTab = new List<GameObject>();
    private bool wasStraight = true;
    private float difficultyOffset = 0f;

    public bool rightKneeUp = false;
    public bool leftKneeUp = false;
    public bool rightKneeMiddleUp = false;
    public bool leftKneeMiddleUp = false;
    public bool straight = false;
    public bool leftTargetPoint = false;
    public bool rightTargetPoint = false;

    public bool canMove = false;
    public bool isReady = true;
    public int poseNb = 0;





    // Start is called before the first frame update
    void Start()
    {
        gameObjects[0] = headGO;
        gameObjects[1] = hipGO;
        gameObjects[2] = l_handGO;
        gameObjects[3] = r_handGO;
        gameObjects[4] = r_thumbGO;
        gameObjects[5] = r_indexGO;
        gameObjects[6] = r_middleGO;
        gameObjects[7] = r_ringGO;
        gameObjects[8] = r_littleGO;
        gameObjects[9] = l_thumbGO;
        gameObjects[10] = l_indexGO;
        gameObjects[11] = l_middleGO;
        gameObjects[12] = l_ringGO;
        gameObjects[13] = l_littleGO;
        gameObjects[14] = l_footGO;
        gameObjects[15] = r_footGO;
    }

    // Update is called once per frame
    void Update()
    {
        //opponent is ready if he is not in movement
        if(doneTab.Count == 0)
        {
            if(!isReady && !wasStraight)
            {
                scoreBarImg.fillAmount += (10f-desiredDuration + difficultyOffset) / 100f;
                poseNb += 1;
                opponentScoreText.SetText("Accuracy: " + (scoreBarImg.fillAmount * 1000f / poseNb).ToString("0.0") + "%");
            }
            isReady = true;
        }
        else
        {
            isReady = false;
        }

        if (straight && canMove && isReady)
        {
            wasStraight = true;
            desiredDuration = 2f;
            goToPose(neutralStraightPose, neutralStraightAngles);
            straight = false;
        }

        if (rightKneeUp && canMove && isReady)
        {
            desiredDuration = Random.Range(2.5f, 6.0f);
            if (spawner.isMirror)
            {
                goToPose(rightKneeUpPose, rightKneeUpAngles);
            }
            else
            {
                goToPose(leftKneeUpPose, leftKneeUpAngles);
            }
            rightKneeUp = false;
            wasStraight = false;
        }

        if (leftKneeUp && canMove && isReady)
        {
            desiredDuration = Random.Range(2.5f, 6.0f);
            if (spawner.isMirror)
            {
                goToPose(leftKneeUpPose, leftKneeUpAngles);
            }
            else
            {
                goToPose(rightKneeUpPose, rightKneeUpAngles);
            }
            leftKneeUp = false;
            wasStraight = false;
        }

        if (rightKneeMiddleUp && canMove && isReady)
        {
            desiredDuration = Random.Range(2.5f, 6.0f);
            if (spawner.isMirror)
            {
                goToPose(rightMiddleKneeUpPose, rightMiddleKneeUpAngles);
            }
            else
            {
                goToPose(leftMiddleKneeUpPose, leftMiddleKneeUpAngles);
            }
            rightKneeMiddleUp = false;
            wasStraight = false;
        }

        if (leftKneeMiddleUp && canMove && isReady)
        {
            desiredDuration = Random.Range(2.5f, 6.0f);
            if (spawner.isMirror)
            {
                goToPose(leftMiddleKneeUpPose, leftMiddleKneeUpAngles);
            }
            else
            {
                goToPose(rightMiddleKneeUpPose, rightMiddleKneeUpAngles);
            }
            leftKneeMiddleUp = false;
            wasStraight = false;
        }

        if (leftTargetPoint && canMove && isReady)
        {
            desiredDuration = Random.Range(2.5f, 6.0f);
            if (spawner.isMirror)
            {
                goToPose(leftTargetPointPose, leftTargetPointAngles);
            }
            else
            {
                goToPose(rightTargetPointPose, rightTargetPointAngles);
            }
            leftTargetPoint = false;
            wasStraight = false;
        }

        if (rightTargetPoint && canMove && isReady)
        {
            desiredDuration = Random.Range(2.5f, 6.0f);
            if (spawner.isMirror)
            {
                goToPose(rightTargetPointPose, rightTargetPointAngles);
            }
            else
            {
                goToPose(leftTargetPointPose, leftTargetPointAngles);
            }
            rightTargetPoint = false;
            wasStraight = false;
        }

        moveGameObjects();
    }

    // Update is called once per frame
    private void moveGameObjects()
    {
        List<int> indexToRemove = new List<int>();

        for (int i = 0; i < doneTab.Count; i++)
        {
            float percentageComplete = 0f;
            if (!doneTab[i])
            {
                doneTab[i] = true;
                startTimeTab[i] = Time.time;
            }
            else
            {
                float elapsedTime = (Time.time - startTimeTab[i]);
                percentageComplete = elapsedTime / desiredDuration;
                GOTab[i].transform.localRotation = Quaternion.Lerp(Quaternion.Euler(startAngleTab[i]), Quaternion.Euler(endAngleTab[i]), curve.Evaluate(percentageComplete));
                GOTab[i].transform.localPosition = Vector3.Lerp(startPosTab[i], endPosTab[i], curve.Evaluate(percentageComplete));
            }

            if (percentageComplete >= 1f)
            {
                indexToRemove.Add(i);
            }
        }

        for (int i = indexToRemove.Count - 1; i >= 0; i--)
        {
            doneTab.RemoveAt(i);
            startTimeTab.RemoveAt(i);
            startPosTab.RemoveAt(i);
            endPosTab.RemoveAt(i);
            startAngleTab.RemoveAt(i);
            endAngleTab.RemoveAt(i);
            GOTab.RemoveAt(i);
        }

    }

    private void goToPose(Vector3[] pos, Vector3[] angles)
    {
        for (int i = 0; i < gameObjects.Length; i++)
        {
            doneTab.Add(false);
            startTimeTab.Add(0f);
            startPosTab.Add(gameObjects[i].transform.localPosition);
            endPosTab.Add(pos[i]);
            startAngleTab.Add(gameObjects[i].transform.localEulerAngles);
            endAngleTab.Add(angles[i]);
            GOTab.Add(gameObjects[i]);
        }
    }

    public void SetDifficulty(int difficulty)
    {
        switch (difficulty)
        {
            case 0:
                difficultyOffset = 0f;
                break;
            case 1:
                difficultyOffset = 1.3f;
                break;
            case 2:
                difficultyOffset = 2.3f;
                break;
            default:
                break;
        }
    }
}
