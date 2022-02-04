using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeMover : MonoBehaviour
{
    public float speed = -7.0f;
    public GameObject rb;

    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(new Vector3(0, 0, speed * Time.deltaTime));
        if (transform.position.z <= -11f)
        {
            Destroy(rb);
        }
    }
}
