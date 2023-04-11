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
    private float beat; //beat of the music

    private float timer = 0; //timer to know when to spawn a new cube depending on the beat



    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (GameObject.FindGameObjectsWithTag("PoseObject").Length < 1)
        {
            Transform spawnPoint = points[Random.Range(0, 1)];
            
            GameObject hitObject = Instantiate(hitObjects[Random.Range(0, 6)], spawnPoint);
            hitObject.transform.localPosition = new Vector3(0f, 1f, 0f);

            timer -= beat;
        }
        timer += Time.deltaTime;
    }
}
