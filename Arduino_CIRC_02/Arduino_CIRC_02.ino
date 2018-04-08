int ledPins[] = { 2, 3, 4, 5, 6, 7, 8, 9 };

void setup()
{
	for (int i = 0; i < 8; i++)
	{
		pinMode(ledPins[i], OUTPUT);
	}
}

void loop()
{
	oneAfterAnotherLoop();
	//oneOnAtATime();
	//inAndOut();
}

void oneAfterAnotherLoop()
{
	int delayTime = 100;

	for (int i = 0; i < 8; i++)
	{
		digitalWrite(ledPins[i], HIGH);
		delay(delayTime);
	}

	for (int i = 0; i < 8; i++)
	{
		digitalWrite(ledPins[i], LOW);
		delay(delayTime);
	}

	delay(delayTime);
}

void oneOnAtATime()
{
	int delayTime = 200;

	for (int i = 0; i < 8; i++)
	{
		digitalWrite(ledPins[i], HIGH);
		delay(delayTime);
		digitalWrite(ledPins[i], LOW);
		delay(delayTime);
	}

	for (int i = 0; i < 8; i++)
	{
		digitalWrite(ledPins[i], LOW);
	}

	delay(delayTime);
}

void inAndOut()
{
	int delayTime = 100;

	for (int i = 0; i < 8; i++)
	{
		digitalWrite(ledPins[i], HIGH);
		delay(delayTime);
	}

	for (int i = 7; i > -1; i--)
	{
		digitalWrite(ledPins[i], LOW);
		delay(delayTime);
	}

	delay(delayTime);
}
