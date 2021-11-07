﻿using UnityEngine;
using System.Collections;

namespace EasyInput.Core
{
    public class ControllerAxis
    {
        public EasyInputConstants.PLAYER_NUMBER player;
        public EasyInputConstants.CONTROLLER_AXIS axis;
        public Vector2 axisValue; //x and y are always populated (if it only has one component both will be equal)
    }
}
