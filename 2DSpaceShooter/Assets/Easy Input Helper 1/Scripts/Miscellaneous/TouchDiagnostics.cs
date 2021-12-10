using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using EasyInput.Core;

namespace EasyInput.Misc
{

    [AddComponentMenu("EasyInputHelper/Miscellaneous/TouchDiagnostics")]
    public class TouchDiagnostics : MonoBehaviour
    {

        public Text touchStartValue;
        public Text touchEndValue;
        public Text touchValue;
        public Text LongStartValue;
        public Text LongEndValue;
        public Text LongValue;
        public Text quickEndValue;
        public Text doubleEndValue;
        public Text swipeValue;

        public Text accelXValue;
        public Text accelYValue;
        public Text accelZValue;
        public Text userAccelXValue;
        public Text userAccelYValue;
        public Text userAccelZValue;
        public Text gravityXValue;
        public Text gravityYValue;
        public Text gravityZValue;

        bool touching;
        bool longTouching;

        void OnEnable()
        {
            EasyInputHelper.On_TouchStart += localTouchStart;
            EasyInputHelper.On_TouchEnd += localTouchEnd;
            EasyInputHelper.On_Touch += localTouch;
            EasyInputHelper.On_LongTouchStart += localLongTouchStart;
            EasyInputHelper.On_LongTouchEnd += localLongTouchEnd;
            EasyInputHelper.On_LongTouch += localLongTouch;
            EasyInputHelper.On_QuickTouchEnd += localQuickTouchEnd;
            EasyInputHelper.On_DoubleTouchEnd += localDoubleTouchEnd;
            EasyInputHelper.On_SwipeDetected += localSwipe;
            EasyInputHelper.On_Accelerometer += localAccel;
            EasyInputHelper.On_Gyro += localGyro;
        }

        void OnDestroy()
        {
            EasyInputHelper.On_TouchStart -= localTouchStart;
            EasyInputHelper.On_TouchEnd -= localTouchEnd;
            EasyInputHelper.On_Touch -= localTouch;
            EasyInputHelper.On_LongTouchStart -= localLongTouchStart;
            EasyInputHelper.On_LongTouchEnd -= localLongTouchEnd;
            EasyInputHelper.On_LongTouch -= localLongTouch;
            EasyInputHelper.On_QuickTouchEnd -= localQuickTouchEnd;
            EasyInputHelper.On_DoubleTouchEnd -= localDoubleTouchEnd;
            EasyInputHelper.On_SwipeDetected -= localSwipe;
            EasyInputHelper.On_Accelerometer -= localAccel;
            EasyInputHelper.On_Gyro -= localGyro;
        }

        void Update()
        {
            if (!touching)
                touchValue.text = "";
            else
            {
                touchValue.text = "Fired";
                touching = false;
            }

            if (!longTouching)
                LongValue.text = "";
            else
            {
                LongValue.text = "Fired";
                longTouching = false;
            }

        }



        void localTouchStart(InputTouch touch)
        {
            touchStartValue.text = "Fired";
            StartCoroutine(ClearTextTouchStart(touchStartValue, .5f));
        }

        IEnumerator ClearTextTouchStart(Text textObject, float delay)
        {
            yield return new WaitForSeconds(delay);
            textObject.text = "";
        }

        void localTouchEnd(InputTouch touch)
        {
            touchEndValue.text = "Fired";
            StartCoroutine(ClearTextTouchEnd(touchEndValue, .5f));
        }

        IEnumerator ClearTextTouchEnd(Text textObject, float delay)
        {
            yield return new WaitForSeconds(delay);
            textObject.text = "";
        }

        void localTouch(InputTouch touch)
        {
            touching = true;
        }

        void localLongTouchStart(InputTouch touch)
        {
            LongStartValue.text = "Fired";
            StartCoroutine(ClearLongTextTouchStart(LongStartValue, .5f));
        }

        IEnumerator ClearLongTextTouchStart(Text textObject, float delay)
        {
            yield return new WaitForSeconds(delay);
            textObject.text = "";
        }

        void localLongTouchEnd(InputTouch touch)
        {
            LongEndValue.text = "Fired";
            StartCoroutine(ClearLongTextTouchEnd(LongEndValue, .5f));
        }

        IEnumerator ClearLongTextTouchEnd(Text textObject, float delay)
        {
            yield return new WaitForSeconds(delay);
            textObject.text = "";
        }

        void localLongTouch(InputTouch touch)
        {
            longTouching = true;
        }

        void localQuickTouchEnd(InputTouch touch)
        {
            quickEndValue.text = "Fired";
            StartCoroutine(ClearQuickTextTouchEnd(quickEndValue, .5f));
        }

        IEnumerator ClearQuickTextTouchEnd(Text textObject, float delay)
        {
            yield return new WaitForSeconds(delay);
            textObject.text = "";
        }

        void localDoubleTouchEnd(InputTouch touch)
        {
            doubleEndValue.text = "Fired";
            StartCoroutine(ClearDoubleTextTouchEnd(doubleEndValue, .5f));
        }

        IEnumerator ClearDoubleTextTouchEnd(Text textObject, float delay)
        {
            yield return new WaitForSeconds(delay);
            textObject.text = "";
        }

        void localSwipe(InputTouch touch)
        {
            swipeValue.text = "Fired";
            StartCoroutine(ClearSwipeTextTouchEnd(swipeValue, .5f));
        }

        IEnumerator ClearSwipeTextTouchEnd(Text textObject, float delay)
        {
            yield return new WaitForSeconds(delay);
            textObject.text = "";
        }

        void localAccel(Vector3 accel)
        {
            accelXValue.text = accel.x.ToString();
            accelYValue.text = accel.y.ToString();
            accelZValue.text = accel.z.ToString();
        }

        void localGyro(Vector3 gravity, Vector3 userAccel)
        {
            userAccelXValue.text = userAccel.x.ToString();
            userAccelYValue.text = userAccel.y.ToString();
            userAccelZValue.text = userAccel.z.ToString();
            gravityXValue.text = gravity.x.ToString();
            gravityYValue.text = gravity.y.ToString();
            gravityZValue.text = gravity.z.ToString();

        }

    }
}
