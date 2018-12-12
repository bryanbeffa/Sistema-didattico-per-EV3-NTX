/**
* Attributo rappresentante la porta utilizzata dal primo sensore tattile.
* Impostato di default sulla prima porta "S1".
*/
string firstSensorPort = "S1";

/**
* Attributo rappresentante la porta utilizzata dal secondo sensore tattile.
* Impostato di default sulla prima porta "S2".
*/
string secondSensorPort = "S1";

/**
* Metodo che consente di impostare la porta in cui è collegato il sensore indicato.
* @param port La porta in cui è collegato il sensore.
* @param sensor Il sensore di cui si vuole impostare la porta. Se si passa 0 è il primo sensore mentre se si passa 1 è il secondo.
*/
void setTouchSensorPort(tSensors port, int sensor){
	if(sensor == 0){
		firstSensorPort = port;
	}else if(sensor == 1){
		secondSensorPort = port;
	}
}

/**
* Metodo che controlla se il sensore tattile viene premuto o meno.
* @param sensor Il sensore di cui si vuole controllare lo stato. Se si passa 0 è il primo sensore mentre se si passa 1 è il secondo.
* @return Lo stato del sensore tattile. Se true è premuto mentre se false non lo è.
*/
bool sensorPressed(int sensor){
	if(sensor == 0){
		if(SensorValue(firstSensorPort) < 250){
			return true;
		}else{
			return false;
		}
	}else if(sensor == 1){
		if(SensorValue(secondSensorPort) < 250){
			return true;
		}else{
			return false;
		}
	}
	return false;
}
