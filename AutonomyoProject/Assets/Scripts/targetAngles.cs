using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// The following script represents the target angles of a position for the dance game.
/// </summary>

public class targetAngles : MonoBehaviour
{

    //The target angles of the right/left foot and knee in order to validate the pose
    [SerializeField] private float l_targetAbdAngle;
    [SerializeField] private float r_targetAbdAngle;
    [SerializeField] private float l_targetHipAngle;
    [SerializeField] private float r_targetHipAngle;
    [SerializeField] private float l_targetKneeAngle;
    [SerializeField] private float r_targetKneeAngle;
    [SerializeField] public string poseName;

    /// <summary>
    /// This method gives the target angles of the position.
    /// </summary>
    /// <returns>The target angles of this position.</returns>
    public float[] getTargetAngles()
    {
        float[] targetPos = new[] { l_targetAbdAngle, r_targetAbdAngle, l_targetHipAngle, r_targetHipAngle, l_targetKneeAngle, r_targetKneeAngle};
        return targetPos;
    }
}
