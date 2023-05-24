using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test1 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.localPosition = new Vector3(this.transform.localPosition.x, this.transform.localPosition.y - 0.001f, this.transform.localPosition.z);
    }
}
