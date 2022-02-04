using UnityEngine;
using UnityEngine.UI;

public class current_coins : MonoBehaviour
{
    public Text score_text;

    //public TextMesh high_score_text;

    // Start is called before the first frame update
    void Start()
    {
        score_text.text = "Coins: " + 0;
        //high_score_text.text =  "" + coin_script.high_score;
    }

    // Update is called once per frame
    void Update()
    {
        score_text.text = "Coins: " + coin_script.current_score;
    }
}
