using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 22.06.2023
  Summary: The following script manages all the musics and sounds in the game. 
           Other classes simply need to call a function from this class to obtain the wanted sound/music.
*/

public class SoundManager : MonoBehaviour
{
    [SerializeField] private MenuLogic menu;
    [SerializeField] private AudioSource homeMusic;
    [SerializeField] private AudioSource game1Music;
    [SerializeField] private AudioSource successSound;
    [SerializeField] private AudioSource cheeringSound;
    [SerializeField] private AudioSource starSound;
    [SerializeField] private AudioSource wipMusic;
    [SerializeField] private AudioSource natureSounds;
    [SerializeField] private AudioSource plopSound;
    [SerializeField] private AudioSource storyV1ENG1;
    [SerializeField] private AudioSource storyV1FR1;
    [SerializeField] private AudioSource storyV2ENG1;
    [SerializeField] private AudioSource storyV2ENG2;
    [SerializeField] private AudioSource storyV2FR1;
    [SerializeField] private AudioSource storyV2FR2;
    [SerializeField] private AudioSource storyV3FR1;
    [SerializeField] private AudioSource storyV3FR2;
    [SerializeField] private AudioSource storyV4FR1;
    [SerializeField] private AudioSource storyV4FR2;
    [SerializeField] private AudioSource storyV5FR1;
    [SerializeField] private AudioSource storyV5FR2;
    [SerializeField] private AudioSource storyV6FR1;
    [SerializeField] private AudioSource storyV6FR2;
    [SerializeField] private AudioSource storyV7FR1;
    [SerializeField] private AudioSource storyV7FR2;
    [SerializeField] private AudioSource introMenuFR1;
    [SerializeField] private AudioSource introMenuFR2;
    [SerializeField] private AudioSource introMenuFR3;

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
        storyV1ENG1.Play();
        lastVoiceHeard = storyV1ENG1;
    }

    public void playStoryV1_1()
    {
        if(menu.language == 0)
        {
            storyV1ENG1.Play();
            lastVoiceHeard = storyV1ENG1;
        }
        else
        {
            storyV1FR1.Play();
            lastVoiceHeard = storyV1FR1;
        }
    }

    public void playStoryV2_1()
    {
        if (menu.language == 0)
        {
            storyV2ENG1.Play();
            lastVoiceHeard = storyV2ENG1;
        }
        else
        {
            storyV2FR1.Play();
            lastVoiceHeard = storyV2FR1;
        }
    }

    public void playStoryV2_2()
    {
        if (menu.language == 0)
        {
            storyV2ENG2.Play();
            lastVoiceHeard = storyV2ENG2;
        }
        else
        {
            storyV2FR2.Play();
            lastVoiceHeard = storyV2FR2;
        }
    }

    public void playStoryV3_1()
    {
        if (menu.language == 0)
        {

        }
        else
        {
            storyV3FR1.Play();
            lastVoiceHeard = storyV3FR1;
        }
    }

    public void playStoryV3_2()
    {
        if (menu.language == 0)
        {

        }
        else
        {
            storyV3FR2.Play();
            lastVoiceHeard = storyV3FR2;
        }
    }

    public void playStoryV4_1()
    {
        if (menu.language == 0)
        {

        }
        else
        {
            storyV4FR1.Play();
            lastVoiceHeard = storyV4FR1;
        }
    }

    public void playStoryV4_2()
    {
        if (menu.language == 0)
        {

        }
        else
        {
            storyV4FR2.Play();
            lastVoiceHeard = storyV4FR2;
        }
    }

    public void playStoryV5_1()
    {
        if (menu.language == 0)
        {

        }
        else
        {
            storyV5FR1.Play();
            lastVoiceHeard = storyV5FR1;
        }
    }

    public void playStoryV5_2()
    {
        if (menu.language == 0)
        {

        }
        else
        {
            storyV5FR2.Play();
            lastVoiceHeard = storyV5FR2;
        }
    }

    public void playStoryV6_1()
    {
        if (menu.language == 0)
        {

        }
        else
        {
            storyV6FR1.Play();
            lastVoiceHeard = storyV6FR1;
        }
    }

    public void playStoryV6_2()
    {
        if (menu.language == 0)
        {

        }
        else
        {
            storyV6FR2.Play();
            lastVoiceHeard = storyV6FR2;
        }
    }

    public void playStoryV7_1()
    {
        if (menu.language == 0)
        {

        }
        else
        {
            storyV7FR1.Play();
            lastVoiceHeard = storyV7FR1;
        }
    }

    public void playStoryV7_2()
    {
        if (menu.language == 0)
        {

        }
        else
        {
            storyV7FR2.Play();
            lastVoiceHeard = storyV7FR2;
        }
    }

    public void playIntroMenuFR1()
    {
        if (menu.language == 0)
        {

        }
        else
        {
            introMenuFR1.Play();
            lastVoiceHeard = introMenuFR1;
        }
    }

    public void playIntroMenuFR2()
    {
        if (menu.language == 0)
        {

        }
        else
        {
            introMenuFR1.Stop();
            introMenuFR2.Play();
            lastVoiceHeard = introMenuFR2;
        }
    }

    public void playIntroMenuFR3()
    {
        if (menu.language == 0)
        {

        }
        else
        {
            introMenuFR2.Stop();
            introMenuFR3.Play();
            lastVoiceHeard = introMenuFR3;
        }
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
        if(lastVoiceHeard != null)
        {
            lastVoiceHeard.Stop();
            lastVoiceHeard.Play();
        }
    }

}
