using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class HandPositions : MonoBehaviour
{
    [SerializeField] private SoundManager soundManager;

    [SerializeField] private GameObject r_thumbGO;
    [SerializeField] private GameObject r_indexGO;
    [SerializeField] private GameObject r_middleGO;
    [SerializeField] private GameObject r_ringGO;
    [SerializeField] private GameObject r_littleGO;
    [SerializeField] private GameObject l_thumbGO;
    [SerializeField] private GameObject l_indexGO;
    [SerializeField] private GameObject l_middleGO;
    [SerializeField] private GameObject l_ringGO;
    [SerializeField] private GameObject l_littleGO;

    [SerializeField] private TextMeshProUGUI t1;
    [SerializeField] private TextMeshProUGUI t2;
    [SerializeField] private TextMeshProUGUI t3;
    [SerializeField] private TextMeshProUGUI t4;
    [SerializeField] private TextMeshProUGUI t5;
    [SerializeField] private TextMeshProUGUI t12;
    [SerializeField] private TextMeshProUGUI t22;
    [SerializeField] private TextMeshProUGUI t32;
    [SerializeField] private TextMeshProUGUI t42;
    [SerializeField] private TextMeshProUGUI t52;
    [SerializeField] private TextMeshProUGUI tScissors;
    [SerializeField] private TextMeshProUGUI tRock;
    [SerializeField] private TextMeshProUGUI tPaper;

    [SerializeField] private GameObject r_RockGO;
    [SerializeField] private GameObject r_PaperGO;
    [SerializeField] private GameObject r_ScissorsGO;
    [SerializeField] private GameObject l_RockGO;
    [SerializeField] private GameObject l_PaperGO;
    [SerializeField] private GameObject l_ScissorsGO;

    [SerializeField] private GameObject r_CrossGO;
    [SerializeField] private GameObject l_CrossGO;
    [SerializeField] private GameObject r_CheckGO;
    [SerializeField] private GameObject l_CheckGO;
    [SerializeField] private GameObject r_MinusGO;
    [SerializeField] private GameObject l_MinusGO;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        bool checkScissorsR = CheckScissorsRight();
        bool checkRockR = CheckRockRight(); ;
        bool checkPaperR = CheckPaperRight();
        bool checkScissorsL = CheckScissorsLeft();
        bool checkRockL = CheckRockLeft(); ;
        bool checkPaperL = CheckPaperLeft();
        if (checkScissorsR)
        {
            tScissors.SetText("Scissors!!");
            r_ScissorsGO.SetActive(true);
        }
        else
        {
            tScissors.SetText("-");
            r_ScissorsGO.SetActive(false);
        }
        if (checkScissorsL)
        {
            tScissors.SetText("Scissors!!");
            l_ScissorsGO.SetActive(true);
        }
        else
        {
            tScissors.SetText("-");
            l_ScissorsGO.SetActive(false);
        }
        if (checkRockR)
        {
            tRock.SetText("Rock!!");
            r_RockGO.SetActive(true);
        }
        else
        {
            tRock.SetText("-");
            r_RockGO.SetActive(false);
        }
        if (checkRockL)
        {
            tRock.SetText("Rock!!");
            l_RockGO.SetActive(true);
        }
        else
        {
            tRock.SetText("-");
            l_RockGO.SetActive(false);
        }
        if (checkPaperR)
        {
            tPaper.SetText("Paper!!");
            r_PaperGO.SetActive(true);
        }
        else
        {
            tPaper.SetText("-");
            r_PaperGO.SetActive(false);
        }

        if (checkPaperL)
        {
            tPaper.SetText("Paper!!");
            l_PaperGO.SetActive(true);
        }
        else
        {
            tPaper.SetText("-");
            l_PaperGO.SetActive(false);
        }

        CheckResult(checkRockR, checkPaperR, checkScissorsR, checkRockL, checkPaperL, checkScissorsL);

        /*
        t1.SetText(r_thumbGO.transform.localEulerAngles.x.ToString());
        t2.SetText(r_indexGO.transform.localEulerAngles.x.ToString());
        t3.SetText(r_middleGO.transform.localEulerAngles.x.ToString());
        float test = r_ringGO.transform.localEulerAngles.x;
        test = (test > 180f) ? test - 360f : test;
        t4.SetText(test.ToString());
        t5.SetText(r_littleGO.transform.localEulerAngles.x.ToString());
        t12.SetText(l_thumbGO.transform.localEulerAngles.x.ToString());
        t22.SetText(l_indexGO.transform.localEulerAngles.x.ToString());
        t32.SetText(l_middleGO.transform.localEulerAngles.x.ToString());
        t42.SetText(l_ringGO.transform.localEulerAngles.x.ToString());
        t52.SetText(l_littleGO.transform.localEulerAngles.x.ToString());
        */
    }

    private bool CheckScissorsRight()
    {
        float x1 = r_thumbGO.transform.localEulerAngles.x;
        float x2 = r_indexGO.transform.localEulerAngles.x;
        float x3 = r_middleGO.transform.localEulerAngles.x;
        float x4 = r_ringGO.transform.localEulerAngles.x;
        float x5 = r_littleGO.transform.localEulerAngles.x;
        bool check1 = CheckAngle(x1, 10f, 25f);
        bool check2 = CheckAngle(x2, 10f, 25f);
        bool check3 = CheckAngle(x3, 20f, 45f);
        bool check4 = CheckAngle(x4, -35f, 30f);
        bool check5 = CheckAngle(x5, -35f, 30f);

        bool check = false;
        if (check1 && check2 && check3 && check4 && check5)
        {
            check = true;
        }
        return check;
    }

    private bool CheckScissorsLeft()
    {
        float x12 = l_thumbGO.transform.localEulerAngles.x;
        float x22 = l_indexGO.transform.localEulerAngles.x;
        float x32 = l_middleGO.transform.localEulerAngles.x;
        float x42 = l_ringGO.transform.localEulerAngles.x;
        float x52 = l_littleGO.transform.localEulerAngles.x;
        bool check12 = CheckAngle(x12, 10f, 25f);
        bool check22 = CheckAngle(x22, 10f, 25f);
        bool check32 = CheckAngle(x32, 20f, 45f);
        bool check42 = CheckAngle(x42, -35f, 30f);
        bool check52 = CheckAngle(x52, -35f, 30f);

        bool check = false;
        if (check12 && check22 && check32 && check42 && check52)
        {
            check = true;
        }
        return check;
    }

    private bool CheckRockRight()
    {
        float x1 = r_thumbGO.transform.localEulerAngles.x;
        float x2 = r_indexGO.transform.localEulerAngles.x;
        float x3 = r_middleGO.transform.localEulerAngles.x;
        float x4 = r_ringGO.transform.localEulerAngles.x;
        float x5 = r_littleGO.transform.localEulerAngles.x;
        bool check1 = CheckAngle(x1, 10f, 25f);
        bool check2 = CheckAngle(x2, -60f, 25f);
        bool check3 = CheckAngle(x3, -60f, 25f);
        bool check4 = CheckAngle(x4, -60f, 25f);
        bool check5 = CheckAngle(x5, -60f, 25f);

        bool check = false;
        if (check1 && check2 && check3 && check4 && check5)
        {
            check = true;
        }
        
        return check;
    }

    private bool CheckRockLeft()
    {
        float x12 = l_thumbGO.transform.localEulerAngles.x;
        float x22 = l_indexGO.transform.localEulerAngles.x;
        float x32 = l_middleGO.transform.localEulerAngles.x;
        float x42 = l_ringGO.transform.localEulerAngles.x;
        float x52 = l_littleGO.transform.localEulerAngles.x;
        bool check12 = CheckAngle(x12, 10f, 25f);
        bool check22 = CheckAngle(x22, -60f, 25f);
        bool check32 = CheckAngle(x32, -60f, 25f);
        bool check42 = CheckAngle(x42, -60f, 25f);
        bool check52 = CheckAngle(x52, -60f, 25f);

        bool check = false;
        if (check12 && check22 && check32 && check42 && check52)
        {
            check = true;
        }

        return check;
    }


    private bool CheckPaperRight()
    {
        float x1 = r_thumbGO.transform.localEulerAngles.x;
        float x2 = r_indexGO.transform.localEulerAngles.x;
        float x3 = r_middleGO.transform.localEulerAngles.x;
        float x4 = r_ringGO.transform.localEulerAngles.x;
        float x5 = r_littleGO.transform.localEulerAngles.x;
        bool check1 = CheckAngle(x1, 15f, 25f);
        bool check2 = CheckAngle(x2, 15f, 25f);
        bool check3 = CheckAngle(x3, 15f, 25f);
        bool check4 = CheckAngle(x4, 15f, 25f);
        bool check5 = CheckAngle(x5, 15f, 25f);

        bool check = false;
        if (check1 && check2 && check3 && check4 && check5)
        {
            check = true;
        }
        
        return check;
    }

    private bool CheckPaperLeft()
    {
        float x12 = l_thumbGO.transform.localEulerAngles.x;
        float x22 = l_indexGO.transform.localEulerAngles.x;
        float x32 = l_middleGO.transform.localEulerAngles.x;
        float x42 = l_ringGO.transform.localEulerAngles.x;
        float x52 = l_littleGO.transform.localEulerAngles.x;
        bool check12 = CheckAngle(x12, 15f, 25f);
        bool check22 = CheckAngle(x22, 15f, 25f);
        bool check32 = CheckAngle(x32, 15f, 25f);
        bool check42 = CheckAngle(x42, 15f, 25f);
        bool check52 = CheckAngle(x52, 15f, 25f);

        bool check = false;
        if (check12 && check22 && check32 && check42 && check52)
        {
            check = true;
        }

        return check;
    }

    private bool CheckAngle(float angle, float target, float marginOfAngle)
    {
        bool check = false;
        angle = (angle > 180f) ? angle - 360f : angle;
        if (angle + marginOfAngle >= target && angle - marginOfAngle <= target)
        {
            check = true;
        }
        else
        {
            check = false;
        }
        return check;
    }

    private void CheckResult(bool rockR, bool paperR, bool scissorsR, bool rockL, bool paperL, bool scissorsL)
    {
        if ((rockL && scissorsR) || (scissorsL && paperR) || (paperL && rockR))
        {
            DesactiveAllResultImages();
            l_CheckGO.SetActive(true);
            r_CrossGO.SetActive(true);
        }
        else
        {
            if ((rockR && scissorsL) || (scissorsR && paperL) || (paperR && rockL))
            {
                DesactiveAllResultImages();
                r_CheckGO.SetActive(true);
                l_CrossGO.SetActive(true);
            }
            else
            {
                DesactiveAllResultImages();
                l_MinusGO.SetActive(true);
                r_MinusGO.SetActive(true);
            }
        }
        
    }

    private void DesactiveAllResultImages()
    {
        l_CrossGO.SetActive(false);
        r_CrossGO.SetActive(false);
        l_CheckGO.SetActive(false);
        r_CheckGO.SetActive(false);
        l_MinusGO.SetActive(false);
        r_MinusGO.SetActive(false);
    }
}
