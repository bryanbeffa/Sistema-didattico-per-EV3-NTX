/**
 * Variabile globale che indica la velocità.
 * Valore di default = 10
 */
int speed = 10;

/**
 * Variabile globale che indica la porta a cui è collegato il motore.
 * Valore di default = A
 */
string motorPort = motorA;

/**
 * Variabile globale che indica la porta a cui è collegato il sensore di suono.
 * Valore di default = 1
 */
string sensorPort = S1;

/**
 * Metodo che permette di settare la porta del motore.
 */
void setMotorPort(string port){
	motorPort = port;
}

/**
 * Metodo che permette di settare la porta del sensore.
 */
void setSensorPort(string port){
	sensorPort = port;
}

/**
 * Metodo che fa ruotare il motore in base alla velocità del motore
 */
void soundMove(){
	nxtDisplayCenteredTextLine(3, "cazzoo");

	int suonoMin = 0;
	int suonoMax = 0;

	bool checkMin = false;
	bool checkMax = false;

 	while(true){
 		if(nNxtButtonPressed == 1){
			suonoMin = SensorValue[sensorPort];
  		nxtDisplayCenteredTextLine(3, "MIN: %d", suonoMin);
  		checkMin = true;
		}
		if(nNxtButtonPressed == 2){
			suonoMax = SensorValue[sensorPort];
  		nxtDisplayCenteredTextLine(4, "MAX: %d", suonoMax);
  		checkMax = true;
		}
		if(checkMin && checkMax){
 			motor[motorPort] = (100/(suonoMax-suonoMin))*SensorValue[sensorPort];
		}

 	}
}
