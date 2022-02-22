using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using EasyInput.Core;

namespace EasyInput.Misc
{

    [AddComponentMenu("EasyInputHelper/Miscellaneous/MotionDiagnostics")]
    public class MotionDiagnostics : MonoBehaviour
    {
        public Text userAccelXValue;
        public Text userAccelYValue;
        public Text userAccelZValue;
        public Text gravityXValue;
        public Text gravityYValue;
        public Text gravityZValue;
        public Text smoothUserAccelXValue;
        public Text smoothUserAccelYValue;
        public Text smoothUserAccelZValue;
        public Text smoothGravityXValue;
        public Text smoothGravityYValue;
        public Text smoothGravityZValue;
        public Text velocityXValue;
        public Text velocityYValue;
        public Text velocityZValue;
        public Text positionXValue;
        public Text positionYValue;
        public Text positionZValue;
        public Text orientationXValue;
        public Text orientationYValue;
        public Text orientationZValue;
        public Text rotationXValue;
        public Text rotationYValue;
        public Text rotationZValue;
        public Text totVelocityXValue;
        public Text totVelocityYValue;
        public Text totVelocityZValue;
        public Text totRotationXValue;
        public Text totRotationYValue;
        public Text totRotationZValue;



        void OnEnable()
        {
            EasyInputHelper.On_Motion += localMotion;
            EasyInputHelper.On_ClickStart += localClickStart;

        }

        void OnDestroy()
        {
            EasyInputHelper.On_Motion -= localMotion;
            EasyInputHelper.On_ClickStart -= localClickStart;
        }

        void Update()
        {
            
    }



        void localMotion (EasyInput.Core.Motion motion)
        {
            userAccelXValue.text = motion.currentRawUserAcceleration.x.ToString();
            userAccelYValue.text = motion.currentRawUserAcceleration.y.ToString();
            userAccelZValue.text = motion.currentRawUserAcceleration.z.ToString();
            gravityXValue.text = motion.currentRawGravity.x.ToString();
            gravityYValue.text = motion.currentRawGravity.y.ToString();
            gravityZValue.text = motion.currentRawGravity.z.ToString();
            smoothUserAccelXValue.text = motion.currentSmoothedUserAcceleration.x.ToString();
            smoothUserAccelYValue.text = motion.currentSmoothedUserAcceleration.y.ToString();
            smoothUserAccelZValue.text = motion.currentSmoothedUserAcceleration.z.ToString();
            smoothGravityXValue.text = motion.currentSmoothedGravity.x.ToString();
            smoothGravityYValue.text = motion.currentSmoothedGravity.y.ToString();
            smoothGravityZValue.text = motion.currentSmoothedGravity.z.ToString();
            velocityXValue.text = motion.currentVelocity.x.ToString();
            velocityYValue.text = motion.currentVelocity.y.ToString();
            velocityZValue.text = motion.currentVelocity.z.ToString();
            positionXValue.text = motion.currentRelativePositionSinceReset.x.ToString();
            positionYValue.text = motion.currentRelativePositionSinceReset.y.ToString();
            positionZValue.text = motion.currentRelativePositionSinceReset.z.ToString();
            orientationXValue.text = motion.currentOrientation.x.ToString();
            orientationYValue.text = motion.currentOrientation.y.ToString();
            orientationZValue.text = motion.currentOrientation.z.ToString();
            rotationXValue.text = motion.currentRotationRate.x.ToString();
            rotationYValue.text = motion.currentRotationRate.y.ToString();
            rotationZValue.text = motion.currentRotationRate.z.ToString();
            totVelocityXValue.text = motion.totalVelocitySinceReset.x.ToString();
            totVelocityYValue.text = motion.totalVelocitySinceReset.y.ToString();
            totVelocityZValue.text = motion.totalVelocitySinceReset.z.ToString();
            totRotationXValue.text = motion.totalRotationRateSinceReset.x.ToString();
            totRotationYValue.text = motion.totalRotationRateSinceReset.y.ToString();
            totRotationZValue.text = motion.totalRotationRateSinceReset.z.ToString();
        }

        void localClickStart (ButtonClick click)
        {
            if (click.button == EasyInputConstants.CONTROLLER_BUTTON.AButton)
            {
                EasyInputHelper.resetMotion();
            }

        }

    }
}
