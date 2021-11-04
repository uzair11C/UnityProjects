using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move : MonoBehaviour
{
    

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float v = Input.GetAxisRaw("Vertical");
        float h = Input.GetAxisRaw("Horizontal");

        transform.Translate(Vector2.right * Time.deltaTime * 9 * h);
        transform.Translate(Vector2.up * Time.deltaTime * 9 * v);
    }
}
