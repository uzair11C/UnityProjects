using UnityEngine;
using System.Collections;
using EasyInput.Core;

namespace EasyInput.Misc
{
    [AddComponentMenu("EasyInputHelper/Miscellaneous/CombinedButtonAndTilt")]
    public class CombinedButtonAndTilt : MonoBehaviour
    {
        public GameObject prefabBall;
        public GameObject spawn;
        public GameObject player;
        public float tiltSensitivity = .5f;
        [Tooltip("The smallest amount in degrees that we allow a change in rotation. This helps with shakiness at the expense of precision")]
        public float tiltPrecision = 1f;
        public float buttonSensitivity = 3f;

        Transform myTransform;
        Transform spawnTransform;
        float accumulatedRotation = 0f;
        Vector3 myRotation;
        float lastRotation = 0f;
        bool didRealUpdateLastFrame = false;


        void OnEnable()
        {
            EasyInputHelper.On_LongClick += localOnLongClick;
            EasyInputHelper.On_QuickClickEnd += localOnQuickEnd;
            EasyInputHelper.On_Gyro += localGyro;
        }

        void OnDestroy()
        {
            EasyInputHelper.On_LongClick -= localOnLongClick;
            EasyInputHelper.On_QuickClickEnd -= localOnQuickEnd;
            EasyInputHelper.On_Gyro -= localGyro;
        }

        // Use this for initialization
        void Start()
        {
            myTransform = this.transform;
            spawnTransform = spawn.transform;
        }

        // Update is called once per frame
        void Update()
        {
        }

        void localOnLongClick (ButtonClick click)
        {
            if (click.button == EasyInputConstants.CONTROLLER_BUTTON.AButton)
            {
                accumulatedRotation -= buttonSensitivity * Time.deltaTime * 100f;
            }
            else if (click.button == EasyInputConstants.CONTROLLER_BUTTON.XButton)
            {
                accumulatedRotation += buttonSensitivity * Time.deltaTime * 100f;
            }

        }

        void localOnQuickEnd (ButtonClick click)
        {
            if (click.button == EasyInputConstants.CONTROLLER_BUTTON.XButton)
            {
                GameObject newObject = (GameObject)Instantiate(prefabBall, spawnTransform.transform.position, spawnTransform.transform.rotation);
                Rigidbody newRigidbody = newObject.GetComponent<Rigidbody>();
                newRigidbody.AddForce((spawnTransform.transform.position - myTransform.transform.position) * 1000f);
            }

        }

        void localGyro(Vector3 gravity, Vector3 userAcceleration)
        {
            //save the last rotation
            if (didRealUpdateLastFrame)
            {
                didRealUpdateLastFrame = false;
                lastRotation = myRotation.y;
            }

            //reset the rotation
            myRotation.y = 0f;

#if !UNITY_EDITOR && UNITY_TVOS
            //because we are only modifying one component I don't need to copy into a local variable
            myRotation.y = EasyInputUtilities.relativeAngleInAxis(Vector3.up, -gravity, Vector3.forward);

            myRotation.y *= -tiltSensitivity;

            //we need to adjust for if the z is parallel with gravity ( y undefined)
            if (gravity.x > .97 || gravity.x < -.97)
            {
                //all the way forward or back
                myRotation.y = lastRotation;
            }
#endif

            myRotation.y += accumulatedRotation;

            //at this point we'd have the correct result but it would be very shaky
            //lerp or slerp doesn't seem to be good enough so manually make it smooth
            if ((lastRotation - myRotation.y) > tiltPrecision || (lastRotation - myRotation.y) < -tiltPrecision)
            {
                //only moving in increments of tilt precesion degrees
                didRealUpdateLastFrame = true;
                player.transform.localRotation = Quaternion.Euler(myRotation);
            }

        }


    }
}
