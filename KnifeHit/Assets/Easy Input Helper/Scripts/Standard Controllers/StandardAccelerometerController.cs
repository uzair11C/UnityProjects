using UnityEngine;
using System.Collections;
using EasyInput.Core;
using System;

namespace EasyInput.StandardControllers
{

    [AddComponentMenu("EasyInputHelper/Standard Controllers/StandardAccelerometerController")]
    public class StandardAccelerometerController : MonoBehaviour
    {
        public EasyInputConstants.AXIS tiltHorizontal = EasyInputConstants.AXIS.XAxis;
        public EasyInputConstants.AXIS tiltVertical = EasyInputConstants.AXIS.YAxis;
        public EasyInputConstants.ACTION_TYPE action = EasyInputConstants.ACTION_TYPE.Position;
        public float sensitivity = 1f;

        //runtime variables
        Vector3 actionVector3;
        float horizontal;
        float vertical;
        float normalizeDegrees = 90f;


        void OnEnable()
        {
#if !UNITY_EDITOR && UNITY_TVOS
            EasyInputHelper.On_Accelerometer += localAccelerometer;
#endif
        }

        void OnDestroy()
        {
#if !UNITY_EDITOR && UNITY_TVOS
            EasyInputHelper.On_Accelerometer -= localAccelerometer;
#endif
        }

        // Update is called once per frame
        void Update()
        {
        }

        void localAccelerometer(Vector3 accel)
        {

            //accelerometers due to gravity can really only sense 2 axis (can't filter out gravity)
            //here we convert those 2 axis into horizontal and vertical and normalize
            horizontal = EasyInputUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.forward) / normalizeDegrees;
            vertical = EasyInputUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.right) / normalizeDegrees;

            horizontal *= -sensitivity * Time.deltaTime * 100f;
            vertical *= -sensitivity * Time.deltaTime * 100f;

            actionVector3 = EasyInputUtilities.getControllerVector3(horizontal, vertical, tiltHorizontal, tiltVertical);

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

}

