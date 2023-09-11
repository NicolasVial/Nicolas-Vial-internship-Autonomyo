using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// The following script is used to mirror an avatar.
/// </summary>

public class MirrorAvatar : MonoBehaviour
{
    [SerializeField]
    private Transform parent;

    private Vector3 pos, fw, up;

    /// <summary>
    /// Start method is called before the first frame update and is used to setup what is needed at the start of the App.
    /// </summary>
    void Start()
    {
        pos = parent.transform.InverseTransformPoint(transform.position);
        fw = parent.transform.InverseTransformDirection(transform.forward);
        up = parent.transform.InverseTransformDirection(transform.up);
    }

    /// <summary>
    /// Update method is called once per frame and is used to update what needs to be updated each frame.
    /// </summary>
    void Update()
    {
        var newpos = parent.transform.TransformPoint(pos);
        var newfw = parent.transform.TransformDirection(fw);
        var newup = parent.transform.TransformDirection(up);
        var newrot = Quaternion.LookRotation(newfw, newup);
        transform.position = newpos;
        transform.rotation = newrot;
    }
}
