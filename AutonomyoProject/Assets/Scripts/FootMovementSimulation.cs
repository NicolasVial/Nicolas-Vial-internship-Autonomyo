using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QuickVR;

public class FootMovementSimulation : MonoBehaviour
{

    [SerializeField]
    private GameObject leftFoot;

    [SerializeField]
    private GameObject rightFoot;

    [SerializeField]
    private float desiredDuration;

    [SerializeField]
    private AnimationCurve curve;

    [SerializeField]
    private Vector3 upKneeMovementVector = new Vector3(-0.5f, 0.5f, 0f);

    private float elapsedTimeLeft = 0;
    private float elapsedTimeRight = 0;
    private Vector3 initialPosLeft;
    private Vector3 finalPosLeft;
    private Vector3 initialPosRight;
    private Vector3 finalPosRight;
    private bool isMovingBackwardLeft = false;
    private bool isMovingBackwardRight = false;
    private bool isMovingForwardRight = false;
    private bool isMovingForwardLeft = false;
    private float percentageCompleteLeft;
    private float percentageCompleteRight;

    // Start is called before the first frame update
    void Start()
    {
   
    }

    // Update is called once per frame
    void Update()
    {
        startMovementListener("ToggleUpKneeLeft", ref isMovingForwardLeft, isMovingBackwardLeft, ref initialPosLeft, ref finalPosLeft, leftFoot, upKneeMovementVector);
        startMovementListener("ToggleUpKneeRight", ref isMovingForwardRight, isMovingBackwardRight, ref initialPosRight, ref finalPosRight, rightFoot, upKneeMovementVector);

        isMovingForwardLeft = executeForwardMovement(isMovingForwardLeft, ref isMovingBackwardLeft, ref elapsedTimeLeft, ref percentageCompleteLeft, ref leftFoot, ref initialPosLeft, ref finalPosLeft, upKneeMovementVector);
        isMovingForwardRight = executeForwardMovement(isMovingForwardRight, ref isMovingBackwardRight, ref elapsedTimeRight, ref percentageCompleteRight, ref rightFoot, ref initialPosRight, ref finalPosRight, upKneeMovementVector);

        isMovingBackwardLeft = executeBackwardMovement(isMovingBackwardLeft, ref elapsedTimeLeft, ref percentageCompleteLeft, ref leftFoot, initialPosLeft, finalPosLeft);
        isMovingBackwardRight = executeBackwardMovement(isMovingBackwardRight, ref elapsedTimeRight, ref percentageCompleteRight, ref rightFoot, initialPosRight, finalPosRight);
    }

    private void startMovementListener(string toggleString, ref bool isMovingForward, bool isMovingBackward, ref Vector3 initialPos, ref Vector3 finalPos, GameObject foot, Vector3 movementvector)
    {
        if (InputManager.GetButtonDown(toggleString) && !isMovingForward && !isMovingBackward)
        {
            isMovingForward = true;
            initialPos = foot.transform.position;
            finalPos = new Vector3(foot.transform.position.x + movementvector.x, foot.transform.position.y + movementvector.y, foot.transform.position.z + movementvector.z);
        }
    }

    private bool executeForwardMovement(bool isMovingForward, ref bool isMovingBackward, ref float elapsedTime, ref float percentageComplete, ref GameObject foot, ref Vector3 initialPos, ref Vector3 finalPos, Vector3 movementvector)
    {
        if (isMovingForward)
        {
            elapsedTime += Time.deltaTime;
            percentageComplete = elapsedTime / desiredDuration;
            foot.transform.position = Vector3.Lerp(initialPos, finalPos, curve.Evaluate(percentageComplete));
            if (percentageComplete >= 1)
            {
                isMovingBackward = true;
                elapsedTime = 0;
                initialPos = foot.transform.position;
                finalPos = new Vector3(foot.transform.position.x - movementvector.x, foot.transform.position.y - movementvector.y, foot.transform.position.z - movementvector.z);
                return false;
            }
            return true;
        }
        return false;
        
    }

    private bool executeBackwardMovement(bool isMovingBackward, ref float elapsedTime, ref float percentageComplete, ref GameObject foot, Vector3 initialPos, Vector3 finalPos)
    {
        if (isMovingBackward)
        {
            elapsedTime += Time.deltaTime;
            percentageComplete = elapsedTime / desiredDuration;
            foot.transform.position = Vector3.Lerp(initialPos, finalPos, curve.Evaluate(percentageComplete));
            if (percentageComplete >= 1)
            {     
                elapsedTime = 0;
                return false;
            }
            return true;
        }
        return false;
    }
}
