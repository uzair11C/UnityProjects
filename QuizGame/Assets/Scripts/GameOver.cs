using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameOver : MonoBehaviour
{
    [SerializeField]
    private Text h_score;

    void Start()
    {
        h_score.text = "High Score: " + Manager.high_score;
    }

    public void restart()
    {
        SceneManager.LoadScene("MainGameplay");
    }
}
