﻿using UnityEngine;
using UnityEngine.Events;
using System.Collections;
using EasyInput.Core;
using System;
using System.Collections.Generic;

namespace EasyInput.StandardControllers
{

    [AddComponentMenu("EasyInputHelper/Custom Controllers/CustomButtonClickController")]
    public class CustomButtonClickController : MonoBehaviour
    {
        public EasyInputConstants.PLAYER_NUMBER player = EasyInputConstants.PLAYER_NUMBER.Player1;
        public EasyInputConstants.CONTROLLER_BUTTON myButton = EasyInputConstants.CONTROLLER_BUTTON.AButton;

        //events
        [System.Serializable] public class ButtonHandler : UnityEvent<ButtonClick> { }
        [SerializeField]
        public ButtonHandler onClickStart;
        [SerializeField]
        public ButtonHandler onClickEnd;
        [SerializeField]
        public ButtonHandler onClick;
        [SerializeField]
        public ButtonHandler onQuickClickEnd;
        [SerializeField]
        public ButtonHandler onDoubleClickEnd;
        [SerializeField]
        public ButtonHandler onLongClickStart;
        [SerializeField]
        public ButtonHandler onLongClickEnd;
        [SerializeField]
        public ButtonHandler onLongClick;



        void OnEnable()
        {
            EasyInputHelper.On_Click += localButtonClick;
            EasyInputHelper.On_ClickEnd += localButtonClickEnd;
            EasyInputHelper.On_ClickStart += localButtonClickStart;
            EasyInputHelper.On_DoubleClickEnd += localButtonDoubleClickEnd;
            EasyInputHelper.On_LongClick += localButtonLongClick;
            EasyInputHelper.On_LongClickEnd += localButtonLongClickEnd;
            EasyInputHelper.On_LongClickStart += localButtonLongClickStart;
            EasyInputHelper.On_QuickClickEnd += localButtonQuickClickEnd;
        }

        void OnDestroy()
        {
            EasyInputHelper.On_Click -= localButtonClick;
            EasyInputHelper.On_ClickEnd -= localButtonClickEnd;
            EasyInputHelper.On_ClickStart -= localButtonClickStart;
            EasyInputHelper.On_DoubleClickEnd -= localButtonDoubleClickEnd;
            EasyInputHelper.On_LongClick -= localButtonLongClick;
            EasyInputHelper.On_LongClickEnd -= localButtonLongClickEnd;
            EasyInputHelper.On_LongClickStart -= localButtonLongClickStart;
            EasyInputHelper.On_QuickClickEnd -= localButtonQuickClickEnd;
        }

        // Update is called once per frame
        void Update()
        {
        }

        void localButtonClick(ButtonClick button)
        {
            if (button.button == myButton && (button.player == player || player == EasyInputConstants.PLAYER_NUMBER.Any))
                onClick.Invoke(button);
        }

        void localButtonClickStart(ButtonClick button)
        {
            if (button.button == myButton && (button.player == player || player == EasyInputConstants.PLAYER_NUMBER.Any))
                onClickStart.Invoke(button);
        }

        void localButtonClickEnd(ButtonClick button)
        {
            if (button.button == myButton && (button.player == player || player == EasyInputConstants.PLAYER_NUMBER.Any))
                onClickEnd.Invoke(button);
        }

        void localButtonQuickClickEnd(ButtonClick button)
        {
            if (button.button == myButton && (button.player == player || player == EasyInputConstants.PLAYER_NUMBER.Any))
                onQuickClickEnd.Invoke(button);
        }

        void localButtonDoubleClickEnd(ButtonClick button)
        {
            if (button.button == myButton && (button.player == player || player == EasyInputConstants.PLAYER_NUMBER.Any))
                onDoubleClickEnd.Invoke(button);
        }

        void localButtonLongClick(ButtonClick button)
        {
            if (button.button == myButton && (button.player == player || player == EasyInputConstants.PLAYER_NUMBER.Any))
                onLongClick.Invoke(button);
        }

        void localButtonLongClickStart(ButtonClick button)
        {
            if (button.button == myButton && (button.player == player || player == EasyInputConstants.PLAYER_NUMBER.Any))
                onLongClickStart.Invoke(button);
        }

        void localButtonLongClickEnd(ButtonClick button)
        {
            if (button.button == myButton && (button.player == player || player == EasyInputConstants.PLAYER_NUMBER.Any))
                onLongClickEnd.Invoke(button);
        }
    }

}

