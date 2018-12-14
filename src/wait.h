void waitTouch(int port){
	while(true){
		if(SensorValue[port] < 500){
			break;
		}
	}
}
void waitLight(tSensors port, int threshold){
	while(true){
		if(SensorValue(port) < threshold){
			break;
		}
	}
}
void waitDistance(tSensors port, int distance){
	while(true){
		if(SensorValue(port) >= distance){
			break;
		}
	}
}
void waitSound(int port, int threshold){
	while(true){
		if(SensorValue[port] >= threshold){
			break;
		}
	}
}
void waitTime(int port, long millis){

}
void waitRotations(int port, int times){

}
void waitDegrees(int port, int degree){

}
