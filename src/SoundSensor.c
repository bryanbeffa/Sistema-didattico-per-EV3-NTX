task main()
{
	int suonoMin = 0;

	bool checkMin = false;
 	while(true){
 		if(nNxtButtonPressed == 1){
			suonoMin = SensorValue[S2];
  		nxtDisplayCenteredTextLine(3, "MIN: %d", suonoMin);
  		checkMin = true;
		}
		if(checkMin){
 			motor[motorA] = SensorValue[S2]-suonoMin;
		}

 	}
}
