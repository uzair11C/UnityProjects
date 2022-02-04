using UnityEngine;
using System.Collections;

namespace EasyInput.Core
{

    public class ButtonClick
    {
        public EasyInputConstants.PLAYER_NUMBER player;
        public EasyInputConstants.CONTROLLER_BUTTON button;
        public float currentClickBeginTimestamp = EasyInputConstants.NO_TIMESTAMP;
        public float previousClickBeginTimestamp = EasyInputConstants.NO_TIMESTAMP;
        public bool currentlyPressed;
        public bool previousFramePressed;
        public EasyInputConstants.CLICK_TYPE clickType;
    }
}
