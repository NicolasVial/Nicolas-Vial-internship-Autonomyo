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
        if (timer > beat)
        {
            Transform spawnPoint = points[Random.Range(0, 2)];
            if(spawnPoint.localPosition.z > 0)
            {
                GameObject hitObject = Instantiate(hitObjects[0], spawnPoint);
                hitObject.transform.localPosition = Vector3.zero;
                //hitObject.transform.Rotate(transform.right, Random.Range(0, 4) * 90);
            }
            else
            {
                GameObject hitObject = Instantiate(hitObjects[1], spawnPoint);
                hitObject.transform.localPosition = Vector3.zero;
                //hitObject.transform.Rotate(transform.right, Random.Range(0, 4) * 90);
            }

            timer -= beat;
        }
        timer += Time.deltaTime;
    }
}
