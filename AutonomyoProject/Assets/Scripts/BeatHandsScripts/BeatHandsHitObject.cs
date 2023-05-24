using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BeatHandsHitObject : MonoBehaviour
{

    [SerializeField] private AudioSource source;
    [SerializeField] private bool playSound;

    // Start is called before the first frame update
    void Start()
    {
        source.Play();
    }

    void Update()
    {
        if (playSound)
        {
            source.Play();
            playSound = false;
        }
    }

}
