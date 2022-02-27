using UnityEngine;
using EasyInput.Core;

public class KnifeScript : MonoBehaviour
{
    //ButtonClick button;

    [SerializeField]
    private Vector2 throwForce;

    //knife shouldn't be controlled by the player when it's inactive
    private bool isActive = true;

    private Rigidbody2D rb;
    private BoxCollider2D knifeCollider;

    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        knifeCollider = GetComponent<BoxCollider2D>();
    }

    void Update()
    {
        
    }

    public void throwKnife(ButtonClick button)
    {
        if (isActive)
        {

            rb.AddForce(throwForce, ForceMode2D.Impulse);

            rb.gravityScale = 1;
            //TODO: Decrement number of available knives
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        //we don't even want to detect collisions when the knife isn't active
        if (!isActive)
            return;

        //if the knife happens to be active (1st collision), deactivate it
        isActive = false;

        //collision with a log
        if (collision.collider.tag == "Log")
        {
            //stop the knife
            rb.velocity = new Vector2(0, 0);
            //this will automatically inherit rotation of the new parent (log)
            rb.bodyType = RigidbodyType2D.Kinematic;
            transform.SetParent(collision.collider.transform);

            //move the collider away from the blade which is stuck in the log
            knifeCollider.offset = new Vector2(knifeCollider.offset.x, -0.5f);
            knifeCollider.size = new Vector2(knifeCollider.size.x, 2.0f);

            //TODO: Spawn another knife
        }
        //collision with another knife
        else if (collision.collider.tag == "Knife")
        {
            //start rapidly moving downwards
            rb.velocity = new Vector2(rb.velocity.x, -2);
            //TODO: Game Over
        }
    }
}
