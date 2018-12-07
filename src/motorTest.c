#include "motore.h";

task main()
{
	string port = motorB;
	setMotorPort(port);

	nxtDisplayCenteredTextLine(3, "Porta utilizzata:");
	nxtDisplayCenteredTextLine(4, "%d", getMotorPort());
	wait(10);
}
