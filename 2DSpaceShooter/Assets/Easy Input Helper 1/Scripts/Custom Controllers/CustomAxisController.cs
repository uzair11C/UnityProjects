using UnityEngine;
using UnityEngine.Events;
using System.Collections;
using EasyInput.Core;
using System;
using System.Collections.Generic;

namespace EasyInput.StandardControllers
{

    [AddComponentMenu("EasyInputHelper/Custom Controllers/CustomAxisController")]
    public class CustomAxisController : MonoBehaviour
    {
        public EasyInputConstants.PLAYER_NUMBER player = EasyInputConstants.PLAYER_NUMBER.Player1;

        //events
        [System.Serializable] public class AxisHandler : UnityEvent<ControllerAxis> { }
        [SerializeField]
        public AxisHandler onLeftStick;
        [SerializeField]
        public AxisHandler onRightStick;
        [SerializeField]
        public AxisHandler onDpad;
        [SerializeField]
        public AxisHandler onLeftTrigger;
        [SerializeField]
        public AxisHandler onRightTrigger;



        void OnEnable()
        {
            EasyInputHelper.On_LeftStick += localLeftStick;
            EasyInputHelper.On_RightStick += localRightStick;
            EasyInputHelper.On_Dpad += localDpad;
            EasyInputHelper.On_LeftTrigger += localLeftTrigger;
            EasyInputHelper.On_RightTrigger += localRightTrigger;

        }

        void OnDestroy()
        {
            EasyInputHelper.On_LeftStick -= localLeftStick;
            EasyInputHelper.On_RightStick -= localRightStick;
            EasyInputHelper.On_Dpad -= localDpad;
            EasyInputHelper.On_LeftTrigger -= localLeftTrigger;
            EasyInputHelper.On_RightTrigger -= localRightTrigger;
        }

        // Update is called once per frame
        void Update()
        {
        }

        void localLeftStick(ControllerAxis axis)
        {
            if (axis.player == player || player == EasyInputConstants.PLAYER_NUMBER.Any)
                onLeftStick.Invoke(axis);
        }

        void localRightStick(ControllerAxis axis)
        {
            if (axis.player == player || player == EasyInputConstants.PLAYER_NUMBER.Any)
                onRightStick.Invoke(axis);
        }

        void localDpad(ControllerAxis axis)
        {
            if (axis.player == player || player == EasyInputConstants.PLAYER_NUMBER.Any)
                onDpad.Invoke(axis);
        }

        void localLeftTrigger(ControllerAxis axis)
        {
            if (axis.player == player || player == EasyInputConstants.PLAYER_NUMBER.Any)
                onLeftTrigger.Invoke(axis);
        }

        void localRightTrigger(ControllerAxis axis)
        {
            if (axis.player == player || player == EasyInputConstants.PLAYER_NUMBER.Any)
                onRightTrigger.Invoke(axis);
        }




    }

}

