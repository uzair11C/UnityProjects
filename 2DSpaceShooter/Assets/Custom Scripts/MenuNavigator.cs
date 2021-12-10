using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuNavigator : MonoBehaviour
{
    public void play_game()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void exit_game()
    {
        Application.Quit();
    }

    public void Restart()
    {
        SceneManager.LoadScene("Gameplay");
    }
}
