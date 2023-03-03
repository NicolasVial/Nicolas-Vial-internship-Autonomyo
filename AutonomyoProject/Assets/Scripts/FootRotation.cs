using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FootRotation : MonoBehaviour
{

    [SerializeField]
    private Transform toeTransform;

    [SerializeField]
    private Transform shinTransform;

    [SerializeField]
    private Transform footTransform;

    [SerializeField]
    private Transform targetFootTransform;

    private Vector3 sideFootShin;
    private Vector3 sideFootToe;
    private float baseAngle;
    private float actualAngle;
    private float angleToModify;

    // Start is called before the first frame update
    void Start()
    {
        sideFootShin = shinTransform.position - footTransform.position;
        sideFootToe = toeTransform.position - footTransform.position;
        baseAngle = Vector3.Angle(sideFootShin, sideFootToe);
    }

    // Update is called once per frame
    void Update()
    {
        sideFootShin = shinTransform.position - footTransform.position;
        sideFootToe = toeTransform.position - footTransform.position;
        actualAngle = Vector3.Angle(sideFootShin, sideFootToe);
        angleToModify = baseAngle - actualAngle;

        //Debug: When going too far from something "real", it starts to do smth weird.
        Debug.Log("base= " + baseAngle);
        Debug.Log("actual= " + actualAngle);
        Debug.Log("angle to modif= " + angleToModify);
        float a = targetFootTransform.eulerAngles.x + angleToModify;
        Debug.Log("oldAngle= " + targetFootTransform.eulerAngles.x);
        Debug.Log("newAngle= " + a);

        targetFootTransform.eulerAngles = new Vector3(targetFootTransform.eulerAngles.x + angleToModify, targetFootTransform.eulerAngles.y, targetFootTransform.eulerAngles.z);

       
        
        
    }
}
