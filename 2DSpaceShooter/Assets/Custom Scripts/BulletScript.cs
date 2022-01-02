using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletScript : MonoBehaviour
{
    public float speed = 5f;
    private Rigidbody2D rb;
    private float bound_y = 5.0f;

    public static int score = 0;

    void Start()
    {
        rb = this.GetComponent<Rigidbody2D>();
        rb.velocity = new Vector2(0, speed);
    }

    void Update()
    {
        if(transform.position.y > bound_y)
        {
            Destroy(this.gameObject);
        }
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "Circle" && asteroid.health == 0)
        {
            Destroy(other.gameObject);
            score++;
            Destroy(this.gameObject);
        }
    }
}
