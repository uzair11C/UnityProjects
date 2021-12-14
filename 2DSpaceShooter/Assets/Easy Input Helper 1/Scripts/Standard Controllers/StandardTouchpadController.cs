using UnityEngine;
using System.Collections;
using EasyInput.Core;
using System;

namespace EasyInput.StandardControllers
{

    [AddComponentMenu("EasyInputHelper/Standard Controllers/StandardTouchpadController")]
    public class StandardTouchpadController : MonoBehaviour
    {
        public EasyInputConstants.AXIS axisHorizontal = EasyInputConstants.AXIS.XAxis;
        public EasyInputConstants.AXIS axisVertical = EasyInputConstants.AXIS.YAxis;
        public EasyInputConstants.ACTION_TYPE action = EasyInputConstants.ACTION_TYPE.Position;
        public float sensitivity = 1f;

        //runtime variables
        Vector2 lastFrameTouch = EasyInputConstants.NOT_TOUCHING;
        Vector3 actionVector3;
        float horizontal;
        float vertical;

        public Transform player;
        public GameObject bullet;
        public Transform L_A_P;
        public Transform R_A_P;

        public float attackTimer = 0.15f;
        private float currentAttackTime;
        private bool canAttack;

        void OnEnable()
        {
            EasyInputHelper.On_Touch += localAxis;
            EasyInputHelper.On_TouchEnd += localAxisEnd;
        }

        void OnDestroy()
        {
            EasyInputHelper.On_Touch -= localAxis;
            EasyInputHelper.On_TouchEnd -= localAxisEnd;
        }

        void Start()
        {
            currentAttackTime = attackTimer;
        }

        // Update is called once per frame
        void Update()
        {
            Vector3 pos = transform.position;

            Attack();
            if (pos.y < -3.6f)
            {
                pos.y = -3.6f;
                transform.position = pos;
            }

            if (pos.y > 3.6f)
            {
                pos.y = 3.6f;
                transform.position = pos;
            }

            if (pos.x > 8.22f)
            {
                pos.x = 8.22f;
                transform.position = pos;
            }

            if (pos.x < -8.22f)
            {
                pos.x = -8.22f;
                transform.position = pos;
            }
        }

        public void Attack()
        {
            attackTimer += Time.deltaTime;

            if (attackTimer > currentAttackTime)
            {
                canAttack = true;
            }

            if (canAttack)
            {
                canAttack = false;
                attackTimer = 0f;
                shoot();
            }
        }

        void shoot()
        {
            Instantiate(bullet,L_A_P.position,Quaternion.identity);
            Instantiate(bullet, R_A_P.position, Quaternion.identity);

        }

        void localAxisEnd(InputTouch touch)
        {
            //we just ended a touch so reset the last frame
            lastFrameTouch = EasyInputConstants.NOT_TOUCHING;
        }

        void localAxis(InputTouch touch)
        {
            //first check to see if this is the first frame
            if (lastFrameTouch == EasyInputConstants.NOT_TOUCHING)
            {
                lastFrameTouch = touch.currentTouchPosition;
                return;
            }

            //otherwise is a continuation
            horizontal = (touch.currentTouchPosition.x - lastFrameTouch.x) * sensitivity * Time.deltaTime * 100f;
            vertical = (touch.currentTouchPosition.y - lastFrameTouch.y) * sensitivity * Time.deltaTime * 100f;
            actionVector3 = EasyInputUtilities.getControllerVector3(horizontal, vertical, axisHorizontal, axisVertical);

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

            lastFrameTouch = touch.currentTouchPosition;
        }


    }

}

