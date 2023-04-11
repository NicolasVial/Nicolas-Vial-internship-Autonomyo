using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuLogic : MonoBehaviour
{

    [SerializeField] private GameObject freeMoutains;
    [SerializeField] private GameObject repetitiveGameLandscape;

    private GameObject actualLandscape;

    // Start is called before the first frame update
    void Start()
    {
        actualLandscape = freeMoutains;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PressFreeButton()
    {
        actualLandscape.SetActive(false);
        actualLandscape = freeMoutains;
        actualLandscape.SetActive(true);
    }

    public void PressPlayButton()
    {
        actualLandscape.SetActive(false);
        actualLandscape = repetitiveGameLandscape;
        actualLandscape.SetActive(true);
    }
}
