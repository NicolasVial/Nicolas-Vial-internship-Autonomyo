using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;


/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// The following script is used to control the Exoskeleton Autonomyo.
/// </summary>

public class Controller : MonoBehaviour
{
    [SerializeField] GameObject theClient;
    [SerializeField] GameObject checkMark1;
    [SerializeField] GameObject checkMark2;
    [SerializeField] GameObject checkMark1FR;

    private ClientSide clientSide;
    private bool areMotorsArmed = false;

    /// <summary>
    /// Start method is called before the first frame update and is used to setup what is needed at the start of the App.
    /// </summary>
    void Start()
    {
        clientSide = theClient.GetComponent<ClientSide>();
    }

    /// <summary>
    /// When this method is called, the motors of the exoskeleton are armed or disarmed based on the current state.
    /// </summary>
    public void toggleArmMotors()
    {
        if (clientSide.isStreaming)
        {
            if (areMotorsArmed)
            {
                clientSide.SetBoolSyncVar("controller/arm_motors", false);
                areMotorsArmed = false;
                checkMark1.SetActive(false);
                checkMark2.SetActive(false);
                checkMark1FR.SetActive(false);
            }
            else
            {
                clientSide.SetBoolSyncVar("controller/arm_motors", true);
                areMotorsArmed = true;
                checkMark1.SetActive(true);
                checkMark2.SetActive(true);
                checkMark1FR.SetActive(true);
            }
        }
    }

    /// <summary>
    /// When this method is called, the abduction of the exo is set to zero. This is used to callibrate the exo for the app to work properly.
    /// </summary>
    public void setAbductionZero()
    {
        if (clientSide.isStreaming)
        {
            clientSide.SetBoolSyncVar("controller/set_abduction_zero", true);
        }
    }

    /// <summary>
    /// When this method is called, the joints of the exo are set to zero. This is used to callibrate the exo for the app to work properly.
    /// </summary>
    public void setJointZero()
    {
        if (clientSide.isStreaming)
        {
            clientSide.SetBoolSyncVar("controller/set_encoders_zero", true);
        }
    }

    /// <summary>
    /// When this method is called, the right cells of the exo are set to zero. This is used to callibrate the exo for the app to work properly.
    /// </summary>
    public void setRightCellsZero()
    {
        if (clientSide.isStreaming)
        {
            clientSide.SetBoolSyncVar("controller/set_load_cells_zero_right", true);
        }
    }

    /// <summary>
    /// When this method is called, the left cells of the exo are set to zero. This is used to callibrate the exo for the app to work properly.
    /// </summary>
    public void setLeftCellsZero()
    {
        if (clientSide.isStreaming)
        {
            clientSide.SetBoolSyncVar("controller/set_load_cells_zero_left", true);
        }
    }
}
