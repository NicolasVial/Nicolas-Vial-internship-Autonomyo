using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QuickVR;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// The following script contains the logic of the avatar doing the movements the player has to imitate in the Dance Game. 
/// All the movements of this avatar are done here. A movement is triggered by a boolean designating a specific movement.
/// </summary>


public class AvatarToCopyLogic : MonoBehaviour
{
    //Spawner
    [SerializeField] private Spawner spawner;

    //opponent
    [SerializeField] private OpponentLogic opponent;

    //body parts game objects
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
    public bool leftTargetPoint = false;
    public bool rightTargetPoint = false;




    /// <summary>
    /// Start method is called before the first frame update and is used to setup what is needed at the start of the App.
    /// </summary>
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

    /// <summary>
    /// Update method is called once per frame and is used to update what needs to be updated each frame.
    /// </summary>
    void Update()
    {
        if (straight)
        {
            opponent.canMove = false;
            goToPose(neutralStraightPose, neutralStraightAngles);
            straight = false;
            opponent.straight = true;
        }

        if (rightKneeUp)
        {
            opponent.canMove = false;
            if (spawner.isMirror)
            {
                goToPose(rightKneeUpPose, rightKneeUpAngles);
            }
            else
            {
                goToPose(leftKneeUpPose, leftKneeUpAngles);
            }
            rightKneeUp = false;
            opponent.rightKneeUp = true;
        }

        if (leftKneeUp)
        {
            opponent.canMove = false;
            if (spawner.isMirror)
            {
                goToPose(leftKneeUpPose, leftKneeUpAngles);
            }
            else
            {
                goToPose(rightKneeUpPose, rightKneeUpAngles);
            }
            leftKneeUp = false;
            opponent.leftKneeUp = true;
        }

        if (rightKneeMiddleUp)
        {
            opponent.canMove = false;
            if (spawner.isMirror)
            {
                goToPose(rightMiddleKneeUpPose, rightMiddleKneeUpAngles);
            }
            else
            {
                goToPose(leftMiddleKneeUpPose, leftMiddleKneeUpAngles);
            }
            rightKneeMiddleUp = false;
            opponent.rightKneeMiddleUp = true;
        }

        if (leftKneeMiddleUp)
        {
            opponent.canMove = false;
            if (spawner.isMirror)
            {
                goToPose(leftMiddleKneeUpPose, leftMiddleKneeUpAngles);
            }
            else
            {
                goToPose(rightMiddleKneeUpPose, rightMiddleKneeUpAngles);
            }
            leftKneeMiddleUp = false;
            opponent.leftKneeMiddleUp = true;
        }

        if (leftTargetPoint)
        {
            opponent.canMove = false;
            if (spawner.isMirror)
            {
                goToPose(leftTargetPointPose, leftTargetPointAngles);
            }
            else
            {
                goToPose(rightTargetPointPose, rightTargetPointAngles);
            }
            leftTargetPoint = false;
            opponent.leftTargetPoint = true;
        }

        if (rightTargetPoint)
        {
            opponent.canMove = false;
            if (spawner.isMirror)
            {
                goToPose(rightTargetPointPose, rightTargetPointAngles);
            }
            else
            {
                goToPose(leftTargetPointPose, leftTargetPointAngles);
            }
            rightTargetPoint = false;
            opponent.rightTargetPoint = true;
        }


        moveGameObjects();

        if(doneTab.Count == 0)
        {
            opponent.canMove = true;
        }
    }

    /// <summary>
    /// This method moves the different part of the avatar to copy when called.
    /// </summary>
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

    /// <summary>
    /// This method is used to setup the movement (the positions and angles of the different parts of the avatar to copy) done in the "MoveGameObjects" method.
    /// </summary>
    /// <param name="pos">The new positions of the different parts of the avatar to copy.</param>
    /// <param name="angles">The new angles of the different parts of the avatar to copy.</param>
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
