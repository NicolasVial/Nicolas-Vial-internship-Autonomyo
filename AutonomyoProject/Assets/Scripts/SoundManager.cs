using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// The following script manages all the musics and sounds in the game. 
/// Other classes need to call a function from this class to obtain the wanted sound/music.
/// </summary>

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
    [SerializeField] private AudioSource storyV3ENG1;
    [SerializeField] private AudioSource storyV3ENG2;
    [SerializeField] private AudioSource storyV4ENG1;
    [SerializeField] private AudioSource storyV4ENG2;
    [SerializeField] private AudioSource storyV5ENG1;
    [SerializeField] private AudioSource storyV5ENG2;
    [SerializeField] private AudioSource storyV6ENG1;
    [SerializeField] private AudioSource storyV6ENG2;
    [SerializeField] private AudioSource storyV7ENG1;
    [SerializeField] private AudioSource storyV7ENG2;
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
    [SerializeField] private AudioSource introMenuEng1;
    [SerializeField] private AudioSource introMenuEng2;
    [SerializeField] private AudioSource introMenuEng3;

    private AudioSource actualMusic;
    private AudioSource lastVoiceHeard;

    /// <summary>
    /// Start method is called before the first frame update and is used to setup what is needed at the start of the App.
    /// </summary>
    void Start()
    {
        actualMusic = homeMusic;
    }

    /// <summary>
    /// This method plays the home music.
    /// </summary>
    public void playHomeMusic()
    {
        homeMusic.Play();
        actualMusic = homeMusic;
        wipMusic.Stop();
    }

    /// <summary>
    /// This method plays the dance game music.
    /// </summary>
    public void playGame1Music()
    {
        game1Music.Play();
        actualMusic = game1Music;
    }

    /// <summary>
    /// This method plays the Story game music.
    /// </summary>
    public void playWIPMusic()
    {
        wipMusic.Play();
        natureSounds.Play();
    }

    /// <summary>
    /// This method stops the music which is running.
    /// </summary>
    public void stopActualMusic()
    {
        if(actualMusic != null)
        {
            actualMusic.Stop();
        }
        natureSounds.Stop();
    }

    /// <summary>
    /// This method plays the success sound.
    /// </summary>
    public void playSuccessSound()
    {
        successSound.Play();
    }

    /// <summary>
    /// This method plays the cheering sound.
    /// </summary>
    public void playCheeringSound()
    {
        cheeringSound.Play();
    }

    /// <summary>
    /// This method plays the star sound.
    /// </summary>
    public void playStarSound()
    {
        starSound.Play();
    }

    /// <summary>
    /// This method plays the plop sound.
    /// </summary>
    public void playPlopSound()
    {
        plopSound.Play();
    }

    /// <summary>
    /// This method plays the intro avatar voice.
    /// </summary>
    public void playIntroAvatarVoice()
    {
        storyV1ENG1.Play();
        lastVoiceHeard = storyV1ENG1;
    }

    /// <summary>
    /// This method plays the story 1_1 avatar voice.
    /// </summary>
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

    /// <summary>
    /// This method plays the story 2_1 avatar voice.
    /// </summary>
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

    /// <summary>
    /// This method plays the story 2_2 avatar voice.
    /// </summary>
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

    /// <summary>
    /// This method plays the story 3_1 avatar voice.
    /// </summary>
    public void playStoryV3_1()
    {
        if (menu.language == 0)
        {
            storyV3ENG1.Play();
            lastVoiceHeard = storyV3ENG1;
        }
        else
        {
            storyV3FR1.Play();
            lastVoiceHeard = storyV3FR1;
        }
    }

    /// <summary>
    /// This method plays the story 3_2 avatar voice.
    /// </summary>
    public void playStoryV3_2()
    {
        if (menu.language == 0)
        {
            storyV3ENG2.Play();
            lastVoiceHeard = storyV3ENG2;
        }
        else
        {
            storyV3FR2.Play();
            lastVoiceHeard = storyV3FR2;
        }
    }

    /// <summary>
    /// This method plays the story 4_1 avatar voice.
    /// </summary>
    public void playStoryV4_1()
    {
        if (menu.language == 0)
        {
            storyV4ENG1.Play();
            lastVoiceHeard = storyV4ENG1;
        }
        else
        {
            storyV4FR1.Play();
            lastVoiceHeard = storyV4FR1;
        }
    }

    /// <summary>
    /// This method plays the story 4_2 avatar voice.
    /// </summary>
    public void playStoryV4_2()
    {
        if (menu.language == 0)
        {
            storyV4ENG2.Play();
            lastVoiceHeard = storyV4ENG2;
        }
        else
        {
            storyV4FR2.Play();
            lastVoiceHeard = storyV4FR2;
        }
    }

    /// <summary>
    /// This method plays the story 5_1 avatar voice.
    /// </summary>
    public void playStoryV5_1()
    {
        if (menu.language == 0)
        {
            storyV5ENG1.Play();
            lastVoiceHeard = storyV5ENG1;
        }
        else
        {
            storyV5FR1.Play();
            lastVoiceHeard = storyV5FR1;
        }
    }

    /// <summary>
    /// This method plays the story 5_2 avatar voice.
    /// </summary>
    public void playStoryV5_2()
    {
        if (menu.language == 0)
        {
            storyV5ENG2.Play();
            lastVoiceHeard = storyV5ENG2;
        }
        else
        {
            storyV5FR2.Play();
            lastVoiceHeard = storyV5FR2;
        }
    }

    /// <summary>
    /// This method plays the story 6_1 avatar voice.
    /// </summary>
    public void playStoryV6_1()
    {
        if (menu.language == 0)
        {
            storyV6ENG1.Play();
            lastVoiceHeard = storyV6ENG1;
        }
        else
        {
            storyV6FR1.Play();
            lastVoiceHeard = storyV6FR1;
        }
    }

    /// <summary>
    /// This method plays the story 6_2 avatar voice.
    /// </summary>
    public void playStoryV6_2()
    {
        if (menu.language == 0)
        {
            storyV6ENG2.Play();
            lastVoiceHeard = storyV6ENG2;
        }
        else
        {
            storyV6FR2.Play();
            lastVoiceHeard = storyV6FR2;
        }
    }

    /// <summary>
    /// This method plays the story 7_1 avatar voice.
    /// </summary>
    public void playStoryV7_1()
    {
        if (menu.language == 0)
        {
            storyV7ENG1.Play();
            lastVoiceHeard = storyV7ENG1;
        }
        else
        {
            storyV7FR1.Play();
            lastVoiceHeard = storyV7FR1;
        }
    }

    /// <summary>
    /// This method plays the story 7_2 avatar voice.
    /// </summary>
    public void playStoryV7_2()
    {
        if (menu.language == 0)
        {
            storyV7ENG2.Play();
            lastVoiceHeard = storyV7ENG2;
        }
        else
        {
            storyV7FR2.Play();
            lastVoiceHeard = storyV7FR2;
        }
    }

    /// <summary>
    /// This method plays the intro menu voice 1.
    /// </summary>
    public void playIntroMenu1()
    {
        if (menu.language == 0)
        {
            introMenuEng1.Play();
            lastVoiceHeard = introMenuEng1;
        }
        else
        {
            introMenuFR1.Play();
            lastVoiceHeard = introMenuFR1;
        }
    }

    /// <summary>
    /// This method plays the intro menu voice 2.
    /// </summary>
    public void playIntroMenu2()
    {
        if (menu.language == 0)
        {
            introMenuEng2.Play();
            lastVoiceHeard = introMenuEng2;
        }
        else
        {
            introMenuFR1.Stop();
            introMenuFR2.Play();
            lastVoiceHeard = introMenuFR2;
        }
    }

    /// <summary>
    /// This method plays the intro menu voice 3.
    /// </summary>
    public void playIntroMenu3()
    {
        if (menu.language == 0)
        {
            introMenuEng2.Play();
            lastVoiceHeard = introMenuEng2;
        }
        else
        {
            introMenuFR2.Stop();
            introMenuFR3.Play();
            lastVoiceHeard = introMenuFR3;
        }
    }

    /// <summary>
    /// This method toggles the story music.
    /// </summary>
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

    /// <summary>
    /// This method repeats last voice.
    /// </summary>
    public void repeatVoice()
    {
        if(lastVoiceHeard != null)
        {
            lastVoiceHeard.Stop();
            lastVoiceHeard.Play();
        }
    }

}
