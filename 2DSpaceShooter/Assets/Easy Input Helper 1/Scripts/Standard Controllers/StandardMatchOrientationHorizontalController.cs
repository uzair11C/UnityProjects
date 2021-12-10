using UnityEngine;
using System.Collections;
using EasyInput.Core;
using System;

namespace EasyInput.StandardControllers
{

    [AddComponentMenu("EasyInputHelper/Standard Controllers/StandardMatchOrientationHorizontalController")]
    public class StandardMatchOrientationHorizontalController : MonoBehaviour
    {
        public bool clampRotation = false;
        [Range(0f,180f)]
        public float clampRotationDegreesFromZero = 0f;
        public float sensitivity = 1f;
        [Tooltip("The smallest amount in degrees that we allow a change in rotation. This helps with shakiness at the expense of precision")]
        public float precision = 1f;

        //runtime variables
        Vector3 myRotation;
        float lastRotation = 0f;
        bool didRealUpdateLastFrame = false;


        void OnEnable()
        {
#if !UNITY_EDITOR && UNITY_TVOS
            EasyInputHelper.On_Gyro += localGyro;
#endif
        }

        void OnDestroy()
        {
#if !UNITY_EDITOR && UNITY_TVOS
            EasyInputHelper.On_Gyro -= localGyro;
#endif
        }

        void Start()
        {
            myRotation = this.transform.localRotation.eulerAngles;
        }

        // Update is called once per frame
        void Update()
        {
        }

        void localGyro(Vector3 gravity, Vector3 userAcceleration)
        {
            //save the last rotation
            if (didRealUpdateLastFrame)
            {
                didRealUpdateLastFrame = false;
                lastRotation = myRotation.y;
            }


            //because we are only modifying one component I don't need to copy into a local variable
            myRotation.y = EasyInputUtilities.relativeAngleInAxis(Vector3.up, -gravity, Vector3.forward);

            myRotation.y *= -sensitivity;

            //we need to adjust for if the z is parallel with gravity ( y undefined)
            if (gravity.x > .97 || gravity.x < -.97)
            {
                //all the way forward or back
                myRotation.y = lastRotation;
            }

            //clamp the up/down rotation if set this way
            if (clampRotation && clampRotationDegreesFromZero != 0f)
            {
                if (myRotation.y <= (360f - clampRotationDegreesFromZero) && myRotation.y >= clampRotationDegreesFromZero)
                {
                    if (myRotation.y <= 180f)
                    {
                        myRotation.y = clampRotationDegreesFromZero;
                    }
                    else if (myRotation.y > 180f)
                    {
                        myRotation.y = (360f - clampRotationDegreesFromZero);
                    }
                }
            }

            //at this point we'd have the correct result but it would be very shaky
            //lerp or slerp doesn't seem to be good enough so manually make it smooth
            if ((lastRotation - myRotation.y) > precision || (lastRotation - myRotation.y) < -precision)
            {
                //only moving in increments of tilt precesion degrees
                didRealUpdateLastFrame = true;
                transform.localRotation = Quaternion.Euler(myRotation);
            }

        }


    }

}

