/**
 * Attributo che indica la porta a cui è collegato il motore.
 * Valore di default porta A.
 */
string motorPort = motorA;

/**
 * Metodo per settare la porta del motore.
 */
void setMotorPort(string port){
   motorPort = port;
}

char * getMotorPort(){
	motorPort;
}
