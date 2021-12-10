using UnityEngine;
using System;
using System.Collections;
using EasyInput.Core;
using UnityEngine.SceneManagement;

namespace EasyInput.Misc
{

    [AddComponentMenu("EasyInputHelper/Miscellaneous/ExitToMaster")]
    public class ExitToMaster : MonoBehaviour
    {

        void OnEnable()
        {
            EasyInputHelper.On_ClickStart += localClickStart;
        }

        void OnDestroy()
        {
            EasyInputHelper.On_Click -= localClickStart;
        }

        void localClickStart(ButtonClick button)
        {
            if (button.button == EasyInputConstants.CONTROLLER_BUTTON.MenuButton)
            {
                SceneManager.LoadScene("MasterExample");
            }
        }

    }
}