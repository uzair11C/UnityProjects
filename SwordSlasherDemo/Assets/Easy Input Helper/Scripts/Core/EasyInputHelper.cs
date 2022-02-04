using UnityEngine;
using System.Collections;
using System;

namespace EasyInput.Core
{
    [AddComponentMenu("EasyInputHelper/Manager/EasyInputHelper")]
    public class EasyInputHelper : MonoBehaviour
    {

        //inspector

        [Tooltip("The maximum distance of movement to be considered for the quickpress, longpress, and doublepress")]
        public float maxPressLength = .1f;
        [Tooltip("The distance of movement to fire a swipe event. Only one event will be fired when you reach this distance")]
        public float requiredSwipeLength = .6f;
        [Tooltip("The longest you can hold in seconds and still be considered a quick press")]
        public float maxQuickTapTime = .2f;
        [Tooltip("The shortest amount of time in seconds that will be considered a long press")]
        public float minLongTapTime = 1f;
        [Tooltip("The longest double tap in seconds and still be considered a double press")]
        public float maxDoubleTapTime = .5f;
        [Tooltip("If its the title screen we'll allow exit to home. If not we can handle the menu button in game. This only works on physical Apple TV")]
        public bool titleScreen = false;
        public EasyInputConstants.REMOTE_ORIENTATION orientation = EasyInputConstants.REMOTE_ORIENTATION.TouchpadTop;

        [HideInInspector]
        public static EasyInputConstants.PLAYER_NUMBER siriRemotePlayer = EasyInputConstants.PLAYER_NUMBER.Player1;

        //instance
        public static EasyInputHelper mInstance;

        //delegates

        //touch

        //fired once on beginning of any kind of touch
        public delegate void onTouchStartHandler(InputTouch touch);

        //always fired when being touched
        public delegate void onTouchHandler(InputTouch touch);

        //fired once at end of any kind of touch
        public delegate void onTouchEndHandler(InputTouch touch);

        //fired once at the end of a quick touch only
        public delegate void quickTouchEndHandler(InputTouch touch);

        //fired once at the beginning of a long touch
        public delegate void longTouchStartHandler(InputTouch touch);

        //always fired during long touch
        public delegate void longTouchHandler(InputTouch touch);

        //fired once at end of long touch
        public delegate void longTouchEndHandler(InputTouch touch);

        //fired once at end of double touch
        public delegate void doubleTouchEndHandler(InputTouch touch);

        //fired once when a swipe is detected by traveling distance (fired when distance is reached)
        public delegate void swipeDistanceHandler(InputTouch touch);

        //buttons (controller or remote)
        public delegate void onClickStartHandler(ButtonClick button); //change this to a button class later
        public delegate void onClickHandler(ButtonClick button);
        public delegate void onClickEndHandler(ButtonClick button);
        public delegate void quickClickEndHandler(ButtonClick button);
        public delegate void longClickStartHandler(ButtonClick button);
        public delegate void longClickHandler(ButtonClick button);
        public delegate void longClickEndHandler(ButtonClick button);
        public delegate void doubleClickEndHandler(ButtonClick button);

        //axis (controller or remote)
        public delegate void onAxisHandler(ControllerAxis axis);

        //accelerometer
        public delegate void AccelerometerHandler(Vector3 acceleration);

        //gyro
        public delegate void GyroHandler(Vector3 gravity, Vector3 userAcceleration);

        //motion
        public delegate void MotionHandler(Motion motion);

        //events
        //touch
        public static event onTouchStartHandler On_TouchStart;
        public static event onTouchHandler On_Touch;
        public static event onTouchEndHandler On_TouchEnd;
        public static event quickTouchEndHandler On_QuickTouchEnd;
        public static event longTouchStartHandler On_LongTouchStart;
        public static event longTouchHandler On_LongTouch;
        public static event longTouchEndHandler On_LongTouchEnd;
        public static event doubleTouchEndHandler On_DoubleTouchEnd;
        public static event swipeDistanceHandler On_SwipeDetected;

        //buttons
        public static event onClickStartHandler On_ClickStart;
        public static event onClickHandler On_Click;
        public static event onClickEndHandler On_ClickEnd;
        public static event quickClickEndHandler On_QuickClickEnd;
        public static event longClickStartHandler On_LongClickStart;
        public static event longClickHandler On_LongClick;
        public static event longClickEndHandler On_LongClickEnd;
        public static event doubleClickEndHandler On_DoubleClickEnd;

        //axis
        public static event onAxisHandler On_LeftStick;
        public static event onAxisHandler On_RightStick;
        public static event onAxisHandler On_Dpad;
        public static event onAxisHandler On_LeftTrigger;
        public static event onAxisHandler On_RightTrigger;

        //motion
        public static event AccelerometerHandler On_Accelerometer;
        public static event GyroHandler On_Gyro;
        public static event MotionHandler On_Motion;

        //static reset
        public static void resetMotion()
        {
            mInstance.myMotion.lastResetTimestamp = Time.time;
            mInstance.myMotion.currentRelativePositionSinceReset = Vector3.zero;
            mInstance.myMotion.totalRotationRateSinceReset = Vector3.zero;
            mInstance.myMotion.totalVelocitySinceReset = Vector3.zero;
            mInstance.myMotion.currentOrientation = EasyInputConstants.NOT_VALID;
            mInstance.myMotion.lastFrameOrientation = EasyInputConstants.NOT_VALID;
            mInstance.myMotion.lastFrameSmoothedGravity = EasyInputConstants.NOT_VALID;
            mInstance.myMotion.lastFrameSmoothedUserAcceleration = EasyInputConstants.NOT_VALID;
            mInstance.myMotion.lastFrameRotationRate = EasyInputConstants.NOT_VALID;
            mInstance.myMotion.currentVelocity = Vector3.zero;
            mInstance.myMotion.lastFrameVelocity = Vector3.zero;
            mInstance.framesWithinThresholdX = 1;
            mInstance.framesWithinThresholdY = 1;
            mInstance.framesWithinThresholdZ = 1;
            mInstance.framesVelocitySameX = 1;
            mInstance.framesVelocitySameY = 1;
            mInstance.framesVelocitySameZ = 1;

        }


        //runtime variables
        Touch touch;
        bool swipeAllowed;
        bool currentlyTouching;
        bool previousTouching;
        string touchAxisHorizontal = "";
        string touchAxisVertical = "";
        Vector3 temp, temp1;
        bool startupLock = false;
        DateTime startup;
        bool exitHomeLock = false;
        int framesWithinThresholdX = 1, framesWithinThresholdY = 1, framesWithinThresholdZ = 1;
        int framesVelocitySameX = 1, framesVelocitySameY = 1, framesVelocitySameZ = 1;


        //supporting variables
        InputTouch myTouch;
        Motion myMotion;


        //supporting controller
        ControllerAxis[] axisArray;
        ButtonClick[] buttonArray;



        void Awake()
        {
            mInstance = this;
            axisArray = new ControllerAxis[15]; //5 axis per controller and ATV supports 3 players
            buttonArray = new ButtonClick[21]; //7 buttons per controller and ATV supports 3 players
            myTouch = new InputTouch();
            myMotion = new Motion();
            EasyInputHelper.resetMotion();

            //even though destroy gets called previous string delegates may still be active. reset them
            On_TouchStart = null;
            On_Touch = null;
            On_TouchEnd = null;
            On_QuickTouchEnd = null;
            On_LongTouchStart = null;
            On_LongTouch = null;
            On_LongTouchEnd = null;
            On_DoubleTouchEnd = null;
            On_SwipeDetected = null;

            //buttons
            On_ClickStart = null;
            On_Click = null;
            On_ClickEnd = null;
            On_QuickClickEnd = null;
            On_LongClickStart = null;
            On_LongClick = null;
            On_LongClickEnd = null;
            On_DoubleClickEnd = null;

            //axis
            On_LeftStick = null;
            On_RightStick = null;
            On_Dpad = null;
            On_LeftTrigger = null;
            On_RightTrigger = null;

            //motion
            On_Accelerometer = null;
            On_Gyro = null;
            On_Motion = null;
        }

        // Use this for initialization
        void Start()
        {
            //set startup lock
            startupLock = true;
            startup = DateTime.UtcNow;

            //set to not sleep
            Screen.sleepTimeout = SleepTimeout.NeverSleep;

            //we want absolute position and if title screen we want to allow exit to home
#if !UNITY_EDITOR && UNITY_TVOS
            UnityEngine.tvOS.Remote.reportAbsoluteDpadValues = true;
            if (titleScreen)
            {
                exitHomeLock = true;
            }
            else
            {
                UnityEngine.tvOS.Remote.allowExitToHome = false;
            }
#endif

            //setup the controller buttons
            setupControllerButtons();

            setupControllerAxes();

        }

        void OnApplicationPause(bool pauseStatus)
        {
            //to deal with bug that absolute values revert after app is paused/suspended
#if !UNITY_EDITOR && UNITY_TVOS
            UnityEngine.tvOS.Remote.reportAbsoluteDpadValues = true;
#endif
        }

        // Update is called once per frame
        void Update()
        {
            //based on title screen checkbox if 1 second has elapsed set flag to true
            if (exitHomeLock)
            {
                if ((DateTime.UtcNow - startup).TotalSeconds > .5f)
                {
#if !UNITY_EDITOR && UNITY_TVOS
                    UnityEngine.tvOS.Remote.allowExitToHome = true;
#endif
                    exitHomeLock = false;
                }
            }


            if (startupLock)
            {
                if ((DateTime.UtcNow - startup).TotalSeconds > .1f)
                {
                    //a tenth second startup lock so that previous scene button presses don't refire
                    startupLock = false;
                }
            }
            else
            {
                populateMyTouch();
                processTouchEvents();
                processControllerButtonEvents();
                processControllerAxisEvents();
                processMotionEvents();
            }

        }


        public static void resetMotion(Vector3 newPosition, Quaternion newOrientation)
        {
        }

        void populateMyTouch()
        {
#if UNITY_EDITOR
            currentlyTouching = (Input.GetMouseButton(0));
            if (currentlyTouching)
            {

                if (!previousTouching)
                {
                    //start of a touch (wasn't touching previous) puts in -1 to 1 range
                    myTouch.originalTouchPosition.x = (((Input.mousePosition.x / (float)Screen.width) - .5f) * 2f);
                    myTouch.originalTouchPosition.y = (((Input.mousePosition.y / (float)Screen.height) - .5f) * 2f);
                    myTouch.currentTouchPosition.x = (((Input.mousePosition.x / (float)Screen.width) - .5f) * 2f);
                    myTouch.currentTouchPosition.y = (((Input.mousePosition.y / (float)Screen.height) - .5f) * 2f);
                    myTouch.currentTouchBeginTimestamp = Time.time;

                }
                else
                {
                    //continue of touch puts in -1 to 1 range
                    myTouch.currentTouchPosition.x = (((Input.mousePosition.x / (float)Screen.width) - .5f) * 2f);
                    myTouch.currentTouchPosition.y = (((Input.mousePosition.y / (float)Screen.height) - .5f) * 2f);
                }
            }
#endif

#if !UNITY_EDITOR && UNITY_TVOS
                currentlyTouching = (Input.touchCount > 0);

                if (currentlyTouching)
                {

                    if (!previousTouching)
                    {
                        //start of a touch (wasn't touching previous)
                        myTouch.originalTouchPosition.x = Input.GetAxisRaw(touchAxisHorizontal);
                        myTouch.originalTouchPosition.y = Input.GetAxisRaw(touchAxisVertical);
                        myTouch.currentTouchPosition.x = Input.GetAxisRaw(touchAxisHorizontal);
                        myTouch.currentTouchPosition.y = Input.GetAxisRaw(touchAxisVertical);
                        myTouch.currentTouchBeginTimestamp = Time.time;

                        //compensate for orientation
                        if (orientation == EasyInputConstants.REMOTE_ORIENTATION.TouchpadLeft || orientation == EasyInputConstants.REMOTE_ORIENTATION.TouchpadRight)
                        {
                            myTouch.currentTouchPosition = EasyInputUtilities.flipCoordinates(orientation, myTouch.currentTouchPosition);
                            myTouch.originalTouchPosition = EasyInputUtilities.flipCoordinates(orientation, myTouch.originalTouchPosition);

                        }
                    }
                    else
                    {

                        if (myTouch.currentTouchPosition != Vector2.zero && Input.GetAxisRaw(touchAxisHorizontal) <= .01f && Input.GetAxisRaw(touchAxisHorizontal) >= -.01f && Input.GetAxisRaw(touchAxisVertical) <= .01f && Input.GetAxisRaw(touchAxisVertical) >= -.01f)
                        {
                            //this is a contrinue of touch but there seems to be a bug or other 1 frame discrepancy
                            //between the touch api and the getAxis API. The last frame of touching being true
                            //the controller getAxis API registers as (0,0) essentially not touching even though
                            //the touch API says that we are still touching. This causes issues with certain types of
                            //controls like the touchpad since it thinks you swiped really fast at the end if you weren't
                            //already at 0,0. Workaround for now is to not update the frame if last frame we weren't (0,0)
                            //and now we are. This happens rarely since the touchpad is 800x800 its very unlikely we're ever
                            //touching exactly in the center
                        }
                        else
                        {
                            //normal continue of touch
                            myTouch.currentTouchPosition.x = Input.GetAxisRaw(touchAxisHorizontal);
                            myTouch.currentTouchPosition.y = Input.GetAxisRaw(touchAxisVertical);


                            //compensate for orientation
                            if (orientation == EasyInputConstants.REMOTE_ORIENTATION.TouchpadLeft || orientation == EasyInputConstants.REMOTE_ORIENTATION.TouchpadRight)
                            {
                                myTouch.currentTouchPosition = EasyInputUtilities.flipCoordinates(orientation, myTouch.currentTouchPosition);

                            }
                        }
                        


                    }
                }

#endif
        }

        void processTouchEvents()
        {
            //touch (remember Apple TV is not multitouch just a single touch)
            if (currentlyTouching)
            {

                if (!previousTouching)
                {
                    //swipetype always starts at none
                    myTouch.swipeType = EasyInputConstants.SWIPE_TYPE.None;

                    //touchtype starts at quick if new or double if were in the time factor for double press
                    if (myTouch.previousTouchBeginTimestamp != EasyInputConstants.NO_TIMESTAMP
                        && (myTouch.currentTouchBeginTimestamp - myTouch.previousTouchBeginTimestamp) < maxDoubleTapTime
                        && EasyInputUtilities.determineDistance(myTouch.previousTouchOriginalPosition, myTouch.originalTouchPosition) < maxPressLength)
                    {
                        //possible start of a double tap
                        myTouch.touchType = EasyInputConstants.TOUCH_TYPE.DoublePress;
                    }
                    else
                    {
                        myTouch.touchType = EasyInputConstants.TOUCH_TYPE.QuickPress;
                    }

                    //fire off the touch start event and touch event
                    if (On_TouchStart != null)
                        On_TouchStart(myTouch);
                    if (On_Touch != null)
                    {
                        On_Touch(myTouch);
                    }

                }
                else
                {

                    //change to quickpress
                    if (myTouch.touchType == EasyInputConstants.TOUCH_TYPE.Miscellaneous
                        && EasyInputUtilities.determineDistance(myTouch.originalTouchPosition, myTouch.currentTouchPosition) < maxPressLength
                        && Time.time - myTouch.currentTouchBeginTimestamp < maxQuickTapTime)
                    {
                        myTouch.touchType = EasyInputConstants.TOUCH_TYPE.QuickPress;
                    }
                    //change to longpress
                    if ((myTouch.touchType == EasyInputConstants.TOUCH_TYPE.Miscellaneous || myTouch.touchType == EasyInputConstants.TOUCH_TYPE.QuickPress || myTouch.touchType == EasyInputConstants.TOUCH_TYPE.DoublePress) && EasyInputUtilities.determineDistance(myTouch.originalTouchPosition, myTouch.currentTouchPosition) < maxPressLength && Time.time - myTouch.currentTouchBeginTimestamp > minLongTapTime)
                    {
                        myTouch.touchType = EasyInputConstants.TOUCH_TYPE.LongPress;
                        if (On_LongTouchStart != null)
                            On_LongTouchStart(myTouch);
                    }

                    //change to swipe
                    if (EasyInputUtilities.determineDistance(myTouch.originalTouchPosition, myTouch.currentTouchPosition) > requiredSwipeLength)
                    {
                        //if we're changing to a swipe from long press fire the appropriate end event
                        if (myTouch.touchType == EasyInputConstants.TOUCH_TYPE.LongPress)
                        {
                            if (On_LongTouchEnd != null)
                                On_LongTouchEnd(myTouch);
                        }

                        myTouch.touchType = EasyInputConstants.TOUCH_TYPE.Swipe;
                        myTouch.swipeType = EasyInputUtilities.determineSwipeType(myTouch);
                        if (swipeAllowed)
                        {
                            if (On_SwipeDetected != null)
                                On_SwipeDetected(myTouch);
                            swipeAllowed = false;

                        }
                    }

                    //change to miscellaneous
                    if (!(myTouch.touchType == EasyInputConstants.TOUCH_TYPE.Swipe || myTouch.touchType == EasyInputConstants.TOUCH_TYPE.Miscellaneous))
                    {
                        //downgraded from quickpress
                        if (myTouch.touchType == EasyInputConstants.TOUCH_TYPE.QuickPress)
                        {
                            if (EasyInputUtilities.determineDistance(myTouch.originalTouchPosition, myTouch.currentTouchPosition) > maxPressLength)
                            {
                                //we were a quick press but now we've moved to far revert to misc
                                myTouch.touchType = EasyInputConstants.TOUCH_TYPE.Miscellaneous;
                            }
                            if (Time.time - myTouch.currentTouchBeginTimestamp > maxQuickTapTime)
                            {
                                //we were a quick press but now we've taken too long revert to misc
                                myTouch.touchType = EasyInputConstants.TOUCH_TYPE.Miscellaneous;
                            }
                        }

                        //downgraded from longpress
                        else if (myTouch.touchType == EasyInputConstants.TOUCH_TYPE.LongPress)
                        {
                            if (EasyInputUtilities.determineDistance(myTouch.originalTouchPosition, myTouch.currentTouchPosition) > maxPressLength)
                            {
                                //we were a quick press but now we've moved to far revert to misc
                                myTouch.touchType = EasyInputConstants.TOUCH_TYPE.Miscellaneous;
                                if (On_LongTouchEnd != null)
                                    On_LongTouchEnd(myTouch);
                            }
                        }

                        //downgraded from double press
                        else if (myTouch.touchType == EasyInputConstants.TOUCH_TYPE.DoublePress)
                        {
                            if (EasyInputUtilities.determineDistance(myTouch.originalTouchPosition, myTouch.currentTouchPosition) > maxPressLength)
                            {
                                //we were a quick press but now we've moved to far revert to misc
                                myTouch.touchType = EasyInputConstants.TOUCH_TYPE.Miscellaneous;
                            }
                            if (Time.time - myTouch.currentTouchBeginTimestamp > maxDoubleTapTime)
                            {
                                //we were a quick press but now we've taken too long revert to misc
                                myTouch.touchType = EasyInputConstants.TOUCH_TYPE.Miscellaneous;
                            }
                        }
                    }



                    //if touching we always fire off the touch event
                    if (On_Touch != null)
                    {
                        On_Touch(myTouch);
                    }

                    //if touching and currently a long press always fire that too
                    if (myTouch.touchType == EasyInputConstants.TOUCH_TYPE.LongPress)
                    {
                        if (On_LongTouch != null)
                            On_LongTouch(myTouch);
                    }

                }
                previousTouching = true;

            }
            else
            {
                //no current touch 

                //first look at previous values to determine if we need to do anything
                if (previousTouching == true)
                {
                    //we just ended a touch
                    if (On_TouchEnd != null)
                    {
                        On_TouchEnd(myTouch);
                    }
                    

                    //also fire end of quick or long if it was this (remember we don't fire a swipe event on end we fire it
                    //on each time we hit the swipe length
                    if (myTouch.touchType == EasyInputConstants.TOUCH_TYPE.QuickPress)
                    {
                        //double check that we've just ended a quick touch
                        if (Time.time - myTouch.currentTouchBeginTimestamp < maxQuickTapTime)
                            if (On_QuickTouchEnd != null)
                                On_QuickTouchEnd(myTouch);
                    }
                    else if (myTouch.touchType == EasyInputConstants.TOUCH_TYPE.LongPress)
                    {
                        //double check that we've just ended a long touch
                        if (Time.time - myTouch.currentTouchBeginTimestamp > minLongTapTime)
                            if (On_LongTouchEnd != null)
                                On_LongTouchEnd(myTouch);
                    }
                    else if (myTouch.touchType == EasyInputConstants.TOUCH_TYPE.DoublePress)
                    {
                        //double check that we've just ended a double touch
                        if (Time.time - myTouch.previousTouchBeginTimestamp < maxDoubleTapTime)
                            if (On_DoubleTouchEnd != null)
                                On_DoubleTouchEnd(myTouch);
                    }

                    //since we were previously touching set the timestamp
                    myTouch.previousTouchBeginTimestamp = myTouch.currentTouchBeginTimestamp;
                    myTouch.previousTouchOriginalPosition = myTouch.originalTouchPosition;
                }


                //reset the variables since there is no current touch
                myTouch.originalTouchPosition = EasyInputConstants.NOT_TOUCHING;
                myTouch.currentTouchPosition = EasyInputConstants.NOT_TOUCHING;
                myTouch.currentTouchBeginTimestamp = EasyInputConstants.NO_TIMESTAMP;
                myTouch.touchType = EasyInputConstants.TOUCH_TYPE.Miscellaneous;
                myTouch.swipeType = EasyInputConstants.SWIPE_TYPE.None;
                swipeAllowed = true;
                previousTouching = false;
            }
        }

        void setupControllerButtons()
        {
            //there are 3 players
            for (int i = 1; i < 4; i++)
            {
                //a button
                buttonArray[(i * 7) - 7] = new ButtonClick();
                buttonArray[(i * 7) - 7].player =(EasyInputConstants.PLAYER_NUMBER) (i-1);
                buttonArray[(i * 7) - 7].button = EasyInputConstants.CONTROLLER_BUTTON.AButton;

                //b button
                buttonArray[(i * 7) - 6] = new ButtonClick();
                buttonArray[(i * 7) - 6].player = (EasyInputConstants.PLAYER_NUMBER)(i - 1);
                buttonArray[(i * 7) - 6].button = EasyInputConstants.CONTROLLER_BUTTON.BButton;

                //x button
                buttonArray[(i * 7) - 5] = new ButtonClick();
                buttonArray[(i * 7) - 5].player = (EasyInputConstants.PLAYER_NUMBER)(i - 1);
                buttonArray[(i * 7) - 5].button = EasyInputConstants.CONTROLLER_BUTTON.XButton;

                //y button
                buttonArray[(i * 7) - 4] = new ButtonClick();
                buttonArray[(i * 7) - 4].player = (EasyInputConstants.PLAYER_NUMBER)(i - 1);
                buttonArray[(i * 7) - 4].button = EasyInputConstants.CONTROLLER_BUTTON.YButton;

                //a button
                buttonArray[(i * 7) - 3] = new ButtonClick();
                buttonArray[(i * 7) - 3].player = (EasyInputConstants.PLAYER_NUMBER)(i - 1);
                buttonArray[(i * 7) - 3].button = EasyInputConstants.CONTROLLER_BUTTON.LeftBumper;

                //a button
                buttonArray[(i * 7) - 2] = new ButtonClick();
                buttonArray[(i * 7) - 2].player = (EasyInputConstants.PLAYER_NUMBER)(i - 1);
                buttonArray[(i * 7) - 2].button = EasyInputConstants.CONTROLLER_BUTTON.RightBumper;

                //a button
                buttonArray[(i * 7) - 1] = new ButtonClick();
                buttonArray[(i * 7) - 1].player = (EasyInputConstants.PLAYER_NUMBER)(i - 1);
                buttonArray[(i * 7) - 1].button = EasyInputConstants.CONTROLLER_BUTTON.MenuButton;
            }

        }

        void setupControllerAxes()
        {
            //there are 3 players
            for (int i = 1; i < 4; i++)
            {
                //left stick
                axisArray[(i * 5) - 5] = new ControllerAxis();
                axisArray[(i * 5) - 5].player = (EasyInputConstants.PLAYER_NUMBER)(i - 1);
                axisArray[(i * 5) - 5].axis = EasyInputConstants.CONTROLLER_AXIS.LeftStick;

                //right stick
                axisArray[(i * 5) - 4] = new ControllerAxis();
                axisArray[(i * 5) - 4].player = (EasyInputConstants.PLAYER_NUMBER)(i - 1);
                axisArray[(i * 5) - 4].axis = EasyInputConstants.CONTROLLER_AXIS.RightStick;

                //dpad
                axisArray[(i * 5) - 3] = new ControllerAxis();
                axisArray[(i * 5) - 3].player = (EasyInputConstants.PLAYER_NUMBER)(i - 1);
                axisArray[(i * 5) - 3].axis = EasyInputConstants.CONTROLLER_AXIS.DPad;

                //left trigger
                axisArray[(i * 5) - 2] = new ControllerAxis();
                axisArray[(i * 5) - 2].player = (EasyInputConstants.PLAYER_NUMBER)(i - 1);
                axisArray[(i * 5) - 2].axis = EasyInputConstants.CONTROLLER_AXIS.LeftTrigger;

                //right trigger
                axisArray[(i * 5) - 1] = new ControllerAxis();
                axisArray[(i * 5) - 1].player = (EasyInputConstants.PLAYER_NUMBER)(i - 1);
                axisArray[(i * 5) - 1].axis = EasyInputConstants.CONTROLLER_AXIS.RightTrigger;
            }


#if UNITY_EDITOR
            if (touchAxisHorizontal == null || touchAxisVertical == null)
            {
                touchAxisHorizontal = "";
                touchAxisVertical = "";
            }
#endif
            //also determine which is the touch axis
            string[] temp = Input.GetJoystickNames();

            if (temp == null || temp.Length < 2 || temp[0].Contains(EasyInputConstants.JOYSTICKNAME_REMOTE))
            {
                //player 1
                touchAxisHorizontal = EasyInputConstants.P1_REMOTE_HORIZONTAL;
                touchAxisVertical = EasyInputConstants.P1_REMOTE_VERTICAL;
                siriRemotePlayer = EasyInputConstants.PLAYER_NUMBER.Player1;
            }
            else if (temp[1].Contains(EasyInputConstants.JOYSTICKNAME_REMOTE))
            {
                //player 2
                touchAxisHorizontal = EasyInputConstants.P2_REMOTE_HORIZONTAL;
                touchAxisVertical = EasyInputConstants.P2_REMOTE_VERTICAL;
                siriRemotePlayer = EasyInputConstants.PLAYER_NUMBER.Player2;
            }
            else
            {
                //player 3
                touchAxisHorizontal = EasyInputConstants.P3_REMOTE_HORIZONTAL;
                touchAxisVertical = EasyInputConstants.P3_REMOTE_VERTICAL;
                siriRemotePlayer = EasyInputConstants.PLAYER_NUMBER.Player3;
            }

        }

        void processControllerButtonEvents()
        {
            //each controller on TVOS has 7 possible buttons and there is a max of 3 players
            //a (button 14), b (button 13) , x (button 15), y (button 12) , lb (button 8), rb (button 9), menu (button 0)
            for (int i = 0; i < 21; i++)
            {
                processSpecificButton(ref buttonArray[i]);
            }

        }

        void processControllerAxisEvents()
        {
            //each controller on TVOS has 7 possible buttons and there is a max of 3 players
            //a (button 14), b (button 13) , x (button 15), y (button 12) , lb (button 8), rb (button 9), menu (button 0)
            for (int i = 0; i < 15; i++)
            {
                processSpecificAxis(ref axisArray[i]);
            }

        }

        void processMotionEvents()
        {

            if (orientation == EasyInputConstants.REMOTE_ORIENTATION.TouchpadTop)
            {
                //default is setup for touchpad up
                if (On_Accelerometer != null)
                    On_Accelerometer(Input.acceleration);
                if (On_Gyro != null)
                    On_Gyro(Input.gyro.gravity, Input.gyro.userAcceleration);
                if (On_Motion != null)
                    deriveMotionEvents(Input.gyro.gravity, Input.gyro.userAcceleration);
            }
            else if (orientation == EasyInputConstants.REMOTE_ORIENTATION.TouchpadLeft)
            {
                //x = default -y  y = default x  z = default z

                //accel
                temp.x = -Input.acceleration.y;
                temp.y = Input.acceleration.x;
                temp.z = Input.acceleration.z;
                if (On_Accelerometer != null)
                    On_Accelerometer(temp);

                //gyro
                temp.x = -Input.gyro.gravity.y;
                temp.y = Input.gyro.gravity.x;
                temp.z = Input.gyro.gravity.z;
                temp1.x = -Input.gyro.userAcceleration.y;
                temp1.y = Input.gyro.userAcceleration.x;
                temp1.z = Input.gyro.userAcceleration.z;
                if (On_Gyro != null)
                    On_Gyro(temp,temp1);

                if (On_Motion != null)
                    deriveMotionEvents(temp, temp1);

            }
            else if (orientation == EasyInputConstants.REMOTE_ORIENTATION.TouchpadRight)
            {
                //x = default y  y = default -x  z = default z

                //accel
                temp.x = Input.acceleration.y;
                temp.y = -Input.acceleration.x;
                temp.z = Input.acceleration.z;
                if (On_Accelerometer != null)
                    On_Accelerometer(temp);

                //gyro
                temp.x = Input.gyro.gravity.y;
                temp.y = -Input.gyro.gravity.x;
                temp.z = Input.gyro.gravity.z;
                temp1.x = Input.gyro.userAcceleration.y;
                temp1.y = -Input.gyro.userAcceleration.x;
                temp1.z = Input.gyro.userAcceleration.z;
                if (On_Gyro != null)
                    On_Gyro(temp, temp1);

                if (On_Motion != null)
                    deriveMotionEvents(temp, temp1);

            }


        }

        //only called if there is a subscriber calculates values and fires off the delegate
        void deriveMotionEvents(Vector3 gravity, Vector3 userAcceleration)
        {


            //current orientation will only be not valid when we just reset
            if (myMotion.currentOrientation == EasyInputConstants.NOT_VALID)
            {
                myMotion.currentRawGravity = gravity;
                myMotion.currentRawUserAcceleration = userAcceleration;
                myMotion.currentSmoothedGravity = gravity;
                myMotion.currentSmoothedUserAcceleration = userAcceleration;

                //reset counters
                framesWithinThresholdX = 1;
                framesWithinThresholdY = 1;
                framesWithinThresholdZ = 1;
                framesVelocitySameX = 1;
                framesVelocitySameY = 1;
                framesVelocitySameZ = 1;


                myMotion.lastFrameOrientation = EasyInputConstants.NOT_VALID;
                myMotion.currentRotationRate = Vector3.zero;

                //current orientation
                //roll
                temp.z = Mathf.Atan2(gravity.z, gravity.y) * (180f / Mathf.PI);
                //pitch
                temp.x = Mathf.Atan2(-gravity.x, Mathf.Sqrt((Mathf.Pow(gravity.y,2) + Mathf.Pow(gravity.z,2)))) * (180f / Mathf.PI);
                //yaw (only valid when we tilt away from normal flat orientation)
                temp.y = Mathf.Atan2(Mathf.Sqrt((Mathf.Pow(gravity.x, 2) + Mathf.Pow(gravity.z, 2))), gravity.y) * (180f / Mathf.PI);
                myMotion.currentOrientation = temp;
            }
            else
            {
                //we have not just reset so we have a valid frame of reference
                myMotion.lastFrameOrientation = myMotion.currentOrientation;
                myMotion.lastFrameVelocity = myMotion.currentVelocity;
                myMotion.lastFrameSmoothedGravity = myMotion.currentSmoothedGravity;
                myMotion.lastFrameSmoothedUserAcceleration = myMotion.currentSmoothedUserAcceleration;
                myMotion.lastFrameRotationRate = myMotion.currentRotationRate;

                myMotion.currentRawGravity = gravity;
                myMotion.currentRawUserAcceleration = userAcceleration;

                //smooth gravity if necessary
                myMotion.currentSmoothedGravity = EasyInputUtilities.dampenSensorNoise(myMotion.currentRawGravity, myMotion.lastFrameSmoothedGravity, EasyInputConstants.MINUMUM_NOISE_THRESHOLD, framesWithinThresholdX, framesWithinThresholdY, framesWithinThresholdZ);

                //smooth acceleration if necessary
                myMotion.currentSmoothedUserAcceleration = EasyInputUtilities.dampenSensorNoise(myMotion.currentRawUserAcceleration, myMotion.lastFrameSmoothedUserAcceleration, EasyInputConstants.MINUMUM_NOISE_THRESHOLD, framesWithinThresholdX, framesWithinThresholdY, framesWithinThresholdZ);

                //check if any smoothing was done and either reset or increment (use gravity as it hits the special cases more often)
                framesWithinThresholdX = (myMotion.currentRawGravity.x == myMotion.currentSmoothedGravity.x) ? 1 : framesWithinThresholdX + 1;
                framesWithinThresholdY = (myMotion.currentRawGravity.y == myMotion.currentSmoothedGravity.y) ? 1 : framesWithinThresholdY + 1;
                framesWithinThresholdZ = (myMotion.currentRawGravity.z == myMotion.currentSmoothedGravity.z) ? 1 : framesWithinThresholdZ + 1;

                //current orientation
                //roll
                temp.z = Mathf.Atan2(gravity.z, gravity.y) * (180f / Mathf.PI);
                //pitch
                temp.x = Mathf.Atan2(-gravity.x, Mathf.Sqrt((Mathf.Pow(gravity.y, 2) + Mathf.Pow(gravity.z, 2)))) * (180f / Mathf.PI);
                //yaw (only valid when we tilt away from normal flat orientation)
                temp.y = Mathf.Atan2(Mathf.Sqrt((Mathf.Pow(gravity.x, 2) + Mathf.Pow(gravity.z, 2))), gravity.y) * (180f / Mathf.PI);
                myMotion.currentOrientation = temp;

                //need to put back the quadrant information

                //quadrant 2 x (-90 degrees to -180 degrees)
                if (myMotion.currentOrientation.x < 0f && myMotion.currentRawGravity.y > 0)
                    myMotion.currentOrientation.x = -180 - myMotion.currentOrientation.x;

                //quadrant 3 x (90 degrees to 180 degrees)
                if (myMotion.currentOrientation.x > 0f && myMotion.currentRawGravity.y > 0)
                    myMotion.currentOrientation.x = 180 - myMotion.currentOrientation.x;

                //z
                if (myMotion.currentOrientation.z > 0f)
                    myMotion.currentOrientation.z = 180 - myMotion.currentOrientation.z;
                if (myMotion.currentOrientation.z < 0f)
                    myMotion.currentOrientation.z = -180 - myMotion.currentOrientation.z;


                //rotation rate
                myMotion.currentRotationRate = (myMotion.lastFrameOrientation - myMotion.currentOrientation) * Time.deltaTime;

                //if rotation rate has gone from -180 to 180 or vice versa need to make sure that it doesn't show inaccurate
                if ((myMotion.lastFrameOrientation.x - myMotion.currentOrientation.x) > 350f)
                {
                    myMotion.currentRotationRate.x = (360f - (myMotion.lastFrameOrientation.x - myMotion.currentOrientation.x)) * Time.deltaTime;
                }
                else if ((myMotion.lastFrameOrientation.x - myMotion.currentOrientation.x) < -350f)
                {
                    myMotion.currentRotationRate.x = (360f + (myMotion.lastFrameOrientation.x - myMotion.currentOrientation.x)) * Time.deltaTime;
                }

                if ((myMotion.lastFrameOrientation.y - myMotion.currentOrientation.y) > 350f)
                {
                    myMotion.currentRotationRate.y = (360f - (myMotion.lastFrameOrientation.y - myMotion.currentOrientation.y)) * Time.deltaTime;
                }
                else if ((myMotion.lastFrameOrientation.y - myMotion.currentOrientation.y) < -350f)
                {
                    myMotion.currentRotationRate.y = (360f + (myMotion.lastFrameOrientation.y - myMotion.currentOrientation.y)) * Time.deltaTime;
                }

                if ((myMotion.lastFrameOrientation.z - myMotion.currentOrientation.z) > 350f)
                {
                    myMotion.currentRotationRate.z = (360f - (myMotion.lastFrameOrientation.z - myMotion.currentOrientation.z)) * Time.deltaTime;
                }
                else if ((myMotion.lastFrameOrientation.z - myMotion.currentOrientation.z) < -350f)
                {
                    myMotion.currentRotationRate.z = (360f + (myMotion.lastFrameOrientation.z - myMotion.currentOrientation.z)) * Time.deltaTime;
                }


                //if rotation rate is close to 0 force to 0
                if (myMotion.currentRotationRate.x < EasyInputConstants.MINUMUM_NOISE_THRESHOLD && myMotion.currentRotationRate.x > -EasyInputConstants.MINUMUM_NOISE_THRESHOLD)
                {
                    myMotion.currentRotationRate.x = 0f;
                }
                if (myMotion.currentRotationRate.y < EasyInputConstants.MINUMUM_NOISE_THRESHOLD && myMotion.currentRotationRate.y > -EasyInputConstants.MINUMUM_NOISE_THRESHOLD)
                {
                    myMotion.currentRotationRate.y = 0f;
                }
                if (myMotion.currentRotationRate.z < EasyInputConstants.MINUMUM_NOISE_THRESHOLD && myMotion.currentRotationRate.z > -EasyInputConstants.MINUMUM_NOISE_THRESHOLD)
                {
                    myMotion.currentRotationRate.z = 0f;
                }

                

                //sensor is noisy so only register as velocity if we have changed by a certain threshold
                //two special cases near 0 or 1 will register as 0 and 1 respectively
                //otherwise if under threshold will just use last frames value
                //also need to check each axis independently
                myMotion.currentVelocity = (-(myMotion.currentSmoothedUserAcceleration * Time.deltaTime)) + myMotion.lastFrameVelocity;

                //check if velocity is same as last
                framesVelocitySameX = (myMotion.currentVelocity.x != myMotion.lastFrameVelocity.x) ? 1 : framesVelocitySameX + 1;
                framesVelocitySameY = (myMotion.currentVelocity.y != myMotion.lastFrameVelocity.y) ? 1 : framesVelocitySameY + 1;
                framesVelocitySameZ = (myMotion.currentVelocity.z != myMotion.lastFrameVelocity.z) ? 1 : framesVelocitySameZ + 1;

                //if we are the same for enough frames likely its drift thats accounting for this and force the velocity to zero
                if (framesVelocitySameX > EasyInputConstants.CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO)
                {
                    myMotion.currentVelocity.x = 0;
                    framesVelocitySameX = 1;
                }
                if (framesVelocitySameY > EasyInputConstants.CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO)
                {
                    myMotion.currentVelocity.y = 0;
                    framesVelocitySameY = 1;
                }
                if (framesVelocitySameZ > EasyInputConstants.CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO)
                {
                    myMotion.currentVelocity.z = 0;
                    framesVelocitySameZ = 1;
                }


                myMotion.currentRelativePositionSinceReset += (myMotion.currentVelocity * Time.deltaTime);
                
                myMotion.totalRotationRateSinceReset += myMotion.currentRotationRate;
                myMotion.totalVelocitySinceReset += myMotion.currentVelocity;
            }

            


            //fire off the delegate
            On_Motion(myMotion);
        }

        void processSpecificButton(ref ButtonClick buttonClick)
        {
            buttonClick.currentlyPressed = getControllerButtonState(buttonClick.player, buttonClick.button);

            if (buttonClick.currentlyPressed)
            {

                if (!buttonClick.previousFramePressed)
                {
                    //start of a click
                    buttonClick.currentClickBeginTimestamp = Time.time;

                    //touchtype starts at quick if new or double if were in the time factor for double press
                    if (buttonClick.previousClickBeginTimestamp != EasyInputConstants.NO_TIMESTAMP
                        && (buttonClick.currentClickBeginTimestamp - buttonClick.previousClickBeginTimestamp) < maxDoubleTapTime)
                    {
                        //possible start of a double tap
                        buttonClick.clickType = EasyInputConstants.CLICK_TYPE.DoublePress;
                    }
                    else
                    {
                        buttonClick.clickType = EasyInputConstants.CLICK_TYPE.QuickPress;
                    }

                    //fire off the click start event and touch event
                    if (On_ClickStart != null)
                        On_ClickStart(buttonClick);
                    if (On_Click != null)
                        On_Click(buttonClick);

                }
                else
                {
                    //continue of a press

                    //change to quickpress
                    if (buttonClick.clickType == EasyInputConstants.CLICK_TYPE.Miscellaneous
                        && Time.time - buttonClick.currentClickBeginTimestamp < maxQuickTapTime)
                    {
                        buttonClick.clickType = EasyInputConstants.CLICK_TYPE.QuickPress;
                    }
                    //change to longpress
                    if (buttonClick.clickType != EasyInputConstants.CLICK_TYPE.LongPress
                        && Time.time - buttonClick.currentClickBeginTimestamp > minLongTapTime)
                    {
                        buttonClick.clickType = EasyInputConstants.CLICK_TYPE.LongPress;
                        if (On_LongClickStart != null)
                            On_LongClickStart(buttonClick);
                    }

                    //change to miscellaneous
                    if (buttonClick.clickType != EasyInputConstants.CLICK_TYPE.Miscellaneous)
                    {
                        //downgraded from quickpress
                        if (buttonClick.clickType == EasyInputConstants.CLICK_TYPE.QuickPress)
                        {
                            if (Time.time - buttonClick.currentClickBeginTimestamp > maxQuickTapTime)
                            {
                                //we were a quick press but now we've taken too long revert to misc
                                buttonClick.clickType = EasyInputConstants.CLICK_TYPE.Miscellaneous;
                            }
                        }

                        //downgraded from double press
                        else if (buttonClick.clickType == EasyInputConstants.CLICK_TYPE.DoublePress)
                        {
                            if (Time.time - buttonClick.currentClickBeginTimestamp > maxDoubleTapTime)
                            {
                                //we were a double press but now we've taken too long revert to misc
                                buttonClick.clickType = EasyInputConstants.CLICK_TYPE.Miscellaneous;
                            }
                        }
                    }



                    //if touching we always fire off the touch event
                    if (On_Click != null)
                        On_Click(buttonClick);

                    //if touching and currently a long press always fire that too
                    if (buttonClick.clickType == EasyInputConstants.CLICK_TYPE.LongPress)
                    {
                        if (On_LongClick != null)
                            On_LongClick(buttonClick);
                    }

                }
                buttonClick.previousFramePressed = true;

            }
            else
            {
                //no current touch 

                //first look at previous values to determine if we need to do anything
                if (buttonClick.previousFramePressed == true)
                {
                    //we just ended a touch
                    if (On_ClickEnd != null)
                        On_ClickEnd(buttonClick);

                    //also fire end of quick or long if it was this (remember we don't fire a swipe event on end we fire it
                    //on each time we hit the swipe length
                    if (buttonClick.clickType == EasyInputConstants.CLICK_TYPE.QuickPress)
                    {
                        //double check that we've just ended a quick touch
                        if (Time.time - buttonClick.currentClickBeginTimestamp < maxQuickTapTime)
                            if (On_QuickClickEnd != null)
                                On_QuickClickEnd(buttonClick);
                    }
                    else if (buttonClick.clickType == EasyInputConstants.CLICK_TYPE.LongPress)
                    {
                        //double check that we've just ended a long touch
                        if (Time.time - buttonClick.currentClickBeginTimestamp > minLongTapTime)
                            if (On_LongClickEnd != null)
                                On_LongClickEnd(buttonClick);
                    }
                    else if (buttonClick.clickType == EasyInputConstants.CLICK_TYPE.DoublePress)
                    {
                        //double check that we've just ended a double touch
                        if (Time.time - buttonClick.previousClickBeginTimestamp < maxDoubleTapTime)
                            if (On_DoubleClickEnd != null)
                                On_DoubleClickEnd(buttonClick);
                    }

                    //since we were previously touching set the timestamp
                    buttonClick.previousClickBeginTimestamp = buttonClick.currentClickBeginTimestamp;
                }


                //reset the variables since there is no current touch
                buttonClick.currentClickBeginTimestamp = EasyInputConstants.NO_TIMESTAMP;
                buttonClick.clickType = EasyInputConstants.CLICK_TYPE.Miscellaneous;
                buttonClick.previousFramePressed = false;
            }
        }

        void processSpecificAxis(ref ControllerAxis axis)
        {
            switch (axis.player)
            {
                case EasyInputConstants.PLAYER_NUMBER.Player1:
                    switch (axis.axis)
                    {
                        case EasyInputConstants.CONTROLLER_AXIS.LeftStick:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P1_LEFTSTICK_HORIZONTAL);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P1_LEFTSTICK_VERTICAL);

                            //compensate for orientation if not in editor and a different orientation
#if !UNITY_EDITOR && UNITY_TVOS
                            if (siriRemotePlayer == EasyInputConstants.PLAYER_NUMBER.Player1 && (orientation == EasyInputConstants.REMOTE_ORIENTATION.TouchpadLeft || orientation == EasyInputConstants.REMOTE_ORIENTATION.TouchpadRight))
                            {
                                axis.axisValue = EasyInputUtilities.flipCoordinates(orientation,axis.axisValue);

                            }
#endif
                            if (On_LeftStick != null)
                                On_LeftStick(axis);
                            break;
                        case EasyInputConstants.CONTROLLER_AXIS.RightStick:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P1_RIGHTSTICK_HORIZONTAL);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P1_RIGHTSTICK_VERTICAL);
                            if (On_RightStick != null)
                                On_RightStick(axis);
                            break;
                        case EasyInputConstants.CONTROLLER_AXIS.DPad:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P1_DPAD_HORIZONTAL);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P1_DPAD_VERTICAL);
                            if (On_Dpad != null)
                                On_Dpad(axis);
                            break;
                        case EasyInputConstants.CONTROLLER_AXIS.LeftTrigger:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P1_LEFTTRIGGER);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P1_LEFTTRIGGER);
                            if (On_LeftTrigger != null)
                                On_LeftTrigger(axis);
                            break;
                        case EasyInputConstants.CONTROLLER_AXIS.RightTrigger:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P1_RIGHTTRIGGER);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P1_RIGHTTRIGGER);
                            if (On_RightTrigger != null)
                                On_RightTrigger(axis);
                            break;
                        default:
                            break;
                    }
                    break;
                case EasyInputConstants.PLAYER_NUMBER.Player2:
                    switch (axis.axis)
                    {
                        case EasyInputConstants.CONTROLLER_AXIS.LeftStick:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P2_LEFTSTICK_HORIZONTAL);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P2_LEFTSTICK_VERTICAL);
#if !UNITY_EDITOR && UNITY_TVOS
                            if (siriRemotePlayer == EasyInputConstants.PLAYER_NUMBER.Player2 && (orientation == EasyInputConstants.REMOTE_ORIENTATION.TouchpadLeft || orientation == EasyInputConstants.REMOTE_ORIENTATION.TouchpadRight))
                            {
                                axis.axisValue = EasyInputUtilities.flipCoordinates(orientation,axis.axisValue);

                            }
#endif
                            if (On_LeftStick != null)
                                On_LeftStick(axis);
                            break;
                        case EasyInputConstants.CONTROLLER_AXIS.RightStick:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P2_RIGHTSTICK_HORIZONTAL);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P2_RIGHTSTICK_VERTICAL);
                            if (On_RightStick != null)
                                On_RightStick(axis);
                            break;
                        case EasyInputConstants.CONTROLLER_AXIS.DPad:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P2_DPAD_HORIZONTAL);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P2_DPAD_VERTICAL);
                            if (On_Dpad != null)
                                On_Dpad(axis);
                            break;
                        case EasyInputConstants.CONTROLLER_AXIS.LeftTrigger:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P2_LEFTTRIGGER);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P2_LEFTTRIGGER);
                            if (On_LeftTrigger != null)
                                On_LeftTrigger(axis);
                            break;
                        case EasyInputConstants.CONTROLLER_AXIS.RightTrigger:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P2_RIGHTTRIGGER);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P2_RIGHTTRIGGER);
                            if (On_RightTrigger != null)
                                On_RightTrigger(axis);
                            break;
                        default:
                            break;
                    }
                    break;
                case EasyInputConstants.PLAYER_NUMBER.Player3:
                    switch (axis.axis)
                    {
                        case EasyInputConstants.CONTROLLER_AXIS.LeftStick:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P3_LEFTSTICK_HORIZONTAL);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P3_LEFTSTICK_VERTICAL);
#if !UNITY_EDITOR && UNITY_TVOS
                            if (siriRemotePlayer == EasyInputConstants.PLAYER_NUMBER.Player3 && (orientation == EasyInputConstants.REMOTE_ORIENTATION.TouchpadLeft || orientation == EasyInputConstants.REMOTE_ORIENTATION.TouchpadRight))
                            {
                                axis.axisValue = EasyInputUtilities.flipCoordinates(orientation,axis.axisValue);

                            }
#endif
                            if (On_LeftStick != null)
                                On_LeftStick(axis);
                            break;
                        case EasyInputConstants.CONTROLLER_AXIS.RightStick:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P3_RIGHTSTICK_HORIZONTAL);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P3_RIGHTSTICK_VERTICAL);
                            if (On_RightStick != null)
                                On_RightStick(axis);
                            break;
                        case EasyInputConstants.CONTROLLER_AXIS.DPad:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P3_DPAD_HORIZONTAL);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P3_DPAD_VERTICAL);
                            if (On_Dpad != null)
                                On_Dpad(axis);
                            break;
                        case EasyInputConstants.CONTROLLER_AXIS.LeftTrigger:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P3_LEFTTRIGGER);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P3_LEFTTRIGGER);
                            if (On_LeftTrigger != null)
                                On_LeftTrigger(axis);
                            break;
                        case EasyInputConstants.CONTROLLER_AXIS.RightTrigger:
                            axis.axisValue.x = Input.GetAxisRaw(EasyInputConstants.P3_RIGHTTRIGGER);
                            axis.axisValue.y = Input.GetAxisRaw(EasyInputConstants.P3_RIGHTTRIGGER);
                            if (On_RightTrigger != null)
                                On_RightTrigger(axis);
                            break;
                        default:
                            break;
                    }
                    break;
                default:
                    break;

            }
        }

        bool getControllerButtonState(EasyInputConstants.PLAYER_NUMBER player, EasyInputConstants.CONTROLLER_BUTTON button)
        {
#if UNITY_EDITOR
            //in the editor we simulate the 7 buttons on the keyboard to player 1
            if (player == EasyInputConstants.PLAYER_NUMBER.Player1)
            {
                switch (button)
                {
                    case EasyInputConstants.CONTROLLER_BUTTON.AButton:
                        return (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.Return));
                    case EasyInputConstants.CONTROLLER_BUTTON.BButton:
                        return Input.GetKey(KeyCode.B);
                    case EasyInputConstants.CONTROLLER_BUTTON.XButton:
                        return Input.GetKey(KeyCode.X);
                    case EasyInputConstants.CONTROLLER_BUTTON.YButton:
                        return Input.GetKey(KeyCode.Y);
                    case EasyInputConstants.CONTROLLER_BUTTON.LeftBumper:
                        return Input.GetKey(KeyCode.L);
                    case EasyInputConstants.CONTROLLER_BUTTON.RightBumper:
                        return Input.GetKey(KeyCode.R);
                    case EasyInputConstants.CONTROLLER_BUTTON.MenuButton:
                        return Input.GetKey(KeyCode.M);
                    default:
                        return false;
                }
            }
            else
            {
                return false;
            }
#endif


#if !UNITY_EDITOR && UNITY_TVOS
            switch (player)
            {
                case EasyInputConstants.PLAYER_NUMBER.Player1:
                    switch (button)
                    {
                        case EasyInputConstants.CONTROLLER_BUTTON.AButton:
                            return Input.GetKey(KeyCode.Joystick1Button14);
                        case EasyInputConstants.CONTROLLER_BUTTON.BButton:
                            return Input.GetKey(KeyCode.Joystick1Button13);
                        case EasyInputConstants.CONTROLLER_BUTTON.XButton:
                            return Input.GetKey(KeyCode.Joystick1Button15);
                        case EasyInputConstants.CONTROLLER_BUTTON.YButton:
                            return Input.GetKey(KeyCode.Joystick1Button12);
                        case EasyInputConstants.CONTROLLER_BUTTON.LeftBumper:
                            return Input.GetKey(KeyCode.Joystick1Button8);
                        case EasyInputConstants.CONTROLLER_BUTTON.RightBumper:
                            return Input.GetKey(KeyCode.Joystick1Button9);
                        case EasyInputConstants.CONTROLLER_BUTTON.MenuButton:
                            return Input.GetKey(KeyCode.Joystick1Button0);
                        default:
                            return false;
                    }
                case EasyInputConstants.PLAYER_NUMBER.Player2:
                    switch (button)
                    {
                        case EasyInputConstants.CONTROLLER_BUTTON.AButton:
                            return Input.GetKey(KeyCode.Joystick2Button14);
                        case EasyInputConstants.CONTROLLER_BUTTON.BButton:
                            return Input.GetKey(KeyCode.Joystick2Button13);
                        case EasyInputConstants.CONTROLLER_BUTTON.XButton:
                            return Input.GetKey(KeyCode.Joystick2Button15);
                        case EasyInputConstants.CONTROLLER_BUTTON.YButton:
                            return Input.GetKey(KeyCode.Joystick2Button12);
                        case EasyInputConstants.CONTROLLER_BUTTON.LeftBumper:
                            return Input.GetKey(KeyCode.Joystick2Button8);
                        case EasyInputConstants.CONTROLLER_BUTTON.RightBumper:
                            return Input.GetKey(KeyCode.Joystick2Button9);
                        case EasyInputConstants.CONTROLLER_BUTTON.MenuButton:
                            return Input.GetKey(KeyCode.Joystick2Button0);
                        default:
                            return false;
                    }
                case EasyInputConstants.PLAYER_NUMBER.Player3:
                    switch (button)
                    {
                        case EasyInputConstants.CONTROLLER_BUTTON.AButton:
                            return Input.GetKey(KeyCode.Joystick3Button14);
                        case EasyInputConstants.CONTROLLER_BUTTON.BButton:
                            return Input.GetKey(KeyCode.Joystick3Button13);
                        case EasyInputConstants.CONTROLLER_BUTTON.XButton:
                            return Input.GetKey(KeyCode.Joystick3Button15);
                        case EasyInputConstants.CONTROLLER_BUTTON.YButton:
                            return Input.GetKey(KeyCode.Joystick3Button12);
                        case EasyInputConstants.CONTROLLER_BUTTON.LeftBumper:
                            return Input.GetKey(KeyCode.Joystick3Button8);
                        case EasyInputConstants.CONTROLLER_BUTTON.RightBumper:
                            return Input.GetKey(KeyCode.Joystick3Button9);
                        case EasyInputConstants.CONTROLLER_BUTTON.MenuButton:
                            return Input.GetKey(KeyCode.Joystick3Button0);
                        default:
                            return false;
                    }
                default:
                    return false;

            }
#endif
#if !UNITY_EDITOR && !UNITY_TVOS
            return false;
#endif

        }
    }

}
