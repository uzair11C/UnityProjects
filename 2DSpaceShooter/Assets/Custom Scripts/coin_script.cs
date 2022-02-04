using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class coin_script : MonoBehaviour
{
    public GameObject player;

    public static int high_score;

    public static int current_score = 0;

    private float bound_y = -5.0f;

    // Update is called once per frame
    void Update()
    {
        transform.Translate(0, -Time.deltaTime * 10, 0);
        transform.position = Vector3.MoveTowards(transform.position, player.transform.position, Time.deltaTime * 5);

        if (transform.position.y < bound_y)
        {
            Destroy(this.gameObject);
        }
    }
}
