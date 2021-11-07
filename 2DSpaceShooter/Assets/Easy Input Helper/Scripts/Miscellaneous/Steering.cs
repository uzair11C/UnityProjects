using UnityEngine;
using System;
using System.Collections;
using EasyInput.Core;

namespace EasyInput.Misc
{

    [AddComponentMenu("EasyInputHelper/Miscellaneous/Steering")]
    public class Steering : MonoBehaviour
    {

        Rigidbody myRigidbody;
        Vector3 myAccel = Vector3.zero;
        bool gasPressed;
        bool brakePressed;
        float horizontal, vertical;
        float normalizeDegrees = 90f;
        float sensitivity = 10f;
        Vector3 actionVectorPosition;
        Vector3 computerVector;

        void OnEnable()
        {
#if !UNITY_EDITOR && UNITY_TVOS
            EasyInputHelper.On_Accelerometer += localAccelerometer;
#endif
            EasyInputHelper.On_ClickStart += localClickStart;
            EasyInputHelper.On_ClickEnd += localClickEnd;

        }

        void OnDestroy()
        {
#if !UNITY_EDITOR && UNITY_TVOS
            EasyInputHelper.On_Accelerometer -= localAccelerometer;
#endif
            EasyInputHelper.On_Click -= localClickStart;
            EasyInputHelper.On_Click -= localClickEnd;
        }

        void Start()
        {
            myRigidbody = this.GetComponent<Rigidbody>();
        }

        void Update()
        {
            //gas
            if (gasPressed)
            {
                if (myRigidbody.velocity.magnitude > 1f)
                    myRigidbody.AddForce(myRigidbody.velocity * sensitivity * .5f);
                else
                    myRigidbody.AddForce((this.transform.position - Camera.main.transform.position) * sensitivity * 5f);
            }

            //brake
            if (brakePressed)
            {
                if (myRigidbody.velocity.magnitude > 1f)
                    myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude);
                else
                    myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude * 10f);
            }

            //steering
            steerBall(myAccel);
        }


        public void steerBall(Vector3 accel)
        {

            //accelerometers due to gravity can really only sense 2 axis (can't filter out gravity)
            //here we convert those 2 axis into horizontal and vertical and normalize
            if (accel != Vector3.zero)
            {
                horizontal = EasyInputUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.forward) / normalizeDegrees;
                vertical = EasyInputUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.right) / normalizeDegrees;

                horizontal *= -sensitivity;
                vertical *= -sensitivity;
            }
            else
            {
                horizontal = 0f;
                vertical = 0f;
            }

            actionVectorPosition.x = horizontal;
            actionVectorPosition.y = 0f;
            actionVectorPosition.z = vertical;

            myRigidbody.AddForce(actionVectorPosition);

        }

        void localAccelerometer(Vector3 accel)
        {
            myAccel = accel;
        }

        void localClickStart(ButtonClick button)
        {
            if (button.button == EasyInputConstants.CONTROLLER_BUTTON.AButton)
            {
                brakePressed = true;
            }
            else if (button.button == EasyInputConstants.CONTROLLER_BUTTON.XButton || button.button == EasyInputConstants.CONTROLLER_BUTTON.BButton)
            {
                gasPressed = true;
            }
        }

        void localClickEnd(ButtonClick button)
        {
            if (button.button == EasyInputConstants.CONTROLLER_BUTTON.AButton)
            {
                brakePressed = false;
            }
            else if (button.button == EasyInputConstants.CONTROLLER_BUTTON.XButton || button.button == EasyInputConstants.CONTROLLER_BUTTON.BButton)
            {
                gasPressed = false;
            }
        }

    }
}