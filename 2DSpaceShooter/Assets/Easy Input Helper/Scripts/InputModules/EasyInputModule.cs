using System;
using EasyInput.Core;

namespace UnityEngine.EventSystems
{
    [AddComponentMenu("EasyInputHelper/Input Modules/Easy Input Module")]
    public class EasyInputModule : BaseInputModule
    {

        protected EasyInputModule()
        { }
        public float repeatEventRate = .25f;
        public EasyInputConstants.INPUT_MODULE_BUTTON_MODE buttonMode = EasyInputConstants.INPUT_MODULE_BUTTON_MODE.FireAtRepeatRate;
        [Range(.0001f, 1f)]
        public float scrollAmount = .01f;
        [Range(1,100)]
        public int scrollSpeedMultiplier = 3;


        //runtime variables
        Vector2[] leftStick = new Vector2[3];
        Vector2[] dpad = new Vector2[3];
        InputTouch touchpad = new InputTouch();
        bool submit;
        bool cancel;
        bool submitForOneFrame;
        bool cancelForOneFrame;
        int leftStepsFired = 1;
        int rightStepsFired = 1;
        int upStepsFired = 1;
        int downStepsFired = 1;
        DateTime lastEvent = DateTime.UtcNow;
        UI.Scrollbar currentScrollbar;
        UI.Slider currentSlider;


        protected override void OnEnable()
        {
            base.OnEnable();
            EasyInputHelper.On_ClickStart += localClickStart;
            EasyInputHelper.On_ClickEnd += localClickEnd;
            EasyInputHelper.On_LeftStick += localLeftStick;
            EasyInputHelper.On_Dpad += localDpad;
            EasyInputHelper.On_Touch += localTouch;
            EasyInputHelper.On_TouchEnd += localTouchEnd;
        }

        protected override void OnDestroy()
        {
            EasyInputHelper.On_ClickStart -= localClickStart;
            EasyInputHelper.On_ClickEnd -= localClickEnd;
            EasyInputHelper.On_LeftStick -= localLeftStick;
            EasyInputHelper.On_Dpad -= localDpad;
            EasyInputHelper.On_Touch -= localTouch;
            EasyInputHelper.On_TouchEnd -= localTouchEnd;
            base.OnDestroy();
        }


        public override void UpdateModule()
        {
        }

        public override bool IsModuleSupported()
        {
            //if we place an easy input module obviously we want to support it
            return true;
        }

        public override bool ShouldActivateModule()
        {
            if (!base.ShouldActivateModule())
                return false;

            var shouldActivate = false;

            //submit
            shouldActivate |= submit;

            //cancel
            shouldActivate |= cancel;

            //leftstick
            shouldActivate |= (leftStick[0] != Vector2.zero);
            shouldActivate |= (leftStick[1] != Vector2.zero);
            shouldActivate |= (leftStick[2] != Vector2.zero);

            //dpad
            shouldActivate |= (dpad[0] != Vector2.zero);
            shouldActivate |= (dpad[1] != Vector2.zero);
            shouldActivate |= (dpad[2] != Vector2.zero);

            //touchpad
            shouldActivate |= (touchpad.currentTouchPosition != EasyInputConstants.NOT_TOUCHING);

            return shouldActivate;
        }

        public override void ActivateModule()
        {
            base.ActivateModule();

            var toSelect = eventSystem.currentSelectedGameObject;
            if (toSelect == null)
                toSelect = eventSystem.firstSelectedGameObject;

            eventSystem.SetSelectedGameObject(null, GetBaseEventData());
            eventSystem.SetSelectedGameObject(toSelect, GetBaseEventData());
        }

        public override void DeactivateModule()
        {
            base.DeactivateModule();
            eventSystem.SetSelectedGameObject(null, GetBaseEventData());
        }

        public override void Process()
        {
            bool usedEvent = SendUpdateEventToSelectedObject();

            if (eventSystem.sendNavigationEvents)
            {
                if (!usedEvent)
                    usedEvent |= SendTouchEventToSelectedObject();

                if (!usedEvent)
                    usedEvent |= SendMoveEventToSelectedObject();

                if (!usedEvent)
                    SendSubmitEventToSelectedObject();
            }

        }

        /// <summary>
        /// Process submit keys.
        /// </summary>
        private bool SendSubmitEventToSelectedObject()
        {
            if (eventSystem.currentSelectedGameObject == null)
                return false;
            if ((DateTime.UtcNow - lastEvent).TotalSeconds < repeatEventRate)
                return false;

            var data = GetBaseEventData();
            if (submit)
            {
                lastEvent = DateTime.UtcNow;
                ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.submitHandler);
                if (submitForOneFrame)
                {
                    submit = false;
                    submitForOneFrame = false;
                }
            }

            if (cancel)
            {
                lastEvent = DateTime.UtcNow;
                ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.cancelHandler);
                if (cancelForOneFrame)
                {
                    cancel = false;
                    cancelForOneFrame = false;
                }
            }
            return data.used;
        }

        /// <summary>
        /// Process move navigation (touch)
        /// </summary>
        private bool SendTouchEventToSelectedObject()
        {
            Vector2 movement = Vector2.zero;
            Vector2 movementThreshold = Vector2.zero;

            if (EventSystem.current.currentSelectedGameObject.GetComponent<UI.Scrollbar>() != null)
            {
                currentScrollbar = EventSystem.current.currentSelectedGameObject.GetComponent<UI.Scrollbar>();
                currentSlider = null;
                if (currentScrollbar.direction == UI.Scrollbar.Direction.LeftToRight || currentScrollbar.direction == UI.Scrollbar.Direction.RightToLeft)
                {
                    movementThreshold.x = scrollAmount * 4f ;
                    movementThreshold.y = EasyInputHelper.mInstance.requiredSwipeLength;
                }
                else
                {
                    movementThreshold.x = EasyInputHelper.mInstance.requiredSwipeLength;
                    movementThreshold.y = scrollAmount * 4f;
                }
            }
            else if (EventSystem.current.currentSelectedGameObject.GetComponent<UI.ScrollRect>() != null)
            {
                if (EventSystem.current.currentSelectedGameObject.GetComponent<UI.ScrollRect>().verticalScrollbar != null
                    && EventSystem.current.currentSelectedGameObject.GetComponent<UI.ScrollRect>().horizontalScrollbar != null)
                {
                    //if we have both scrollbars we'd have an issue with controllers. directions would be taken up by scrolling
                    //and no directions would be left to navigate to other UI objects. When this is the case we scroll the
                    //vertical only since it's much more common
                    currentScrollbar = EventSystem.current.currentSelectedGameObject.GetComponent<UI.ScrollRect>().verticalScrollbar;
                }
                else if (EventSystem.current.currentSelectedGameObject.GetComponent<UI.ScrollRect>().verticalScrollbar != null)
                    currentScrollbar = EventSystem.current.currentSelectedGameObject.GetComponent<UI.ScrollRect>().verticalScrollbar;
                else if (EventSystem.current.currentSelectedGameObject.GetComponent<UI.ScrollRect>().horizontalScrollbar != null)
                    currentScrollbar = EventSystem.current.currentSelectedGameObject.GetComponent<UI.ScrollRect>().horizontalScrollbar;
                else
                    currentScrollbar = null;


                currentSlider = null;

                if (currentScrollbar != null)
                {
                    if (currentScrollbar.direction == UI.Scrollbar.Direction.LeftToRight || currentScrollbar.direction == UI.Scrollbar.Direction.RightToLeft)
                    {
                        movementThreshold.x = scrollAmount * 4f;
                        movementThreshold.y = EasyInputHelper.mInstance.requiredSwipeLength;
                    }
                    else
                    {
                        movementThreshold.x = EasyInputHelper.mInstance.requiredSwipeLength;
                        movementThreshold.y = scrollAmount * 4f;
                    }
                }
            }
            else if (EventSystem.current.currentSelectedGameObject.GetComponent<UI.Slider>() != null)
            {
                currentSlider = EventSystem.current.currentSelectedGameObject.GetComponent<UI.Slider>();
                currentScrollbar = null;
                if (currentSlider.direction == UI.Slider.Direction.LeftToRight || currentSlider.direction == UI.Slider.Direction.RightToLeft)
                {
                    movementThreshold.x = scrollAmount * 4f;
                    movementThreshold.y = EasyInputHelper.mInstance.requiredSwipeLength;
                }
                else
                {
                    movementThreshold.x = EasyInputHelper.mInstance.requiredSwipeLength;
                    movementThreshold.y = scrollAmount * 4f;
                }
            }
            else
            {
                currentScrollbar = null;
                currentSlider = null;
                movementThreshold.x = EasyInputHelper.mInstance.requiredSwipeLength;
                movementThreshold.y = EasyInputHelper.mInstance.requiredSwipeLength;
            }


            //touch (here we're simulating the nice Apple UI with swipe naviagtion)
            //we are essentially going to keep track of the touch and fire off a 1 value only when the swipe
            //threshold has been reached

            if (touchpad.currentTouchPosition != EasyInputConstants.NOT_TOUCHING)
            {
                movement = touchpad.currentTouchPosition - touchpad.originalTouchPosition;

                //horizontal
                if (movement.x > movementThreshold.x * rightStepsFired)
                {
                    movement.x = 1;
                    rightStepsFired++;

                    if (currentScrollbar != null || currentSlider != null)
                    {
                        movement.x = scrollSpeedMultiplier;
                        rightStepsFired += (scrollSpeedMultiplier - 1);
                    }

                }
                else if (movement.x < -movementThreshold.x * leftStepsFired)
                {
                    movement.x = -1;
                    leftStepsFired++;

                    if (currentScrollbar != null || currentSlider != null)
                    {
                        movement.x = -scrollSpeedMultiplier;
                        leftStepsFired += (scrollSpeedMultiplier - 1);
                    }
                }
                else
                {
                    movement.x = 0;
                }

                //vertical
                if (movement.y > movementThreshold.y * upStepsFired)
                {
                    movement.y = 1;
                    upStepsFired++;

                    if (currentScrollbar != null || currentSlider != null)
                    {
                        movement.y = scrollSpeedMultiplier;
                        upStepsFired += (scrollSpeedMultiplier - 1);
                    }
                }
                else if (movement.y < -movementThreshold.y * downStepsFired)
                {
                    movement.y = -1;
                    downStepsFired++;

                    if (currentScrollbar != null || currentSlider != null)
                    {
                        movement.y = -scrollSpeedMultiplier;
                        downStepsFired += (scrollSpeedMultiplier - 1);
                    }
                }
                else
                {
                    movement.y = 0;
                }


            }

            if (currentScrollbar != null)
            {
                if (currentScrollbar.direction == UI.Scrollbar.Direction.LeftToRight)
                {
                    currentScrollbar.value += scrollAmount * movement.x;
                    movement.x = 0;
                }
                else if (currentScrollbar.direction == UI.Scrollbar.Direction.RightToLeft)
                {
                    currentScrollbar.value += -scrollAmount * movement.x;
                    movement.x = 0;
                }
                else if (currentScrollbar.direction == UI.Scrollbar.Direction.TopToBottom)
                {
                    currentScrollbar.value += -scrollAmount * movement.y;
                    movement.y = 0;
                }
                else if (currentScrollbar.direction == UI.Scrollbar.Direction.BottomToTop)
                {
                    currentScrollbar.value += scrollAmount * movement.y;
                    movement.y = 0;
                }
            }
            if (currentSlider != null)
            {
                if (currentSlider.direction == UI.Slider.Direction.LeftToRight)
                {
                    currentSlider.value += scrollAmount * movement.x;
                    movement.x = 0;
                }
                else if (currentSlider.direction == UI.Slider.Direction.RightToLeft)
                {
                    currentSlider.value += -scrollAmount * movement.x;
                    movement.x = 0;
                }
                else if (currentSlider.direction == UI.Slider.Direction.TopToBottom)
                {
                    currentSlider.value += -scrollAmount * movement.y;
                    movement.y = 0;
                }
                else if (currentSlider.direction == UI.Slider.Direction.BottomToTop)
                {
                    currentSlider.value += scrollAmount * movement.y;
                    movement.y = 0;
                }
            }

            var axisEventData = GetAxisEventData(movement.x, movement.y, 0.6f);
            if (!Mathf.Approximately(axisEventData.moveVector.x, 0f)
                || !Mathf.Approximately(axisEventData.moveVector.y, 0f))
            {
                ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, axisEventData, ExecuteEvents.moveHandler);
            }
            return axisEventData.used;
        }

        /// <summary>
        /// Process move navigation (dpad or joystick)
        /// </summary>
        private bool SendMoveEventToSelectedObject()
        {
            if ((DateTime.UtcNow - lastEvent).TotalSeconds < repeatEventRate)
                return false;


            Vector2 movement = Vector2.zero;

            //left stick
            if (movement == Vector2.zero)
            {
                for (int i = 0; i < 2; i++)
                {
                    movement = leftStick[i];
                    if (movement != Vector2.zero)
                        break;
                }
            }

            //dpad (only if not populated yet)
            if (movement == Vector2.zero)
            {
                for (int i = 0; i < 2; i++)
                {
                    movement = dpad[i];
                    if (movement != Vector2.zero)
                        break;
                }
            }

            


            var axisEventData = GetAxisEventData(movement.x, movement.y, 0.6f);
            if (!Mathf.Approximately(axisEventData.moveVector.x, 0f)
                || !Mathf.Approximately(axisEventData.moveVector.y, 0f))
            {
                lastEvent = DateTime.UtcNow;
                ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, axisEventData, ExecuteEvents.moveHandler);
            }
            return axisEventData.used;
        }

        private bool SendUpdateEventToSelectedObject()
        {
            if (eventSystem.currentSelectedGameObject == null)
                return false;

            var data = GetBaseEventData();
            ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.updateSelectedHandler);
            return data.used;
        }

        void localClickStart (ButtonClick button)
        {
            if (buttonMode == EasyInputConstants.INPUT_MODULE_BUTTON_MODE.FireAtRepeatRate || buttonMode == EasyInputConstants.INPUT_MODULE_BUTTON_MODE.FireOnceAtButtonDown)
            {
                if (button.button == EasyInputConstants.CONTROLLER_BUTTON.AButton)
                {
                    submit = true;
                }
                if (button.button == EasyInputConstants.CONTROLLER_BUTTON.BButton || button.button == EasyInputConstants.CONTROLLER_BUTTON.XButton)
                {
                    cancel = true;
                }
            }
            
            //check if we should only do for one frame
            if (buttonMode == EasyInputConstants.INPUT_MODULE_BUTTON_MODE.FireOnceAtButtonDown)
            {
                if (button.button == EasyInputConstants.CONTROLLER_BUTTON.AButton)
                {
                    submitForOneFrame = true;
                }
                if (button.button == EasyInputConstants.CONTROLLER_BUTTON.BButton || button.button == EasyInputConstants.CONTROLLER_BUTTON.XButton)
                {
                    cancelForOneFrame = true;
                }
            }
        }

        void localClickEnd(ButtonClick button)
        {
            if (buttonMode == EasyInputConstants.INPUT_MODULE_BUTTON_MODE.FireAtRepeatRate || buttonMode == EasyInputConstants.INPUT_MODULE_BUTTON_MODE.FireOnceAtButtonDown)
            {
                if (button.button == EasyInputConstants.CONTROLLER_BUTTON.AButton)
                {
                    submit = false;
                }
                if (button.button == EasyInputConstants.CONTROLLER_BUTTON.BButton || button.button == EasyInputConstants.CONTROLLER_BUTTON.XButton)
                {
                    cancel = false;
                }
            }
            else
            {
                if (button.button == EasyInputConstants.CONTROLLER_BUTTON.AButton)
                {
                    submit = true;
                    submitForOneFrame = true;
                }
                if (button.button == EasyInputConstants.CONTROLLER_BUTTON.BButton || button.button == EasyInputConstants.CONTROLLER_BUTTON.XButton)
                {
                    cancel = true;
                    cancelForOneFrame = true;
                }
            }
        }

        void localLeftStick(ControllerAxis axis)
        {
            //first for the siri remote we don't want to recognize the left stick and instead use touch
#if !UNITY_EDITOR && UNITY_TVOS
            if (axis.player != EasyInputHelper.siriRemotePlayer)
            {
#endif
            leftStick[(int)axis.player] = axis.axisValue;
#if !UNITY_EDITOR && UNITY_TVOS
            }
#endif
        }
        void localDpad(ControllerAxis axis)
        {
            //first for the siri remote we don't want to recognize the dpad and instead use touch
#if !UNITY_EDITOR && UNITY_TVOS
            if (axis.player != EasyInputHelper.siriRemotePlayer)
            {
#endif
            dpad[(int)axis.player] = axis.axisValue;
#if !UNITY_EDITOR && UNITY_TVOS
        }
#endif

        }

        void localTouch(InputTouch touch)
        {
            touchpad = touch;
        }

        void localTouchEnd(InputTouch touch)
        {
            touchpad.currentTouchPosition = EasyInputConstants.NOT_TOUCHING;
            leftStepsFired = 1;
            rightStepsFired = 1;
            upStepsFired = 1;
            downStepsFired = 1;

        }


    }
}