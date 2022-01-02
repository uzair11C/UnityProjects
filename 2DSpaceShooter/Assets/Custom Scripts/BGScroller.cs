using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGScroller : MonoBehaviour
{

    public float scrollSpeed = 0.45f;

    private MeshRenderer mesh_renderer;

    private float y_scroll;

    public Material[] materials;

    int num;

    void Start()
    {
        num = Random.Range(0, materials.Length);
    }

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
        MeshRenderer mesh = GetComponent<MeshRenderer>();
        mesh.material = materials[num];
        //StartCoroutine(material_change(3));
    }

    //IEnumerator material_change(int sec)
    //{
    //    yield return new WaitForSeconds(sec);
    //    MeshRenderer mesh = GetComponent<MeshRenderer>();
    //    mesh.material = materials[num];
    //}
}
