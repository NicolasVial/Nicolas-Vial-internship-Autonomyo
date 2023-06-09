using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BeatHandsHitObject : MonoBehaviour
{

    [SerializeField] private AudioSource source;
    [SerializeField] private bool playSound;
    private BeatHandsSpawner spawner;

    // Start is called before the first frame update
    void Start()
    {
        source.Play();
        spawner = (BeatHandsSpawner)FindObjectOfType(typeof(BeatHandsSpawner), true);
    }

    void Update()
    {
        if (playSound)
        {
            source.Play();
            playSound = false;
        }
        
        if (!spawner.isPlaying)
        {
            Destroy(gameObject);
        }
        
    }

}
