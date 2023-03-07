using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QuickVR;

public class GameObjectController : MonoBehaviour
{
    public bool _move = true;

    public float _maxRightLeftSpeed = 1;
    public float _maxUpDownSpeed = 1;

    void Start()
    {
        
    }

    void Update()
    {
        if (InputManager.GetButtonDown("ToggleMoveObject"))
        {
            _move = !_move;
        }

        if (_move)
        {
            float vValue = InputManager.GetAxis(InputManager.DEFAULT_AXIS_VERTICAL);
            transform.Translate(Vector3.up * vValue * _maxUpDownSpeed * Time.deltaTime, Space.Self);

            float hValue = InputManager.GetAxis(InputManager.DEFAULT_AXIS_HORIZONTAL);
            transform.Translate(Vector3.right * hValue * _maxRightLeftSpeed * Time.deltaTime, Space.Self);

            if(transform.localPosition.x > 11f)
            {
                transform.localPosition = new Vector3(1f, transform.localPosition.y, transform.localPosition.z);
            }
            if (transform.localPosition.x < -1f)
            {
                transform.localPosition = new Vector3(-1f, transform.localPosition.y, transform.localPosition.z);
            }
            if (transform.localPosition.y > 1f)
            {
                transform.localPosition = new Vector3(transform.localPosition.x, 1f, transform.localPosition.z);
            }
            if (transform.localPosition.y < -1f)
            {
                transform.localPosition = new Vector3(transform.localPosition.x, -1f, transform.localPosition.z);
            }

            /*
            float hValue = InputManager.GetAxis(InputManager.DEFAULT_AXIS_HORIZONTAL);
            transform.Rotate(Vector3.up, hValue * _maxAngularSpeed * Time.deltaTime, Space.Self);
            */
        }
    }
}
