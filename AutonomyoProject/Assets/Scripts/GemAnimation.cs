using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// The following script handles the animation of the final gem of the story game.
/// </summary>

public class GemAnimation : MonoBehaviour
{

    [SerializeField] private float maxHeight;
    [SerializeField] private float minHeight;
    [SerializeField] private float movementSpeed;
    [SerializeField] private float rotationSpeed;

    private bool isGoingUp = true;

    /// <summary>
    /// Update method is called once per frame and is used to update what needs to be updated each frame.
    /// </summary>
    void Update()
    {
        if (isGoingUp)
        {
            this.transform.localPosition = new Vector3(this.transform.localPosition.x, this.transform.localPosition.y + movementSpeed, this.transform.localPosition.z);
            if(this.transform.localPosition.y > maxHeight)
            {
                isGoingUp = false;
            }
        }
        else
        {
            this.transform.localPosition = new Vector3(this.transform.localPosition.x, this.transform.localPosition.y - movementSpeed, this.transform.localPosition.z);
            if (this.transform.localPosition.y < minHeight)
            {
                isGoingUp = true;
            }
        }

        this.transform.Rotate(0, rotationSpeed, 0);
    }
}
