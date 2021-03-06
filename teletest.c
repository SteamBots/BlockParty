#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorAlpha,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorBeta,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     motorGamma,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     motorDelta,    tmotorTetrix, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"
task main()
{
	while(true)
	{
		getJoystickSettings(joystick);

		if(joy2Btn(2) == 1)
		{
			motor[motorGamma] = 50;
			wait1Msec(100);
			motor[motorGamma] = 0;
			}

		if(joy2Btn(3) == 1)
		{
			motor[motorGamma] = -50;
			wait1Msec(100);
			motor[motorGamma] = 0;
			}

		if(joy2Btn(1) == 1)
		{
			motor[motorDelta] = 50;
			wait1Msec(10);
			motor[motorGamma] = 0;
			}

	 	motor[motorAlpha] = joystick.joy1_y1;
		motor[motorBeta] = joystick.joy1_y2/-1;
  }
}
