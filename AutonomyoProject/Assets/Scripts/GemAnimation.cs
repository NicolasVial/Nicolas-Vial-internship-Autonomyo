using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GemAnimation : MonoBehaviour
{

    [SerializeField] private float maxHeight;
    [SerializeField] private float minHeight;
    [SerializeField] private float movementSpeed;
    [SerializeField] private float rotationSpeed;

    private bool isGoingUp = true;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
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
