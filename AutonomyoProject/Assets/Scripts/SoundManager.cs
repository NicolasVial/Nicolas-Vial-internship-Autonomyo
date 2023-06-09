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
    [SerializeField] private AudioSource introAvatarVoice;
    [SerializeField] private AudioSource bryanVoice1;
    [SerializeField] private AudioSource bryanVoice2;

    private AudioSource actualMusic;
    private AudioSource lastVoiceHeard;

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
        wipMusic.Stop();
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
    }

    public void stopActualMusic()
    {
        if(actualMusic != null)
        {
            actualMusic.Stop();
        }
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

    public void playIntroAvatarVoice()
    {
        introAvatarVoice.Play();
        lastVoiceHeard = introAvatarVoice;
    }

    public void playBryanVoice1()
    {
        bryanVoice1.Play();
        lastVoiceHeard = bryanVoice1;
    }

    public void playBryanVoice2()
    {
        bryanVoice2.Play();
        lastVoiceHeard = bryanVoice2;
    }

    public void toggleWIPMusic()
    {
        if (wipMusic.isPlaying)
        {
            wipMusic.Pause();
            natureSounds.Play();
            actualMusic = null;
        }
        else
        {
            wipMusic.UnPause();
            natureSounds.Stop();
        }
    }

    public void repeatVoice()
    {
        if(lastVoiceHeard != null && !lastVoiceHeard.isPlaying)
        {
            lastVoiceHeard.Play();
        }
    }

}
