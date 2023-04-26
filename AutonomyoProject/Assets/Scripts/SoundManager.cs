using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{

    [SerializeField] private AudioSource homeMusic;
    [SerializeField] private AudioSource game1Music;
    [SerializeField] private AudioSource successSound;
    [SerializeField] private AudioSource cheeringSound;

    private AudioSource actualMusic;

    // Start is called before the first frame update
    void Start()
    {
        actualMusic = homeMusic;
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    public void playHomeMusic()
    {
        homeMusic.Play();
        actualMusic = homeMusic;
    }

    public void playGame1Music()
    {
        game1Music.Play();
        actualMusic = game1Music;
    }

    public void stopActualMusic()
    {
        actualMusic.Stop();
    }

    public void playSuccessSound()
    {
        successSound.Play();
    }

    public void playCheeringSound()
    {
        successSound.Play();
    }

}
