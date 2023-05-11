using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 26.04.2023
  Summary: The following script contains the logic of the spawner of the positions to imitate in the Dance Game.
           Whenever a position is cleared by the player, a new one is spawned.
*/

public class Spawner : MonoBehaviour
{
    [SerializeField] private Game1Logic gameLogic;
    [SerializeField] private OpponentLogic opponent;
    [SerializeField] private GameObject straightPose;
    [SerializeField] private GameObject[] mirroredPoses; //poses to imitate mirrored
    [SerializeField] private GameObject[] notMirroredPoses; //poses to imitate not mirrored

    [SerializeField]
    private Transform[] points; //spawner locations

    [SerializeField]
    private float timeAfterSpawn; //spawner locations


    private bool goBackStraight = true; //used to know if we should go back to straight position
    private GameObject GOToActivate; //The gameObject of the pose helpers  (blue pose on avatar
    private List<GameObject> possiblePositions = new List<GameObject>();
    private List<GameObject> possiblePositionsNotMirrored = new List<GameObject>();

    public bool isMirror = true;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //Always add a new pose when the old one is finished
        if (GameObject.FindGameObjectsWithTag("PoseObject").Length < 1)
        {
            SpawnNewPose();
        }
    }

    //Spawns a new pose to imitate
    private void SpawnNewPose()
    {
        Transform spawnPoint = points[Random.Range(0, 1)];

        if (goBackStraight)
        {
            GameObject GO = Instantiate(straightPose, spawnPoint);
            GO.transform.localPosition = new Vector3(0f, 0f, 0f);
            goBackStraight = false;
        }
        else
        {
            if (isMirror)
            {
                GameObject GO = Instantiate(possiblePositions[Random.Range(0, possiblePositions.Count)], spawnPoint);
                GO.transform.localPosition = new Vector3(0f, 0f, 0f);
            }
            else
            {
                GameObject GO = Instantiate(possiblePositionsNotMirrored[Random.Range(0, possiblePositionsNotMirrored.Count)], spawnPoint);
                GO.transform.localPosition = new Vector3(0f, 0f, 0f);
            }
            
            goBackStraight = true;
        }

        GOToActivate = GameObject.FindGameObjectsWithTag("Helpers")[0];
        GOToActivate.SetActive(false);

        Invoke(nameof(SpawnAfter), timeAfterSpawn);
    }

    //Activates the pose helpers after timeAfterSpawn seconds
    private void SpawnAfter()
    {
        GOToActivate.SetActive(true);
    }

    public void SetDifficulty(int difficulty)
    {
        possiblePositions.Clear();
        possiblePositionsNotMirrored.Clear();
        switch (difficulty)
        {
            case 0:
                possiblePositions.Add(mirroredPoses[0]);
                possiblePositions.Add(mirroredPoses[2]);
                possiblePositionsNotMirrored.Add(notMirroredPoses[0]);
                possiblePositionsNotMirrored.Add(notMirroredPoses[2]);
                break;
            case 1:
                possiblePositions.Add(mirroredPoses[0]);
                possiblePositions.Add(mirroredPoses[1]);
                possiblePositions.Add(mirroredPoses[2]);
                possiblePositions.Add(mirroredPoses[3]);
                possiblePositionsNotMirrored.Add(notMirroredPoses[0]);
                possiblePositionsNotMirrored.Add(notMirroredPoses[1]);
                possiblePositionsNotMirrored.Add(notMirroredPoses[2]);
                possiblePositionsNotMirrored.Add(notMirroredPoses[3]);
                break;
            case 2:
                possiblePositions.Add(mirroredPoses[0]);
                possiblePositions.Add(mirroredPoses[1]);
                possiblePositions.Add(mirroredPoses[2]);
                possiblePositions.Add(mirroredPoses[3]);
                possiblePositions.Add(mirroredPoses[4]);
                possiblePositions.Add(mirroredPoses[5]);
                possiblePositionsNotMirrored.Add(notMirroredPoses[0]);
                possiblePositionsNotMirrored.Add(notMirroredPoses[1]);
                possiblePositionsNotMirrored.Add(notMirroredPoses[2]);
                possiblePositionsNotMirrored.Add(notMirroredPoses[3]);
                possiblePositionsNotMirrored.Add(notMirroredPoses[4]);
                possiblePositionsNotMirrored.Add(notMirroredPoses[5]);
                break;
            default:
                break;
        }
    }
}
