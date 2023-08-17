using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// This class represents a target for the BeatHands game.
/// </summary>

public class BeatHandsHitObject : MonoBehaviour
{

    [SerializeField] private AudioSource source;
    [SerializeField] private bool playSound;
    private BeatHandsSpawner spawner;

    /// <summary>
    /// Start method is called before the first frame updatena dis used to setup what is needed at the start of the App.
    /// </summary>
    void Start()
    {
        source.Play();
        spawner = (BeatHandsSpawner)FindObjectOfType(typeof(BeatHandsSpawner), true);
    }

    /// <summary>
    /// Update method is called once per frame and is used to update what needs to be updated each frame.
    /// </summary>
    void Update()
    {
        if (playSound)
        {
            source.Play();
            playSound = false;
        }
        
        // When the game is finished, the target must be destroyed.
        if (!spawner.isPlaying)
        {
            Destroy(gameObject);
        }
        
    }

}
