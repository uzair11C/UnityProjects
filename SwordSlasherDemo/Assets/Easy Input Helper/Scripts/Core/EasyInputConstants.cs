using UnityEngine;
using System.Collections;
using System;
namespace EasyInput.Core
{
    public static class EasyInputConstants
    {
        //enums
        public enum PLAYER_NUMBER { Player1 = 0, Player2 = 1, Player3 = 2, Any = 3 };
        public enum CONTROLLER_AXIS { LeftStick = 0, RightStick = 1, DPad = 2, LeftTrigger = 3, RightTrigger = 4 };
        public enum CONTROLLER_BUTTON { AButton = 0, BButton = 1, XButton = 2, YButton = 3, LeftBumper = 4, RightBumper = 5, MenuButton = 6 };
        public enum COMPONENT_AXIS { XAxis = 0, YAxis = 1, ZAxis = 2 };
        public enum TOUCH_TYPE { Miscellaneous = 0, QuickPress = 1, LongPress = 2, DoublePress = 3, Swipe = 4};
        public enum CLICK_TYPE { Miscellaneous = 0, QuickPress = 1, LongPress = 2, DoublePress = 3};
        public enum SWIPE_TYPE { None = 0, Left = 1, Right = 2, Up = 3, Down = 4};
        public enum AXIS { XAxis = 0, YAxis = 1, ZAxis = 2, NegativeXAxis = 3, NegativeYAxis = 4, NegativeZAxis = 5, None = 6 };
        public enum ACTION_TYPE { Position = 0, Rotation = 1, LocalPosition = 2, LocalRotation = 3, LocalScale = 4 };
        public enum REMOTE_ORIENTATION { TouchpadTop = 0, TouchpadLeft = 1, TouchpadRight = 2};
        public enum INPUT_MODULE_BUTTON_MODE {FireAtRepeatRate = 0, FireOnceAtButtonUp = 1, FireOnceAtButtonDown = 2 };
        public enum DPAD_MODE {RegisterAlways = 0, RegisterOnlyWhenNotClicking = 1 };


        //constants
        public static Vector2 NOT_TOUCHING = new Vector2(-99f,-99f);
        public static float NO_TIMESTAMP = -99f;
        public static Vector3 NOT_VALID = new Vector3(-999f, -999f, -999f);
        public static float MINUMUM_NOISE_THRESHOLD = .02f;
        public static int CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO = 3;
        public const string JOYSTICKNAME_REMOTE = "by Remote";

        //Not absolutely necessary but I don't want to generate UnNecessary Garbage as immutable strings change
        public const string P1_LEFTSTICK_HORIZONTAL = "ATV_P1_LeftStick_Horizontal";
        public const string P1_LEFTSTICK_VERTICAL = "ATV_P1_LeftStick_Vertical";
        public const string P1_RIGHTSTICK_HORIZONTAL = "ATV_P1_RightStick_Horizontal";
        public const string P1_RIGHTSTICK_VERTICAL = "ATV_P1_RightStick_Vertical";
        public const string P1_DPAD_HORIZONTAL = "ATV_P1_Dpad_Horizontal";
        public const string P1_DPAD_VERTICAL = "ATV_P1_Dpad_Vertical";
        public const string P1_LEFTTRIGGER = "ATV_P1_LeftTrigger";
        public const string P1_RIGHTTRIGGER = "ATV_P1_RightTrigger";

        public const string P2_LEFTSTICK_HORIZONTAL = "ATV_P2_LeftStick_Horizontal";
        public const string P2_LEFTSTICK_VERTICAL = "ATV_P2_LeftStick_Vertical";
        public const string P2_RIGHTSTICK_HORIZONTAL = "ATV_P2_RightStick_Horizontal";
        public const string P2_RIGHTSTICK_VERTICAL = "ATV_P2_RightStick_Vertical";
        public const string P2_DPAD_HORIZONTAL = "ATV_P2_Dpad_Horizontal";
        public const string P2_DPAD_VERTICAL = "ATV_P2_Dpad_Vertical";
        public const string P2_LEFTTRIGGER = "ATV_P2_LeftTrigger";
        public const string P2_RIGHTTRIGGER = "ATV_P2_RightTrigger";

        public const string P3_LEFTSTICK_HORIZONTAL = "ATV_P3_LeftStick_Horizontal";
        public const string P3_LEFTSTICK_VERTICAL = "ATV_P3_LeftStick_Vertical";
        public const string P3_RIGHTSTICK_HORIZONTAL = "ATV_P3_RightStick_Horizontal";
        public const string P3_RIGHTSTICK_VERTICAL = "ATV_P3_RightStick_Vertical";
        public const string P3_DPAD_HORIZONTAL = "ATV_P3_Dpad_Horizontal";
        public const string P3_DPAD_VERTICAL = "ATV_P3_Dpad_Vertical";
        public const string P3_LEFTTRIGGER = "ATV_P3_LeftTrigger";
        public const string P3_RIGHTTRIGGER = "ATV_P3_RightTrigger";

        public const string P1_REMOTE_HORIZONTAL = "ATV_P1_Remote_Horizontal";
        public const string P1_REMOTE_VERTICAL = "ATV_P1_Remote_Vertical";

        public const string P2_REMOTE_HORIZONTAL = "ATV_P2_Remote_Horizontal";
        public const string P2_REMOTE_VERTICAL = "ATV_P2_Remote_Vertical";

        public const string P3_REMOTE_HORIZONTAL = "ATV_P3_Remote_Horizontal";
        public const string P3_REMOTE_VERTICAL = "ATV_P3_Remote_Vertical";


    }
}
