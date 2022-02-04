using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class collision : MonoBehaviour
{
    void Start()
    {
        coin_script.high_score = PlayerPrefs.GetInt("HighScore" , 0);
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if(other.gameObject.tag == "Circle")
        {
            Destroy(other.gameObject);
            this.gameObject.SetActive(false);

            SceneManager.LoadScene("DefeatScene");
        }

        if(other.gameObject.tag == "Coin")
        {
            Destroy(other.gameObject);
            coin_script.current_score += 1;
            if(coin_script.current_score > PlayerPrefs.GetInt("HighScore" , 0))
            {
                PlayerPrefs.SetInt("HighScore", coin_script.current_score);
                coin_script.high_score = coin_script.current_score;
                Debug.Log(coin_script.current_score);
            }
            
        }
    }
}