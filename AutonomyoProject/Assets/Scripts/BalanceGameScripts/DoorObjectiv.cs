using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DoorObjectiv : MonoBehaviour
{

    [SerializeField]
    private TextMeshProUGUI text;

    [SerializeField]
    private int objNb;

    private static int objCount = 0;
    public bool succeed = false;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "DoorSphere" && objNb-1 == objCount)
        {
            succeed = true;
            text.color = new Color(0f, 1f, 0f, 1f);
            objCount += 1;
            Debug.Log("objcount+=1 = " + objCount);
        }
    }

    public void resetObjCount()
    {
        Debug.Log("resetobjcount");
        objCount = 0;
    }

    public void resetObj()
    {
        Debug.Log("resetobj");
        objCount = 0;
        succeed = false;
        text.color = Color.white;
    }
}
