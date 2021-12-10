using UnityEngine;
using System.Collections;
using EasyInput.Core;
using UnityEngine.SceneManagement;

namespace EasyInput.Misc
{

    [AddComponentMenu("EasyInputHelper/Miscellaneous/ExampleNavigation")]
    public class ExampleNavigation : MonoBehaviour
    {

        public void button1Submit()
        {
            SceneManager.LoadScene("accelerometerSiriRemoteExample");
        }

        public void button2Submit()
        {
            SceneManager.LoadScene("controlsExample");
        }

        public void button3Submit()
        {
            SceneManager.LoadScene("firstPersonSiriRemoteExample");
        }

        public void button4Submit()
        {
            SceneManager.LoadScene("GuiNavigationExample");
        }

        public void button5Submit()
        {
            SceneManager.LoadScene("mFiControllerEventsDiagnosticExample");
        }

        public void button6Submit()
        {
            SceneManager.LoadScene("siriRemoteEventsDiagnosticExample");
        }

        public void button7Submit()
        {
            SceneManager.LoadScene("motionEventsDiagnosticExample");
        }

        public void button8Submit()
        {
            SceneManager.LoadScene("bowlingExample");
        }

    }
}