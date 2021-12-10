using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class collision : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D other)
    {
        if(other.gameObject.tag == "Circle")
        {
            Debug.Log("Collided!");
            Destroy(other.gameObject);
            this.gameObject.SetActive(false);
            SceneManager.LoadScene("DefeatScene");
        }
    }
}
