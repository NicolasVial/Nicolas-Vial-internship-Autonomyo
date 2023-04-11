using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class targetAngles : MonoBehaviour
{

    //The target angles of the right/left foot and knee in order to validate the pose
    [SerializeField] private float l_targetAbdAngle;
    [SerializeField] private float r_targetAbdAngle;
    [SerializeField] private float l_targetHipAngle;
    [SerializeField] private float r_targetHipAngle;
    [SerializeField] private float l_targetKneeAngle;
    [SerializeField] private float r_targetKneeAngle;

    public float[] getTargetAngles()
    {
        float[] targetPos = new[] { l_targetAbdAngle, r_targetAbdAngle, l_targetHipAngle, r_targetHipAngle, l_targetKneeAngle, r_targetKneeAngle};
        return targetPos;
    }
}
