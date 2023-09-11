using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// The following script contains the logic to move an avatar to different positions.
/// </summary>

public class AvatarMovements : MonoBehaviour
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
    [SerializeField] private Vector3[] waveHandRightPose;
    [SerializeField] private Vector3[] waveHandRightAngles;
    [SerializeField] private Vector3[] waveHandLeftPose;
    [SerializeField] private Vector3[] waveHandLeftAngles;
    [SerializeField] private Vector3[] rightWalkingPose;
    [SerializeField] private Vector3[] rightWalkingAngles;
    [SerializeField] private Vector3[] leftWalkingPose;
    [SerializeField] private Vector3[] leftWalkingAngles;
    [SerializeField] private Vector3[] handsTalkingUpPose;
    [SerializeField] private Vector3[] handsTalkingUpAngles;
    [SerializeField] private Vector3[] handsTalkingDownPose;
    [SerializeField] private Vector3[] handsTalkingDownAngles;
    [SerializeField] private Vector3[] rockPose;
    [SerializeField] private Vector3[] rockAngles;
    [SerializeField] private Vector3[] paperPose;
    [SerializeField] private Vector3[] paperAngles;
    [SerializeField] private Vector3[] scissorsPose;
    [SerializeField] private Vector3[] scissorsAngles;

    [SerializeField] private AnimationCurve curve;

    private GameObject[] gameObjects = new GameObject[16];
    private List<bool> doneTab = new List<bool>();
    private List<float> startTimeTab = new List<float>();
    private List<Vector3> startPosTab = new List<Vector3>();
    private List<Vector3> endPosTab = new List<Vector3>();
    private List<Vector3> startAngleTab = new List<Vector3>();
    private List<Vector3> endAngleTab = new List<Vector3>();
    private List<GameObject> GOTab = new List<GameObject>();
    private List<float> desiredDurationTab = new List<float>();

    public float desiredDuration = 2.5f;

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
        desiredDuration = 1f;
        goToStraight();
    }

    /// <summary>
    /// Update method is called once per frame and is used to update what needs to be updated each frame.
    /// </summary>
    void Update()
    {
        if(doneTab.Count != 0)
        {
            moveGameObjects();
        }
    }

    /// <summary>
    /// This method moves the different part of the avatar when called.
    /// </summary>
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
                percentageComplete = elapsedTime / desiredDurationTab[i];
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
            desiredDurationTab.RemoveAt(i);
        }

    }

    /// <summary>
    /// This method is used to setup the movement (the positions and angles of the different parts of the avatar) done in the "MoveGameObjects" method.
    /// </summary>
    /// <param name="pos">The new positions of the different parts of the avatar.</param>
    /// <param name="angles">The new angles of the different parts of the avatar.</param>
    private void goToPose(Vector3[] pos, Vector3[] angles, float desiredDuration)
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
            desiredDurationTab.Add(desiredDuration);
        }
    }

    /// <summary>
    /// When this method is called, the avatar goes in the straight position.
    /// </summary>
    public void goToStraight()
    {
        desiredDuration = 1f;
        goToPose(neutralStraightPose, neutralStraightAngles, desiredDuration);
    }

    /// <summary>
    /// When this method is called, the avatar waves his hand to the right.
    /// </summary>
    public void waveHandRight()
    {
        desiredDuration = 0.5f;
        goToPose(waveHandRightPose, waveHandRightAngles, desiredDuration);
    }

    /// <summary>
    /// When this method is called, the avatar waves his hand to the left.
    /// </summary>
    public void waveHandLeft()
    {
        desiredDuration = 0.5f;
        goToPose(waveHandLeftPose, waveHandLeftAngles, desiredDuration);
    }

    /// <summary>
    /// When this method is called, the avatar lifts the right leg.
    /// </summary>
    public void walkRight()
    {
        desiredDuration = 0.75f;
        goToPose(rightWalkingPose, rightWalkingAngles, desiredDuration);
    }

    /// <summary>
    /// When this method is called, the avatar lifts the left leg.
    /// </summary>
    public void walkLeft()
    {
        desiredDuration = 0.75f;
        goToPose(leftWalkingPose, leftWalkingAngles, desiredDuration);
    }

    /// <summary>
    /// When this method is called, the avatar's hands are moved up
    /// </summary>
    public void handsTalkingUp()
    {
        desiredDuration = Random.Range(0.5f, 1.5f);
        goToPose(handsTalkingUpPose, handsTalkingUpAngles, desiredDuration);
    }

    /// <summary>
    /// When this method is called, the avatar's hands are moved down
    /// </summary>
    public void handsTalkingDown()
    {
        desiredDuration = Random.Range(0.5f, 1f);
        goToPose(handsTalkingDownPose, handsTalkingDownAngles, desiredDuration);
    }

    /// <summary>
    /// When this method is called, the avatar's does a rock with his hand.
    /// </summary>
    public void rock()
    {
        desiredDuration = 0.75f;
        goToPose(rockPose, rockAngles, desiredDuration);
    }

    /// <summary>
    /// When this method is called, the avatar's does a paper with his hand.
    /// </summary>
    public void paper()
    {
        desiredDuration = 0.75f;
        goToPose(paperPose, paperAngles, desiredDuration);
    }

    /// <summary>
    /// When this method is called, the avatar's does scissors with his hand.
    /// </summary>
    public void scissors()
    {
        desiredDuration = 0.75f;
        goToPose(scissorsPose, scissorsAngles, desiredDuration);
    }
}
