using UnityEngine;
using UnityEngine.UI;

public class Manager : MonoBehaviour
{
    public Callers[] callers;

    public Text caller;

    public Text answer;
    void Start()
    {
        getRandomCaller();
    }

    private Callers currentCaller;

    void getRandomCaller()
    {
        int getRandomIndex = Random.Range(0, callers.Length);
        currentCaller = callers[getRandomIndex];
        Debug.Log(currentCaller.caller_type);
        caller.text = currentCaller.caller_type;
    }

    public void answer_true()
    {
        if (currentCaller.answerable)
        {
            Debug.Log("Correct!");
            answer.text = "Correct!";
        }
        else
        {
            Debug.Log("Wrong!");
            answer.text = "Wrong!";
        }
    }    
    
    public void answer_false()
    {
        if (!currentCaller.answerable)
        {
            Debug.Log("Correct!");
            answer.text = "Correct!";
        }
        else
        {
            Debug.Log("Wrong!");
            answer.text = "Wrong!";
        }
    }
}
