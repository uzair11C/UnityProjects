using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Manager : MonoBehaviour
{
    public Callers[] callers;

    public Text answer;

    [SerializeField]
    private GameObject answer_button;

    [SerializeField]
    private GameObject decline_button;

    [SerializeField]
    private Text c_score;

    [SerializeField]
    private Text timer;

    public Text caller;

    private static int current_score;
    public static int high_score;

    [SerializeField]
    private float ans_time;

    void Start()
    {
        current_score = 0;
        high_score = PlayerPrefs.GetInt("HighScore", 0);
        StartCoroutine(transition());
    }

    private Callers currentCaller;

    void getRandomCaller()
    {
        
        timer.text = "" + ans_time +"s";
        answer_button.SetActive(true);
        decline_button.SetActive(true);

        int getRandomIndex = Random.Range(0, callers.Length);
        currentCaller = callers[getRandomIndex];
        caller.text = currentCaller.caller_type;
    }

    void Update()
    {
        c_score.text = "" + current_score;
        
        if (caller.text != "")
        {
            timer.text = "" + Mathf.Round(ans_time) + "s";
            ans_time -= 1 * Time.deltaTime;
        }

        if (ans_time < 0)
        {
            SceneManager.LoadScene("GameOver");
        }
    }

    IEnumerator transition()
    {
        caller.text = "";
        answer_button.SetActive(false);
        decline_button.SetActive(false);        
        timer.text = "";

        yield return new WaitForSeconds(Random.Range(2,5));

        answer.text = "";
        timer.text = "";

        getRandomCaller();
    }

    public void answer_true()
    {
        if (currentCaller.answerable)
        {
            answer.text = "Correct!";

            current_score++;

            if (current_score > PlayerPrefs.GetInt("HighScore", 0))
            {
                PlayerPrefs.SetInt("HighScore", current_score);
                high_score = current_score;
                ans_time = ans_time - 2.0f;
            }

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

            current_score++;

            if (current_score > PlayerPrefs.GetInt("HighScore", 0))
            {
                PlayerPrefs.SetInt("HighScore", current_score);
                high_score = current_score;
                ans_time = ans_time - 2.0f;
            }

            StartCoroutine(transition());
        }
        else
        {
            answer.text = "Wrong!";
            SceneManager.LoadScene("GameOver");
        }
    }
}