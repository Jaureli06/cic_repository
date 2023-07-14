#include "DeviceDriverSet_Movement.h"

extern DeviceDriverSet_Motor AppMotor;

/*运动方向控制序列*/
enum SmartRobotCarMotionControl
{
  forward,       //(1)
  backward,      //(2)
  left,          //(3)
  right,         //(4)
  LeftForward,   //(5)
  LeftBackward,  //(6)
  RightForward,  //(7)
  RightBackward, //(8)
  stop        //(9)
};               //direction方向:（1）、（2）、 （3）、（4）、（5）、（6）

struct Application_xxx
{
  SmartRobotCarMotionControl Motion_Control;
};

extern Application_xxx Application_SmartRobotCarxxx0;

static void moveRobot(SmartRobotCarMotionControl direction)
{
  static uint8_t directionRecord = 0;
  uint8_t Kp, UpperLimit;
  switch (direction)
  {
  case /* constant-expression */
      forward:
    /* code */
      AppMotor.DeviceDriverSet_Motor_control(/*direction_A*/ direction_just, /*speed_A*/ 100,
                                             /*direction_B*/ direction_just, /*speed_B*/ 100, /*controlED*/ control_enable); //Motor control
    break;
  case /* constant-expression */ backward:
    /* code */

      AppMotor.DeviceDriverSet_Motor_control(/*direction_A*/ direction_back, /*speed_A*/ 100,
                                             /*direction_B*/ direction_back, /*speed_B*/ 100, /*controlED*/ control_enable); //Motor control
    break;
  case /* constant-expression */ left:
   
    AppMotor.DeviceDriverSet_Motor_control(/*direction_A*/ direction_just, /*speed_A*/ 180,
                                           /*direction_B*/ direction_back, /*speed_B*/ 180, /*controlED*/ control_enable); //Motor control
    break;
  case /* constant-expression */ right:
    
    AppMotor.DeviceDriverSet_Motor_control(/*direction_A*/ direction_back, /*speed_A*/ 180,
                                           /*direction_B*/ direction_just, /*speed_B*/ 180, /*controlED*/ control_enable); //Motor control
    break;
  case /* constant-expression */ LeftForward:
    /* code */
    AppMotor.DeviceDriverSet_Motor_control(/*direction_A*/ direction_just, /*speed_A*/ 180,
                                           /*direction_B*/ direction_just, /*speed_B*/ 180 / 2, /*controlED*/ control_enable); //Motor control
    break;
  case /* constant-expression */ LeftBackward:
    AppMotor.DeviceDriverSet_Motor_control(/*direction_A*/ direction_back, /*speed_A*/ 180,
                                           /*direction_B*/ direction_back, /*speed_B*/ 180 / 2, /*controlED*/ control_enable); //Motor control
    break;
  case /* constant-expression */ RightForward:
    AppMotor.DeviceDriverSet_Motor_control(/*direction_A*/ direction_just, /*speed_A*/ 180 / 2,
                                           /*direction_B*/ direction_just, /*speed_B*/ 180, /*controlED*/ control_enable); //Motor control
    break;
  case /* constant-expression */ RightBackward:
    AppMotor.DeviceDriverSet_Motor_control(/*direction_A*/ direction_back, /*speed_A*/ 180 / 2,
                                           /*direction_B*/ direction_back, /*speed_B*/ 180, /*controlED*/ control_enable); //Motor control
    break;
  case /* constant-expression */ stop:
    AppMotor.DeviceDriverSet_Motor_control(/*direction_A*/ direction_void, /*speed_A*/ 0,
                                           /*direction_B*/ direction_void, /*speed_B*/ 0, /*controlED*/ control_enable); //Motor control
    break;
  default:
    break;
  }
}





