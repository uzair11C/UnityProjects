using UnityEngine;
using System.Collections;
using EasyInput.Core;

namespace EasyInput.Misc
{

    [AddComponentMenu("EasyInputHelper/Miscellaneous/ChangeColor")]
    public class ChangeColor : MonoBehaviour
    {

        MeshRenderer myRenderer;
        Material myMaterial;
        Color originalColor;

        void Start()
        {
            myRenderer = this.GetComponent<MeshRenderer>();
            myMaterial = myRenderer.material;
            originalColor = myMaterial.color;
        }

        public void changeColor(ButtonClick button)
        {
            myMaterial.color = Color.green;
        }

        public void changeColorBack(ButtonClick button)
        {
            myMaterial.color = originalColor;
        }

        public void toggleColor()
        {
            if (myMaterial.color == originalColor)
                myMaterial.color = Color.green;
            else
                myMaterial.color = originalColor;
        }
    }
}