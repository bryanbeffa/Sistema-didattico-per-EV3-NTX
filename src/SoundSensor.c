
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
	  int value;

  	while(true){
  	value = 1000-SensorValue[S1];
  	float speed = value;

  	motor[motorPort] = speed;
  	wait1Msec(1000);

  	nxtDisplayCenteredTextLine(3, "Valore:");
  	nxtDisplayCenteredTextLine(4, "%d", speed);
  	wait1Msec(700);
  }

}

task main()
{
	/*soundMove(1000);

	string port = motorB;
	setMotorPort(port);*/

  soundMove();

}
