using UnityEngine;
using UnityEngine.UI;

public class scoreScript : MonoBehaviour
{

    public Text score_text;

    // Start is called before the first frame update
    void Start()
    {
        score_text.text = "Score: " + 0;
    }

    // Update is called once per frame
    void Update()
    {
        score_text.text = "Score: " + BulletScript.score;
    }
}
