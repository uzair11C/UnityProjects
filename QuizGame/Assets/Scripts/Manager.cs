using UnityEngine;
using UnityEngine.UI;

public class Manager : MonoBehaviour
{
    public Callers[] callers;

    public Text caller;

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
}
