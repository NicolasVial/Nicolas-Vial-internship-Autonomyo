using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;
using QuickVR;

public class GameObjectController : MonoBehaviour
{
    [SerializeField] LowerLimbsMovements lowerLimbs;
    [SerializeField] private float _maxRightLeftSpeed = 1;
    [SerializeField] private float _maxUpDownSpeed = 1;
    [SerializeField] private GameObject balanceSphere;
    [SerializeField] private float sphereSpeed;
    [SerializeField] private DoorPuzzleLogic puzzleLogic;

    private bool canGoPositivZ = true;
    private bool canGoNegativZ = true;
    private bool canGoPositivY = true;
    private bool canGoNegativY = true;
    private float diffY;
    private float diffZ;

    public bool _move = false;

    void Start()
    {
        
    }

    void Update()
    {
        if (_move)
        {
            float dirAngle = lowerLimbs.dirAngle;
            float angle = (dirAngle) * MathF.PI / 180;
            diffZ = MathF.Sin(angle) * sphereSpeed;
            diffY = MathF.Cos(angle) * sphereSpeed;
            moveSphere();   
        }
    }

    public void startGame()
    {
        _move = true;
        puzzleLogic.startGame();
    }

    private void OnTriggerEnter(Collider other)
    {
        switch (other.gameObject.tag)
        {
            case "sphereLeftWall":
                canGoNegativZ = false;
                break;
            case "sphereRightWall":
                canGoPositivZ = false;
                break;
            case "sphereFrontWall":
                canGoNegativY = false;
                break;
            case "sphereBackWall":
                canGoPositivY = false;
                break;
            default:
                break;
        }

    }

    private void OnTriggerExit(Collider other)
    {
        switch (other.gameObject.tag)
        {
            case "sphereLeftWall":
                canGoNegativZ = true;
                break;
            case "sphereRightWall":
                canGoPositivZ = true;
                break;
            case "sphereFrontWall":
                canGoNegativY = true;
                break;
            case "sphereBackWall":
                canGoPositivY = true;
                break;
            default:
                break;
        }

    }

    private void moveSphere()
    {
        switch ((canGoPositivY, canGoNegativY, canGoPositivZ, canGoNegativZ))
        {
            case (true, true, true, true):
                balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                break;
            case (true, true, true, false):
                if (diffZ < 0)
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z);
                }
                else
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                }
                break;
            case (true, true, false, true):
                if (diffZ >= 0)
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z);
                }
                else
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                }
                break;
            case (true, false, true, true):
                if (diffY < 0)
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                }
                else
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                }
                break;
            case (false, true, true, true):
                if (diffY >= 0)
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                }
                else
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                }
                break;
            case (true, true, false, false):
                balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z);
                break;
            case (true, false, true, false):
                if (diffZ < 0)
                {
                    if (diffY < 0)
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z);
                    }
                    else
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z);
                    }
                }
                else
                {
                    if (diffY < 0)
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                    }
                    else
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                    }
                }
                break;
            case (false, true, true, false):
                if (diffZ < 0)
                {
                    if (diffY >= 0)
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z);
                    }
                    else
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z);
                    }
                }
                else
                {
                    if (diffY >= 0)
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                    }
                    else
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                    }
                }
                break;
            case (true, false, false, true):
                if (diffZ >= 0)
                {
                    if (diffY < 0)
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z);
                    }
                    else
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z);
                    }
                }
                else
                {
                    if (diffY < 0)
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                    }
                    else
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                    }
                }
                break;
            case (false, true, false, true):
                if (diffZ >= 0)
                {
                    if (diffY >= 0)
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z);
                    }
                    else
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z);
                    }
                }
                else
                {
                    if (diffY >= 0)
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                    }
                    else
                    {
                        balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                    }
                }
                break;
            case (false, false, true, true):
                balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                break;
            case (true, false, false, false):
                if (diffY < 0)
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z);
                }
                else
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z);
                }
                break;
            case (false, true, false, false):
                if (diffY >= 0)
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z);
                }
                else
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y - Convert.ToSingle(diffY), balanceSphere.transform.localPosition.z);
                }
                break;
            case (false, false, true, false):
                if (diffZ < 0)
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z);
                }
                else
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                }
                break;
            case (false, false, false, true):
                if (diffZ >= 0)
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z);
                }
                else
                {
                    balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z - Convert.ToSingle(diffZ));
                }
                break;
            case (false, false, false, false):
                balanceSphere.transform.localPosition = new Vector3(balanceSphere.transform.localPosition.x, balanceSphere.transform.localPosition.y, balanceSphere.transform.localPosition.z);
                break;
            default:
                break;
        }
    }
}
