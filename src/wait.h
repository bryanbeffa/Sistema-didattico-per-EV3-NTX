/**
 * Metodo che attende che il sensore di tatto venga premuto
 *
 * @param port porta a cui è collegato il sensore di tatto
 */
void waitTouch(int port){
	bool isPressed = false;

	while(!isPressed){
		//controllo se il sensore è stato premuto
		if(SensorValue[port] > 0){
			isPressed = !isPressed;
		}
	}
}

/**
 * Metodo che attende che il sensore di luce rilevi un valore sotto la soglia desiderata
 *
 * @param port porta a cui è collegato il sensore di luce
 * @param threshold soglia di luce minima
 * @param higher valore booleano che determina se bisognerà attendere un valore superiore o inferiore alla soglia.
 */
void waitLight(tSensors port, int threshold, bool higher){
	bool flag = true;

	while(flag){
		//controllo che il valore letto del sensore non sia sotto la soglia minima
		if(higher){
			if(SensorValue(port) > threshold){
				flag = !flag;
			}
		}else{
			if(SensorValue(port) < threshold){
				flag = !flag;
			}
		}
	}
}

/**
 * Metodo che attende che il sensore di distanza rilevi una distanza inferiore alla soglia
 *
 * @param port porta a cui è collegato il sensore infrarosso
 * @param distance distanza minima da un oggetto
 */
void waitDistance(tSensors port, int distance){
	bool flag = true;

	while(flag){
		//controllo che il valore letto non sia inferiore alla soglia minima
		if(SensorValue(port) >= distance){
			flag = !flag;
		}
	}
}

/**
 * Metodo che attende che il sensore di suono rilevi un suono che supero la soglia desiderata
 *
 * @param port porta a cui è collegato il sensore di suono
 * @param threshold soglia del suono
 */
void waitSound(int port, int threshold){
	bool flag = true;
	while(flag){
		//controllo che il sensore di suono non rilevi un suono che superi la soglia
		if(SensorValue[port] >= threshold){
			flag = !flag;
		}
	}
}

/**
 * Metodo che permette l'attesa di un certo numero di millisecondi
 *
 * @param millis millisecondi di attesa desiderati
 */
void waitTime(long millis){
	//aspetto i millesecondi desiderati
	wait1Msec(millis);
}


/**
 * Metodo che attende che il motore passato come parametro svolga il numero di rotazioni desiderato
 *
 * @param port porta a cui è collegato il motore
 * @paaram times rotazioni che il motore deve svolgere
 * @param speed velocità desiderata del motore
 */
void waitRotations(int port, int times, int speed){
	//calcolo il numero di rotazioni in gradi
	int degree = 360*times;
	setMotorTarget(port, degree, speed);
	waitUntilMotorStop(port);
}

/**
 * Metodo che permette la rotazione del motore del numero di gradi desiderato
 *
 * @param port porta a cui è collegato il motore
 * @param degree gradi di rotazione del motore desiderati
 * @param speed velocità del motore desiderata
 * @param millis millisecondi di attesa per permettere la rotazione dei gradi desiderati (scegliere un valore che permetta la rotazione completa)
 */
void waitDegrees(int port, int degree, int speed){
	setMotorTarget(port, degree, speed);
	waitUntilMotorStop(port);
}
