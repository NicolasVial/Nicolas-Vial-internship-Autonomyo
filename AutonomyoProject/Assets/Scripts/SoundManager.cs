using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{

    [SerializeField] private AudioSource homeMusic;
    [SerializeField] private AudioSource game1Music;
    [SerializeField] private AudioSource successSound;
    [SerializeField] private AudioSource cheeringSound;
    [SerializeField] private AudioSource starSound;
    [SerializeField] private AudioSource wipMusic;
    [SerializeField] private AudioSource natureSounds;
    [SerializeField] private AudioSource plopSound;

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

    public void playWIPMusic()
    {
        wipMusic.Play();
        natureSounds.Play();
        actualMusic = wipMusic;
    }

    public void stopActualMusic()
    {
        actualMusic.Stop();
        natureSounds.Stop();
    }

    public void playSuccessSound()
    {
        successSound.Play();
    }

    public void playCheeringSound()
    {
        cheeringSound.Play();
    }

    public void playStarSound()
    {
        starSound.Play();
    }

    public void playPlopSound()
    {
        plopSound.Play();
    }

}
