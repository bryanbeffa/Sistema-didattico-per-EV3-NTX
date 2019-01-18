#pragma config(Sensor, S1,     distance,       sensorSONAR)
#pragma config(Sensor, S4,     sound,          sensorSoundDB)

#include "wait.h";

void testTouch(int port, int motorPort){
		motor[motorPort] = 20;
		waitTouch(port);
		writeDebugStreamLine("ciao");
}

void testRotations(int port, int rot, int speed){
		waitRotations(port, rot, speed);
}

void testDegrees(int port, int deg, int speed){
		waitDegrees(port, deg, speed);
}

void testTime(long millis){
		motor[motorA] = 20;
		waitTime(millis);
}

void testSound(int port, int threshold){
		waitSound(port, threshold);
}

task main()
{
	/*
	//wait rotations
	testRotations(0, 1, 30);

	//wait degrees
	testDegrees(0, 360, 20);

	//wait time
	testTime(1000);*/

	//



}

/**
	 * waitTouch
	 * waitLight
	 * waitDistance
	 * waitSound
	 * waitTime				funziona check
	 * waitRotations 	funziona check
	 * waitDegrees 		funziona check
	 */
