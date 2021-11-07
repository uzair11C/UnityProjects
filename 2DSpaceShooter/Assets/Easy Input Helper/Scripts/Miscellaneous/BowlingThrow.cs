using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
using EasyInput.Core;
using System;

namespace EasyInput.StandardControllers
{

    [AddComponentMenu("EasyInputHelper/Miscellaneous/BowlingThrow")]
    public class BowlingThrow : MonoBehaviour
    {
        public BowlingFollow follow;
        public Transform aimArrow;
        public float aimDegreesClamp = 40f;

        bool throwInProcess = false;
        bool preventThrowAgain = false;
        Vector3 temp;
        Vector3 currentThrow = new Vector3(0f,0f,0f);
        Vector3 currentTorque = new UnityEngine.Vector3(0f, 0f, 0f);
        //Vector3 testThrow = new Vector3(0f, 0f, 450f);
        //Vector3 testTorque = new Vector3(0f, 0f, 0f);
        Rigidbody myRigidbody;
        float degreesOff = 0f;
        PhysicMaterial myPhysics;


        void OnEnable()
        {
            EasyInputHelper.On_ClickStart += initiateThrow;
            EasyInputHelper.On_ClickEnd += endThrow;
            EasyInputHelper.On_Motion += trackThrow;
        }

        void OnDestroy()
        {
            EasyInputHelper.On_ClickStart -= initiateThrow;
            EasyInputHelper.On_ClickEnd -= endThrow;
            EasyInputHelper.On_Motion -= trackThrow;
        }

        void Start()
        {
            myRigidbody = transform.GetComponent<Rigidbody>();
            myRigidbody.maxAngularVelocity = 70f;

            myPhysics = transform.GetComponent<SphereCollider>().material;
        }

        // Update is called once per frame
        void Update()
        {
            if (throwInProcess)
            {
                temp = transform.position;
                temp.y = 1.5f;
                transform.position = temp;
                myRigidbody.velocity = Vector3.zero;
            }
            else
            {
                if (transform.position.z > 0)
                {
                    myPhysics.dynamicFriction = transform.position.z / 20f;
                    myPhysics.staticFriction = transform.position.z / 20f;
                }
            }
        }

        void initiateThrow(ButtonClick click)
        {
            if (click.button == EasyInputConstants.CONTROLLER_BUTTON.AButton && !preventThrowAgain)
            {
                //reset the motion variables
                EasyInputHelper.resetMotion();
                throwInProcess = true;
                follow.stopFollow();
            }
        }

        void endThrow(ButtonClick click)
        {
            if (click.button == EasyInputConstants.CONTROLLER_BUTTON.AButton && !preventThrowAgain)
            {
                //reset the motion variables
                EasyInputHelper.resetMotion();
                throwInProcess = false;
                preventThrowAgain = true;
                temp = transform.position;
                temp.y = .5f;
                transform.position = temp;

                //here we do the throw after some sanity checks
                myRigidbody.AddRelativeForce(currentThrow, ForceMode.Impulse);
                myRigidbody.AddRelativeTorque(currentTorque, ForceMode.Impulse);


                //the sudden drop of the ball makes it want to bounce off the alley prevent this in the rigidbody
                temp = myRigidbody.velocity;
                temp.y = 0f;
                myRigidbody.velocity = temp;

                //start clock to reset the scene
                Invoke("resetScene", 8f);
            }
        }

        void trackThrow(EasyInput.Core.Motion motion)
        {
            if (throwInProcess)
            {
                //there are a couple of factors that you see in a bowling motion if you look at the telemetry
                //left or right handed can be determined from the x axis user acceleration during the backswing (doesn't matter in this demo but if we had animation of a player could be used for that)
                //hardness of throw can use the user acceleration z axis during the forward swing (higher value harder throw)
                //spin can be determined from the x and z axis during forward part of the throw

                //aim of shot is the hardest as some drift will have already occured (the aim is really only dictated by
                //the direction going the last few frames before release of the button) best place to gauge this is the velocity
                //vector but there will have been some drift and in tests the sensors on board aren't good enough
                //so instead user will actually pick aim before throw

                //base hardness off current velocity.z (light throw tends to be around 1.0 and really hard around 3.0)
                //in terms of the game the lightest throw should be 450 and the hardest be 700
                if (motion.totalVelocitySinceReset.magnitude > 10f)
                {
                    currentThrow.z = 365f + (85f * motion.currentVelocity.z);
                }
                else
                {
                    //we hit and released the button but we didn't really do the motion
                    currentThrow.z = 10f;
                }

                //calculate the x component off the previously detemined aim (degreesOff)
                currentThrow.x = degreesOff * (currentThrow.z / 100);

                //base spin off of currentorientation.x (none = < 5f)

                if (motion.currentOrientation.x < 20f && motion.currentOrientation.x > -20f)
                {
                    currentTorque.z = 0f;
                }
                else
                {
                    currentTorque.z = motion.currentOrientation.x / 8f;
                }


            }
            else if (!throwInProcess && !preventThrowAgain)
            {
                if (motion.currentOrientation.x < aimDegreesClamp && motion.currentOrientation.x > -aimDegreesClamp)
                {
                    temp = aimArrow.localRotation.eulerAngles;
                    temp.y = 270f - motion.currentOrientation.x;
                    aimArrow.localRotation = Quaternion.Euler(temp);

                    //aim will get expressed in the x component of currentThrow and is a percentage of the z component
                    //number of degrees of aim arrow is rotation times current throw z component divided by 100
                    //we won't know the z component until we throw the ball
                    degreesOff = aimArrow.localRotation.eulerAngles.y - 270f;
                }
            }
        }

        void resetScene()
        {
            SceneManager.LoadScene("bowlingExample");
        }


    }

}

