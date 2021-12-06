using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class collision : MonoBehaviour
{
    private void OnCollisionEnter2D(Collision2D other)
    {
        if(other.gameObject.tag == "Circle")
        {
            Debug.Log("Collided!");
            Destroy(other.gameObject);
            this.gameObject.SetActive(false);
        }
    }


}
