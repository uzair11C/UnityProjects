using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnBlocks : MonoBehaviour
{
    public GameObject greenCube;

    public float delayTimer = 0.5f;
    private float currentTime;
    private bool canSpawn;

    // Start is called before the first frame update
    void Start()
    {
        currentTime = delayTimer;
    }

    // Update is called once per frame
    void Update()
    {
        cubeSpawn();
    }
    //InvokeRepeating("spawn", 1f, 3f);

    public void cubeSpawn()
    {
        delayTimer += Time.deltaTime;

        if (delayTimer > currentTime)
        {
            canSpawn = true;
        }

        if (canSpawn)
        {
            canSpawn = false;
            delayTimer = 0f;
            Spawn();
        }
    }

    void Spawn()
    {
        Instantiate(greenCube, this.transform.position, Quaternion.identity);
    }
}
