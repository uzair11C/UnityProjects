using UnityEngine;
using System.Collections;

namespace EasyInput.Core
{
    public class Motion
    {
        //It is a siri remote hardware limitation that it cannot determine orientation on the axis that is parallel with
        //gravity. Therefore orientation and rotation rate are not fully acurate (can only be acurate in 2 axis at a time)
        //Also if your remote orientation changes so does the inaccurate axis so over time if you change orientation
        //the values will become inaccurate.
        //Position tracking over time also becomes inaccurate but that is due to limitations with a gyro/accel only setup.
        //in addition to infering postion over time (without knowing starting state) so its best to use with a starting
        //state of the remote being still when reseting    

        //real data
        public float lastResetTimestamp;
        public Vector3 currentRawUserAcceleration;
        public Vector3 currentRawGravity;
        public Vector3 currentSmoothedUserAcceleration;
        public Vector3 currentSmoothedGravity;
        public Vector3 lastFrameSmoothedUserAcceleration;
        public Vector3 lastFrameSmoothedGravity;

        //derived data for convience
        public Vector3 currentVelocity; //assumes remote was still at time of reset
        public Vector3 lastFrameVelocity;
        public Vector3 currentRelativePositionSinceReset; //assumes remote was still at time of reset
        public Vector3 currentOrientation; //based on gravity and can't determine current axis parallel with gravity
        public Vector3 lastFrameOrientation;
        public Vector3 currentRotationRate; //based on gravity vs previous frame
        public Vector3 lastFrameRotationRate;
        public Vector3 totalVelocitySinceReset; //a sum of all the velocities (useful to calculate the average)
        public Vector3 totalRotationRateSinceReset; //a sum of all the rotation rates (useful to calculate the average)
    }
}
