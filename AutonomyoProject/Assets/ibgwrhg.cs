using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ibgwrhg : MonoBehaviour
{

    [SerializeField] private GameObject cube;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.localPosition = new Vector3(this.transform.localPosition.x + 0.001f, this.transform.localPosition.y, this.transform.localPosition.z);
        cube.transform.localPosition = new Vector3(cube.transform.localPosition.x + 0.005f, cube.transform.localPosition.y, cube.transform.localPosition.z);
    }
}
