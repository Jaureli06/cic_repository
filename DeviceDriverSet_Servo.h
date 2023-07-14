/*
 * @Author: ELEGOO
 * @Date: 2019-10-22 11:59:09
 * @LastEditTime: 2020-06-12 14:45:27
 * @LastEditors: Changhua
 * @Description: conqueror robot tank
 * @FilePath: 
 */
#ifndef Device_Driver_Set_Servo_H
#define Device_Driver_Set_Servo_H

/*Servo*/
#include <Servo.h>
class DeviceDriverSet_Servo
{
public:
  void setupServo(unsigned int Position_angle);
#if _Test_DeviceDriverSet
  void testServo(void);
#endif
  void setServoPosition(unsigned int Position_angle);

private:
#define PIN_Servo_z 10
};

#endif
