using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGScroller : MonoBehaviour
{

    public float scrollSpeed = 0.45f;

    private MeshRenderer mesh_renderer;

    private float y_scroll;

    void Awake()
    {
        mesh_renderer = GetComponent<MeshRenderer>();
    }

    void Scroll()
    {
        y_scroll = Time.time * scrollSpeed;

        Vector2 offset = new Vector2(0f, y_scroll);

        mesh_renderer.sharedMaterial.SetTextureOffset("_MainTex" , offset);
    }

    void Update()
    {
        Scroll();
    }
}
