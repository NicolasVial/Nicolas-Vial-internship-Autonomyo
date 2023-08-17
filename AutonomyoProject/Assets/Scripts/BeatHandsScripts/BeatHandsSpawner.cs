using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 16.08.2023
*/

/// <summary>
/// This class represents the target spawner for the BeatHands game.
/// </summary>

public class BeatHandsSpawner : MonoBehaviour
{
    [SerializeField] private SoundManager soundManager;
    [SerializeField] private GameObject[] hitObjects;
    [SerializeField] private Transform[] easySpawnPoints;
    [SerializeField] private Transform[] normalSpawnPoints;
    [SerializeField] private Transform[] hardSpawnPoints;
    [SerializeField] private Transform[] superHardSpawnPoints;
    [SerializeField] private Transform lookAtPoint;

    private List<Transform> possiblePositions = new List<Transform>();

    public bool isPlaying = false;

    /// <summary>
    /// Start method is called before the first frame updatena dis used to setup what is needed at the start of the App.
    /// </summary>
    void Start()
    {
        possiblePositions.AddRange(easySpawnPoints);
    }

    /// <summary>
    /// Update method is called once per frame and is used to update what needs to be updated each frame.
    /// </summary>
    void Update()
    {
        //Always add a new target when the old one is destroyed
        if (FindObjectsOfType(typeof(BeatHandsHitObject)).Length < 1 && isPlaying)
        {
            SpawnNewTarget();
        }
    }

    /// <summary>
    /// This method spawns a new target.
    /// </summary>
    private void SpawnNewTarget()
    {
        Transform spawnPoint = possiblePositions[Random.Range(0, possiblePositions.Count-1)];

        if(spawnPoint.gameObject.tag == "blue")
        {
            GameObject GO = Instantiate(hitObjects[0], spawnPoint);
            GO.transform.localPosition = new Vector3(0f, 0f, 0f);
            GO.transform.LookAt(lookAtPoint);
        }
        else
        {
            GameObject GO = Instantiate(hitObjects[1], spawnPoint);
            GO.transform.localPosition = new Vector3(0f, 0f, 0f);
            GO.transform.LookAt(lookAtPoint);
        }
        soundManager.playPlopSound();
    }

    /// <summary>
    /// This method is used to set the difficulty.
    /// An harder difficulty means more different spawn points and spawn points being further away from the player.
    /// </summary>
    /// <param name="difficulty">The difficulty to set to the game.</param>
    public void SetDifficulty(int difficulty)
    {
        possiblePositions.Clear();
        switch (difficulty)
        {
            case 0:
                possiblePositions.AddRange(easySpawnPoints);
                break;
            case 1:
                possiblePositions.AddRange(easySpawnPoints);
                possiblePositions.AddRange(normalSpawnPoints);
                break;
            case 2:
                possiblePositions.AddRange(easySpawnPoints);
                possiblePositions.AddRange(normalSpawnPoints);
                possiblePositions.AddRange(hardSpawnPoints);
                break;
            case 3:
                possiblePositions.AddRange(easySpawnPoints);
                possiblePositions.AddRange(normalSpawnPoints);
                possiblePositions.AddRange(hardSpawnPoints);
                possiblePositions.AddRange(superHardSpawnPoints);
                break;
            default:
                break;
        }
    }
}
