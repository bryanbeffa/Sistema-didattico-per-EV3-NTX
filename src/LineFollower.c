#pragma config(Sensor, S1,     distance,       sensorSONAR)
#pragma config(Sensor, S2,     lightA,         sensorLightActive)
#pragma config(Sensor, S3,     lightB,         sensorLightActive)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "wait.h";

/**
 * Line follower proporzionale (con margine di errore) utilizzando i metodi della libreria wait.
 *
 * @author Bryan Beffa
 * @author Matteo Forni
 * @version 11.01.2019
 */
task main()
{
	int white;
	int black;
	bool button = false;
	while(!button)
  {
    if (nNxtButtonPressed == 1)
    {
      white = (SensorValue[lightA]+SensorValue[lightB])/2;
      writeDebugStreamLine("bianco: %d", white);
      button = true;
    }
	}
	button = false;
	while (!button)
  {
    if (nNxtButtonPressed == 2)
    {
      black = (SensorValue[lightA]+SensorValue[lightB])/2;
      writeDebugStreamLine("nero: %d", black);
      button = true;
    }
	}

	while(true){
		//margine consentito
		double margin = 1.5;

		//soglia di luce riflessa
		int threshold = 50;

		//calcolo l'errore
		int errorA = SensorValue[lightA] - (white+black)/2;
		int errorB = SensorValue[lightB] - (white+black)/2;

		//calcolo la velocit�
		double speedA = errorA * margin;
		double speedB = errorB * margin;

		//setto la velocit� al motore collegato alla porta A e alla porta B
		motor[motorB] = speedB+15;
		motor[motorA] = speedA-15;
		waitTime(10);
	}
}
