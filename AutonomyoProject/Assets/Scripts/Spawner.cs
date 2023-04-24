using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{

    [SerializeField]
    private GameObject[] hitObjects; //objects to be hit prefabs

    [SerializeField]
    private Transform[] points; //spawner locations

    [SerializeField]
    private float timeAfterSpawn; //spawner locations


    private bool goBackStraight = true; //used to know if we should go back to straight position
    private bool done = false; // used to know if we are done adding a new pose
    private GameObject GOToActivate; //The gameObject of the pose helpers  (blue pose on avatar)


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //Always add a new pose when the old one is finished
        if (GameObject.FindGameObjectsWithTag("PoseObject").Length < 1 && !done)
        {
            SpawnNewPose();
            done = true;
        }
    }

    //Spawns a new pose to imitate
    private void SpawnNewPose()
    {
        Transform spawnPoint = points[Random.Range(0, 1)];

        if (goBackStraight)
        {
            GameObject hitObject = Instantiate(hitObjects[0], spawnPoint);
            hitObject.transform.localPosition = new Vector3(0f, 0f, 0f);
            goBackStraight = false;
        }
        else
        {
            GameObject hitObject = Instantiate(hitObjects[Random.Range(1, 5)], spawnPoint);
            hitObject.transform.localPosition = new Vector3(0f, 0f, 0f);
            goBackStraight = true;
        }

        GOToActivate = GameObject.FindGameObjectsWithTag("Helpers")[0];
        GOToActivate.SetActive(false);
        done = false;

        Invoke(nameof(SpawnAfter), timeAfterSpawn);
    }

    //Activates the pose helpers after timeAfterSpawn seconds
    private void SpawnAfter()
    {
        GOToActivate.SetActive(true);
    }
}
