/**
* Attributo rappresentante la porta utilizzata dal primo sensore di luce.
* Impostato di default sulla prima porta "S1".
*/
string firstSensorPort = "S1";

/**
* Attributo rappresentante la porta utilizzata dal secondo sensore di luce.
* Impostato di default sulla prima porta "S2".
*/
string secondSensorPort = "S1";

int white = 0;
int black = 0;

void calibrate(tSensors port){
	bool checkBlack = false;
	bool checkWhite = false;
	while(checkWhite == false  && checkBlack == false){
		if(nNxtButtonPressed == 1){
			black = SensorValue[port];
  		nxtDisplayCenteredTextLine(3, "Nero: %d", black);
  		checkBlack = true;
		}else if(nNxtButtonPressed == 2){
			white = SensorValue[port];
			nxtDisplayCenteredTextLine(3, "Bianco: %d", white);
			checkWhite = true;
		}
		sleep(100);
	}
}
bool isBlack(tSensors port){
	if(SensorValue[port] <= black){
			return true;
	}
	return false
}
bool isWhite(tSensors port){
	if(SensorValue[port] >= white){
			return true;
	}
	return false
}
