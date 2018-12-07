int sensorBlack = 0;
task main()
{
	string porta = "S1";
	string motore1 = "motorA";
	string motore2 = "motorB";
	sensorBlack = calibrate(porta);
	lineFollower(porta, motore1, motore2);
}

int calibrate(string sensorPort)
{
	int black = 0;
	bool checkBlack = false;
	while(true){
		if(nNxtButtonPressed == 1){
			black = SensorValue[sensorPort];
  		nxtDisplayCenteredTextLine(3, "Nero: %d", black);
  		checkBlack = true;
		}
		if(checkBlack)
		{
			return black;
		}
	}
}
void lineFollower(string sensorPort, string firstMotorPort, string secondMotorPort)
{
	sensorValue = SensorValue[sensorPort];
	while(true)
	{
		if(sensorValue < sensorWhite)
		{
			motor[firstMotorPort] = 100;
			motor[secondMotorPort] = 50;
		}else if(SensorValue > sensorBlack)
		{
			motor[firstMotorPort] = 50;
			motor[secondMotorPort] = 100;
		}
	}
}
