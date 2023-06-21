using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class Controller : MonoBehaviour
{
    [SerializeField] GameObject theClient;
    [SerializeField] GameObject checkMark1;
    [SerializeField] GameObject checkMark2;
    [SerializeField] GameObject checkMark1FR;

    private ClientSide clientSide;
    private bool areMotorsArmed = false;

    // Start is called before the first frame update
    void Start()
    {
        clientSide = theClient.GetComponent<ClientSide>();
    }

    // Update is called once per frame
    void Update()
    {

    }

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

    public void setAbductionZero()
    {
        if (clientSide.isStreaming)
        {
            clientSide.SetBoolSyncVar("controller/set_abduction_zero", true);
        }
    }

    public void setJointZero()
    {
        if (clientSide.isStreaming)
        {
            clientSide.SetBoolSyncVar("controller/set_encoders_zero", true);
        }
    }

    public void setRightCellsZero()
    {
        if (clientSide.isStreaming)
        {
            clientSide.SetBoolSyncVar("controller/set_load_cells_zero_right", true);
        }
    }

    public void setLeftCellsZero()
    {
        if (clientSide.isStreaming)
        {
            clientSide.SetBoolSyncVar("controller/set_load_cells_zero_left", true);
        }
    }
}
