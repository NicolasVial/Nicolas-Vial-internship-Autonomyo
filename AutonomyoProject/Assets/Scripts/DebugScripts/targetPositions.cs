using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class targetPositions : MonoBehaviour
{
    //The target positions of the right/left foot and knee in order to validate the pose
    [SerializeField] private Vector3 f_l_targetKneePos;
    [SerializeField] private Vector3 f_r_targetKneePos;
    [SerializeField] private Vector3 f_l_targetFootPos;
    [SerializeField] private Vector3 f_r_targetFootPos;
    [SerializeField] private Vector3 s_l_targetKneePos;
    [SerializeField] private Vector3 s_r_targetKneePos;
    [SerializeField] private Vector3 s_l_targetFootPos;
    [SerializeField] private Vector3 s_r_targetFootPos;

    public Vector3[] getTargetPositions()
    {
        Vector3[] targetPos = new[] { f_l_targetKneePos, f_r_targetKneePos, f_l_targetFootPos, f_r_targetFootPos, s_l_targetKneePos, s_r_targetKneePos, s_l_targetFootPos, s_r_targetFootPos };
        return targetPos;
    }
}
