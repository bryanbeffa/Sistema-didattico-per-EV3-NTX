#include "sensoreTattile.h";
task main()
{
	setTouchSensorPort(S2, 0);
	setTouchSensorPort(S4, 1);
	int down = 0;
	while(true){

	if(sensorPressed(0) && sensorPressed(1)){
		nxtDisplayCenteredTextLine(3, "Premuto %d", down);
		wait(0.1);
		down++;
	}
	}
}
