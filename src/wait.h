void waitTouch(int port){
	while(true){
		if(SensorValue[port] < 500){
			break;
		}
	}
}
void waitLight(int port, int threshold){
	while(true){
		if(SensorValue[port] >= threshold){
			break;
		}
	}
}
bool waitDistance(int port, int distance){
	while(true){
		if(SensorValue[port] <= distance){
			break;
		}
	}
}
bool waitSound(int port, int threshold){
	while(true){
		if(SensorValue[port] >= threshold){
			break;
		}
	}
}
bool waitTime(int port, long millis){

}
bool waitRotations(int port, int times){

}
bool waitDegrees(int port, int degree){

}
