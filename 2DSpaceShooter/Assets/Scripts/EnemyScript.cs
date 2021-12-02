using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyScript : MonoBehaviour
{
    public float speed = 7f;
    public float rotate_speed = 50f;

    private Rigidbody2D rb;

    private Animator anim;

    public bool canRotate;
    public bool canShoot;
    //private bool canMove = true;

    public float bound_y = -11f;
    //public Transform attack_point;
    //public GameObject enemy_bullet;


    void Awake()
    {
        anim= this.GetComponent<Animator>();
    }

    void Start()
    {
        rb = this.GetComponent<Rigidbody2D>();
        if(canRotate)
        {
            if(Random.Range(0 , 2) > 0)
            {
                rotate_speed = Random.Range(rotate_speed , rotate_speed + 20f);
                rotate_speed *= -1f;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        Move();
        RotateEnemy();
    }

    void Move()
    {

        var vector3 = new Vector3(0f, -speed * Time.deltaTime,0f);
        rb.velocity = vector3;

        if(rb.transform.position.y > bound_y)
        {
            gameObject.SetActive(false);
        }
    }

    void RotateEnemy()
    {
        if(canRotate)
        {
            transform.Rotate(new Vector3(0f , 0f , rotate_speed * Time.deltaTime), Space.World);
        }
    }
}
