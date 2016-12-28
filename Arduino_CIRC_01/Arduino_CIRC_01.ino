#define FADE_IN 0
#define FADE_OUT 1

int ledPin = 9;
int fadeDirection = FADE_IN;
int fadeLevel = 0;

void setup()
{
	pinMode(ledPin, OUTPUT);
}

void loop()
{
	analogWrite(ledPin, fadeLevel);
	delay(100);

	if (fadeDirection == FADE_IN)
	{
		fadeLevel += 5;
		if (fadeLevel >= 255)
		{
			fadeLevel = 255;
			fadeDirection = FADE_OUT;
		}
	}
	else
	{
		fadeLevel -= 5;
		if (fadeLevel <= 0)
		{
			fadeLevel = 0;
			fadeDirection = FADE_IN;
		}
	}
}
