#include "lightSensor.h"
task main()
{
	calibrate(S1);
	while(true){
		if(isWhite(S1)){
			nxtDisplayCenteredTextLine(3, "Bianco");
		}else if(isBlack(S1)){
			nxtDisplayCenteredTextLine(3, "Nero");
		}
	}
}
