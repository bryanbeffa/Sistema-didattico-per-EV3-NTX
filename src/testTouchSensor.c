#include "touchSensor.h";
task main()
{
	setTouchSensorPort(S4, 0);
	int down = 0;
	while(true){

	if(sensorPressed(0)){
		nxtDisplayCenteredTextLine(3, "Premuto %d", down);
		wait(0.1);
		down++;
	}
	}
}
