﻿using UnityEngine;
using System.Collections;
using EasyInput.Core;
using System;

namespace EasyInput.StandardControllers
{

    [AddComponentMenu("EasyInputHelper/Standard Controllers/StandardTouchDpadController")]
    public class StandardTouchDpadController : MonoBehaviour
    {
        [Range(0f,1f)]
        public float deadZone = .2f;
        public EasyInputConstants.AXIS axisHorizontal = EasyInputConstants.AXIS.XAxis;
        public EasyInputConstants.AXIS axisVertical = EasyInputConstants.AXIS.YAxis;
        public EasyInputConstants.ACTION_TYPE action = EasyInputConstants.ACTION_TYPE.Position;
        public float sensitivity = 1f;
        public EasyInputConstants.DPAD_MODE dpadMode = EasyInputConstants.DPAD_MODE.RegisterAlways;

        //runtime variables
        Vector3 actionVector3;
        float horizontal;
        float vertical;
        bool isClicking = false;

        void OnEnable()
        {
            EasyInputHelper.On_Touch += localAxis;

            if (dpadMode == EasyInputConstants.DPAD_MODE.RegisterOnlyWhenNotClicking)
            {
                EasyInputHelper.On_ClickStart += localClickStart;
                EasyInputHelper.On_ClickEnd += localClickEnd;
            }
        }

        void OnDestroy()
        {
            EasyInputHelper.On_Touch -= localAxis;

            if (dpadMode == EasyInputConstants.DPAD_MODE.RegisterOnlyWhenNotClicking)
            {
                EasyInputHelper.On_ClickStart -= localClickStart;
                EasyInputHelper.On_ClickEnd -= localClickEnd;
            }
        }

        // Update is called once per frame
        void Update()
        {
        }

        void localAxis(InputTouch touch)
        {
            if (dpadMode == EasyInputConstants.DPAD_MODE.RegisterAlways || isClicking == false)
            {

                //check to see if we've exceeded the deadzone
                if (Mathf.Sqrt(Mathf.Pow(touch.currentTouchPosition.x, 2) + Mathf.Pow(touch.currentTouchPosition.y, 2)) > deadZone)
                {

                    horizontal = touch.currentTouchPosition.x * sensitivity * Time.deltaTime * 100f;
                    vertical = touch.currentTouchPosition.y * sensitivity * Time.deltaTime * 100f;
                }
                else
                {
                    horizontal = 0f;
                    vertical = 0f;
                }

                actionVector3 = EasyInputUtilities.getControllerVector3(horizontal, vertical, axisHorizontal, axisVertical);

                switch (action)
                {
                    case EasyInputConstants.ACTION_TYPE.Position:
                        transform.position += actionVector3;
                        break;
                    case EasyInputConstants.ACTION_TYPE.Rotation:
                        transform.Rotate(actionVector3, Space.World);
                        break;
                    case EasyInputConstants.ACTION_TYPE.LocalPosition:
                        transform.Translate(actionVector3);
                        break;
                    case EasyInputConstants.ACTION_TYPE.LocalRotation:
                        transform.Rotate(actionVector3);
                        break;
                    case EasyInputConstants.ACTION_TYPE.LocalScale:
                        transform.localScale += actionVector3;
                        break;
                    default:
                        Debug.Log("Invalid Action");
                        break;

                }
            }
        }

        void localClickStart(ButtonClick click)
        {
            if (click.button == EasyInputConstants.CONTROLLER_BUTTON.AButton)
            {
                isClicking = true;
            }
        }

        void localClickEnd(ButtonClick click)
        {
            if (click.button == EasyInputConstants.CONTROLLER_BUTTON.AButton)
            {
                isClicking = false;
            }
        }


    }

}

