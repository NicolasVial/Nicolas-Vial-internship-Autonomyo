using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryGameLogic : MonoBehaviour
{

    [SerializeField] private OVRScreenFade screenFade;

    // Start is called before the first frame update
    void Start()
    {
        screenFade.FadeIn();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
