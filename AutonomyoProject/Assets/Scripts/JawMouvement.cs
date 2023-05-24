using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JawMouvement : MonoBehaviour
{
    [SerializeField] private GameObject jaw;
    [SerializeField] private Vector3 closeJawPos;
    [SerializeField] private Vector3 openJawPos;
    [SerializeField] private float desiredDuration = 0.5f;
    [SerializeField] private AnimationCurve curve;

    private List<bool> doneTab = new List<bool>();
    private List<float> startTimeTab = new List<float>();
    private List<Vector3> startPosTab = new List<Vector3>();
    private List<Vector3> endPosTab = new List<Vector3>();
    private bool closed = true;
    private bool doneSetup = false;

    public bool isTalking = false;

    // Update is called once per frame
    void Update()
    {
        if (isTalking)
        {
            if (!doneSetup)
            {
                doneSetup = true;
                openJaw();
                closed = false;
            }
            jawMovement();
        }
        else
        {
            if (doneSetup){
                doneSetup = false;
                if (!closed)
                {
                    closeJaw();
                }
            }
            if(doneTab.Count != 0)
            {
                jawMovement();
            }
        }
    }

    public void setJawGO(GameObject newJaw)
    {
        this.jaw = newJaw;
    }

    private void jawMovement()
    {
        List<int> indexToRemove = new List<int>();

        float percentageComplete = 0f;
        if (!doneTab[0])
        {
            doneTab[0] = true;
            startTimeTab[0] = Time.time;
        }
        else
        {
            float elapsedTime = (Time.time - startTimeTab[0]);
            percentageComplete = elapsedTime / desiredDuration;
            jaw.transform.localPosition = Vector3.Lerp(startPosTab[0], endPosTab[0], curve.Evaluate(percentageComplete));
        }

        if (percentageComplete >= 1f)
        {
            indexToRemove.Add(0);
        }


        if (indexToRemove.Count != 0)
        {
            doneTab.RemoveAt(0);
            startTimeTab.RemoveAt(0);
            startPosTab.RemoveAt(0);
            endPosTab.RemoveAt(0);
            if (isTalking)
            {
                if (closed)
                {
                    openJaw();
                    closed = false;
                    desiredDuration = Random.Range(0.13f, 0.55f);
                }
                else
                {
                    closeJaw();
                    closed = true;
                    desiredDuration = Random.Range(0.13f, 0.55f);
                }
            }
        }
    }

    private void openJaw()
    {
        doneTab.Add(false);
        startTimeTab.Add(0f);
        startPosTab.Add(closeJawPos);
        endPosTab.Add(openJawPos);
    }

    private void closeJaw()
    {
        doneTab.Add(false);
        startTimeTab.Add(0f);
        startPosTab.Add(openJawPos);
        endPosTab.Add(closeJawPos);
    }
}
