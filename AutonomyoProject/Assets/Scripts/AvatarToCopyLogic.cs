using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QuickVR;

public class AvatarToCopyLogic : MonoBehaviour
{
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

    [SerializeField] private float desiredDuration = 2.5f;
    [SerializeField] private AnimationCurve curve;

    private GameObject[] gameObjects = new GameObject[16];
    private List<bool> doneTab = new List<bool>();
    private List<float> startTimeTab = new List<float>();
    private List<Vector3> startPosTab = new List<Vector3>();
    private List<Vector3> endPosTab = new List<Vector3>();
    private List<Vector3> startAngleTab = new List<Vector3>();
    private List<Vector3> endAngleTab = new List<Vector3>();
    private List<GameObject> GOTab = new List<GameObject>();

    public bool rightKneeUp = false;
    public bool leftKneeUp = false;
    public bool rightKneeMiddleUp = false;
    public bool leftKneeMiddleUp = false;
    public bool straight = false;





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
        if (straight)
        {
            goToPose(neutralStraightPose, neutralStraightAngles);
            straight = false;
        }

        if (rightKneeUp)
        {
            goToPose(rightKneeUpPose, rightKneeUpAngles);
            rightKneeUp = false;
        }

        if (leftKneeUp)
        {
            goToPose(leftKneeUpPose, leftKneeUpAngles);
            leftKneeUp = false;
        }

        if (rightKneeMiddleUp)
        {
            goToPose(rightMiddleKneeUpPose, rightMiddleKneeUpAngles);
            rightKneeMiddleUp = false;
        }

        if (leftKneeMiddleUp)
        {
            goToPose(leftMiddleKneeUpPose, leftMiddleKneeUpAngles);
            leftKneeMiddleUp = false;
        }


        moveGameObjects();
    }

    // Update is called once per frame
    private void moveGameObjects()
    {
        List<int> indexToRemove = new List<int>();

        for(int i = 0; i < doneTab.Count; i++)
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
}
