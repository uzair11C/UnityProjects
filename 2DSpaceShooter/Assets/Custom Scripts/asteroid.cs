using UnityEngine;
using UnityEngine.UI;

public class asteroid : MonoBehaviour
{
    public float speed = 2.5f;

    public TextMesh hit_counter;
    private int count = 1;

    public static int health;

    private Rigidbody2D rb;

    private float bound_y = -6.5f;

    void Start()
    {
        rb = this.GetComponent<Rigidbody2D>();
        hit_counter.text = "" + Random.Range(count, 5);
        health = int.Parse(hit_counter.text);

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

    private void OnTriggerEnter2D(Collider2D bullet)
    {
        if (bullet.gameObject.tag == "Bullet" && health >= 0)
        {
            health--;
            hit_counter.text = "" + health;
        }
    }
}
