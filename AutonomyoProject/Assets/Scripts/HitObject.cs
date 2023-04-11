using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitObject : MonoBehaviour
{
    [SerializeField] private float speedFactor;
    [SerializeField] private float maxDistance;
    [SerializeField] private float speedFactorReducer;



    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (transform.position.x < maxDistance)
        {
            transform.position += Time.deltaTime * transform.right * speedFactor;
            if (speedFactor > 0f)
            {
                speedFactor -= speedFactorReducer;
            }
            
        }
    }
}
