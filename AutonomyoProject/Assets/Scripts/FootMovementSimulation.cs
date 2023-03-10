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
    private Vector3 upKneeMovementVector;

    [SerializeField]
    private Vector3 abductionRightVector;

    [SerializeField]
    private Vector3 abductionLeftVector;

    private bool isLeftMoving = false;
    private bool isRightMoving = false;
    private float elapsedTimeUpKneeRight = 0;
    private float elapsedTimeUpKneeLeft = 0;
    private float elapsedTimeAbductionLeft = 0;
    private float elapsedTimeAbductionRight = 0;
    private Vector3 initialPosUpKneeLeft;
    private Vector3 finalPosUpKneeLeft;
    private Vector3 initialPosUpKneeRight;
    private Vector3 finalPosUpKneeRight;
    private Vector3 initialPosAbductionLeft;
    private Vector3 finalPosAbductionLeft;
    private Vector3 initialPosAbductionRight;
    private Vector3 finalPosAbductionRight;
    private bool isMovingBackwardUpKneeLeft = false;
    private bool isMovingBackwardUpKneeRight = false;
    private bool isMovingForwardUpKneeRight = false;
    private bool isMovingForwardUpKneeLeft = false;
    private bool isMovingBackwardAbductionLeft = false;
    private bool isMovingBackwardAbductionRight = false;
    private bool isMovingForwardAbductionRight = false;
    private bool isMovingForwardAbductionLeft = false;
    private float percentageCompleteUpKneeLeft;
    private float percentageCompleteUpKneeRight;
    private float percentageCompleteAbductionLeft;
    private float percentageCompleteAbductionRight;

    // Start is called before the first frame update
    void Start()
    {
   
    }

    // Update is called once per frame
    void Update()
    {
        startMovementListener("ToggleUpKneeLeft", ref isMovingForwardUpKneeLeft, isMovingBackwardUpKneeLeft, ref initialPosUpKneeLeft, ref finalPosUpKneeLeft, leftFoot, upKneeMovementVector, true);
        startMovementListener("ToggleUpKneeRight", ref isMovingForwardUpKneeRight, isMovingBackwardUpKneeRight, ref initialPosUpKneeRight, ref finalPosUpKneeRight, rightFoot, upKneeMovementVector, false);
        startMovementListener("ToggleAbductionLeft", ref isMovingForwardAbductionLeft, isMovingBackwardAbductionLeft, ref initialPosAbductionLeft, ref finalPosAbductionLeft, leftFoot, abductionLeftVector, true);
        startMovementListener("ToggleAbductionRight", ref isMovingForwardAbductionRight, isMovingBackwardAbductionRight, ref initialPosAbductionRight, ref finalPosAbductionRight, rightFoot, abductionRightVector, false);

        isMovingForwardUpKneeLeft = executeForwardMovement(isMovingForwardUpKneeLeft, ref isMovingBackwardUpKneeLeft, ref elapsedTimeUpKneeLeft, ref percentageCompleteUpKneeLeft, ref leftFoot, ref initialPosUpKneeLeft, ref finalPosUpKneeLeft, upKneeMovementVector);
        isMovingForwardUpKneeRight = executeForwardMovement(isMovingForwardUpKneeRight, ref isMovingBackwardUpKneeRight, ref elapsedTimeUpKneeRight, ref percentageCompleteUpKneeRight, ref rightFoot, ref initialPosUpKneeRight, ref finalPosUpKneeRight, upKneeMovementVector);
        isMovingForwardAbductionLeft = executeForwardMovement(isMovingForwardAbductionLeft, ref isMovingBackwardAbductionLeft, ref elapsedTimeAbductionLeft, ref percentageCompleteAbductionLeft, ref leftFoot, ref initialPosAbductionLeft, ref finalPosAbductionLeft, abductionLeftVector);
        isMovingForwardAbductionRight = executeForwardMovement(isMovingForwardAbductionRight, ref isMovingBackwardAbductionRight, ref elapsedTimeAbductionRight, ref percentageCompleteAbductionRight, ref rightFoot, ref initialPosAbductionRight, ref finalPosAbductionRight, abductionRightVector);

        isMovingBackwardUpKneeLeft = executeBackwardMovement(isMovingBackwardUpKneeLeft, ref elapsedTimeUpKneeLeft, ref percentageCompleteUpKneeLeft, ref leftFoot, initialPosUpKneeLeft, finalPosUpKneeLeft, true);
        isMovingBackwardUpKneeRight = executeBackwardMovement(isMovingBackwardUpKneeRight, ref elapsedTimeUpKneeRight, ref percentageCompleteUpKneeRight, ref rightFoot, initialPosUpKneeRight, finalPosUpKneeRight, false);
        isMovingBackwardAbductionLeft = executeBackwardMovement(isMovingBackwardAbductionLeft, ref elapsedTimeAbductionLeft, ref percentageCompleteAbductionLeft, ref leftFoot, initialPosAbductionLeft, finalPosAbductionLeft, true);
        isMovingBackwardAbductionRight = executeBackwardMovement(isMovingBackwardAbductionRight, ref elapsedTimeAbductionRight, ref percentageCompleteAbductionRight, ref rightFoot, initialPosAbductionRight, finalPosAbductionRight, false);
    }

    private void startMovementListener(string toggleString, ref bool isMovingForward, bool isMovingBackward, ref Vector3 initialPos, ref Vector3 finalPos, GameObject foot, Vector3 movementvector, bool isLeft)
    {
        if (InputManager.GetButtonDown(toggleString) && !isMovingForward && !isMovingBackward && ((isLeft == true && isLeftMoving == false) || (isLeft == false && isRightMoving == false)))
        {
            isMovingForward = true;
            initialPos = foot.transform.position;
            finalPos = new Vector3(foot.transform.position.x + movementvector.x, foot.transform.position.y + movementvector.y, foot.transform.position.z + movementvector.z);
            
            if (isLeft)
            {
                isLeftMoving = true;
            }
            else
            {
                isRightMoving = true;
            }
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

    private bool executeBackwardMovement(bool isMovingBackward, ref float elapsedTime, ref float percentageComplete, ref GameObject foot, Vector3 initialPos, Vector3 finalPos, bool isLeft)
    {
        if (isMovingBackward)
        {
            elapsedTime += Time.deltaTime;
            percentageComplete = elapsedTime / desiredDuration;
            foot.transform.position = Vector3.Lerp(initialPos, finalPos, curve.Evaluate(percentageComplete));
            if (percentageComplete >= 1)
            {     
                elapsedTime = 0;
                if (isLeft)
                {
                    isLeftMoving = false;
                }
                else
                {
                    isRightMoving = false;
                }
                return false;
            }
            return true;
        }
        return false;
    }
}
