using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOver : MonoBehaviour
{
    public void restart()
    {
        SceneManager.LoadScene("MainGameplay");
    }
    
}
