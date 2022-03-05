using UnityEngine;
using UnityEngine.UI;

public class UI : MonoBehaviour
{
    [Header("Knife Count Display")] //header for organization purposes

    [SerializeField]
    private GameObject panel;

    [SerializeField]
    private GameObject icon;

    [SerializeField]
    private Color usedIconColor;

    //add a number of iconKnife children to panel
    public void SetInitialDisplayedKnifeCount(int count)
    {
        for (int i = 0; i < count; i++)
            Instantiate(icon, panel.transform);
    }

    //keeping track of the last icon representing an unthrown knife
    private int knifeIconIndexToChange = 0;

    //changing the color of the image to represent a thrown (used) knife
    public void DecrementDisplayedKnifeCount()
    {
        panel.transform.GetChild(knifeIconIndexToChange++)
            .GetComponent<Image>().color = usedIconColor;
    }
}
