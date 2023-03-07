using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MirrorAvatar : MonoBehaviour
{
    [SerializeField]
    private Transform parent;

    private Vector3 pos, fw, up;

    // Start is called before the first frame update
    void Start()
    {
        pos = parent.transform.InverseTransformPoint(transform.position);
        fw = parent.transform.InverseTransformDirection(transform.forward);
        up = parent.transform.InverseTransformDirection(transform.up);
    }

    // Update is called once per frame
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
