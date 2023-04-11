using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QuickVR;

public class SwapMirrorAvatar : MonoBehaviour
{
    [SerializeField] private GameObject mirror1;
    [SerializeField] private GameObject mirror2;
    [SerializeField] private GameObject mirror3;
    [SerializeField] private GameObject avatar1;
    [SerializeField] private GameObject avatar2;
    [SerializeField] private GameObject avatar3;

    private bool isMirror = true;

    // Update is called once per frame
    void Update()
    {
        if (InputManager.GetButtonDown("swapMirrorAvatar"))
        {
            if (isMirror)
            {
                mirror1.SetActive(false);
                mirror2.SetActive(false);
                mirror3.SetActive(false);
                avatar1.SetActive(true);
                avatar2.SetActive(true);
                avatar3.SetActive(true);
                isMirror = false;
            }
            else
            {
                avatar1.SetActive(false);
                avatar2.SetActive(false);
                avatar3.SetActive(false);
                mirror1.SetActive(true);
                mirror2.SetActive(true);
                mirror3.SetActive(true);
                isMirror = true;
            }
        }
    }
}
