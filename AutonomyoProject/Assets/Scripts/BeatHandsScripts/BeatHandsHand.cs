using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BeatHandsHand : MonoBehaviour
{

    [SerializeField] private SoundManager soundManager;
    [SerializeField] private string color;
    [SerializeField] private BeatHandsGameLogic gameLogic;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(other.gameObject.name);
        if (other.gameObject.GetComponent<BeatHandsHitObject>() != null && other.tag == this.tag)
        {
            soundManager.playSuccessSound();
            gameLogic.totalScore += 1;

            Destroy(other.gameObject);
        }
    }
}
