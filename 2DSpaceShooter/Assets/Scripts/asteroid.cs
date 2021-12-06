using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class asteroid : MonoBehaviour
{
    public float speed = 5.0f;

    private Rigidbody2D rb;

    private float bound_y = -6.5f;

    void Start()
    {
        rb = this.GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {

        rb.velocity = new Vector2(0, -speed );

        if (transform.position.y < bound_y)
        {
            Destroy(this.gameObject);
        }
    }
}
