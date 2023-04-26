using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/*
  Project: Autonomyo
  Author: Nicolas Vial
  Date: 26.04.2023
  Summary: The following script contains the logic of the spawner of the positions to imitate in the Dance Game.
           Whenever a position is cleared b the player, a new one is spawned.
*/

public class Spawner : MonoBehaviour
{
    [SerializeField] private GameObject straightPose;
    [SerializeField] private GameObject[] mirroredPoses; //poses to imitate mirrored
    [SerializeField] private GameObject[] notMirroredPoses; //poses to imitate not mirrored

    [SerializeField]
    private Transform[] points; //spawner locations

    [SerializeField]
    private float timeAfterSpawn; //spawner locations


    private bool goBackStraight = true; //used to know if we should go back to straight position
    private GameObject GOToActivate; //The gameObject of the pose helpers  (blue pose on avatar

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
                GameObject GO = Instantiate(mirroredPoses[Random.Range(1, 5)], spawnPoint);
                GO.transform.localPosition = new Vector3(0f, 0f, 0f);
            }
            else
            {
                GameObject GO = Instantiate(notMirroredPoses[Random.Range(1, 5)], spawnPoint);
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
}
