using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class asteroidDeployer : MonoBehaviour
{
    public GameObject astrPref;

    public float respawn_time = 0.5f;

    //private float bound_y = -6.0f;

    // Start is called before the first frame update
    void Start()
    {
        //bound_y = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height,Camera.main.transform.position.z));
        StartCoroutine(wave());
    }

    void SpawnEnemy()
    {
        GameObject a = Instantiate(astrPref);
        a.transform.position = new Vector2(Random.Range(-7,7), Random.Range(5, 6));
    }

 void Update()
    {

    }

    IEnumerator wave()
    {
        while(true)
        {
            yield return new WaitForSeconds(respawn_time);
            SpawnEnemy();
        }
    }
}
