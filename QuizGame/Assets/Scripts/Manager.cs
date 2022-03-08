using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Manager : MonoBehaviour
{
    public Callers[] callers;

    public Text caller;

    public Text answer;

    [SerializeField]
    private GameObject answer_button;

    [SerializeField]
    private GameObject decline_button;

    void Start()
    {
        //getRandomCaller();
        StartCoroutine(transition());
    }

    private Callers currentCaller;

    void getRandomCaller()
    {
        answer_button.SetActive(true);
        decline_button.SetActive(true);

        int getRandomIndex = Random.Range(0, callers.Length);
        currentCaller = callers[getRandomIndex];
        caller.text = currentCaller.caller_type;
    }

    IEnumerator transition()
    {
        caller.text = "";
        answer_button.SetActive(false);
        decline_button.SetActive(false);

        yield return new WaitForSeconds(2);

        answer.text = "";

        getRandomCaller();
    }

    public void answer_true()
    {
        if (currentCaller.answerable)
        {
            answer.text = "Correct!";
            StartCoroutine(transition());
        }
        else
        {
            answer.text = "Wrong!"; 
            SceneManager.LoadScene("GameOver");
        }
    }    
    
    public void answer_false()
    {
        if (!currentCaller.answerable)
        {
            answer.text = "Correct!";
            StartCoroutine(transition());
        }
        else
        {
            answer.text = "Wrong!";
            SceneManager.LoadScene("GameOver");
        }
    }
}
