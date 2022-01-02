using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class collision : MonoBehaviour
{
    public GameObject explosion;

    private void OnTriggerEnter2D(Collider2D other)
    {
        if(other.gameObject.tag == "Circle")
        {
            GameObject exp = Instantiate(explosion) as GameObject;
            exp.transform.position = transform.position;
            Destroy(other.gameObject);
            this.gameObject.SetActive(false);
            SceneManager.LoadScene("DefeatScene");
        }
    }
}
