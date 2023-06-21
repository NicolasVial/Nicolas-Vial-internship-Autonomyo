using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    // Start is called before the first frame update
    void Start()
    {
        possiblePositions.AddRange(easySpawnPoints);
    }

    // Update is called once per frame
    void Update()
    {
        //Always add a new target when the old one is destroyed
        if (FindObjectsOfType(typeof(BeatHandsHitObject)).Length < 1 && isPlaying)
        {
            SpawnNewTarget();
        }
    }

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
