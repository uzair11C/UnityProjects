using UnityEngine;
using UnityEngine.UI;

public class high_score : MonoBehaviour
{
    public Text high_score_text;

    // Start is called before the first frame update
    void Start()
    {
        high_score_text.text = "" + coin_script.high_score;
    }

    // Update is called once per frame
    void Update()
    { 
        
    }
}
