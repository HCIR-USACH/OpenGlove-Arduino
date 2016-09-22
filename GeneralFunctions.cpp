#include "Arduino.h"
#include "GeneralFunctions.h"

static char TERMINAL_SIGN = 's';
static int DIGITAL_HIGH = -1;
static int DIGITAL_LOW = -2;

void analogRead()
{
	int pin = Serial.parseInt();

	if(Serial.read() == TERMINAL_SIGN)
	{
		Serial.println(analogRead(pin));
	}
	
}

void digitalRead()
{
	int pin = Serial.parseInt();

	if(Serial.read() == TERMINAL_SIGN)
	{
		Serial.println(digitalRead(pin));
	}
}

void initializeDigitalInputs()
{
	
	int pin_quantity = Serial.parseInt();
	int pins [pin_quantity];

	for(int i=0; i<pin_quantity; i++)
	{
		pins[i] = Serial.parseInt();		
	}

	if(Serial.read() == TERMINAL_SIGN)
	{
		for(int i=0; i<pin_quantity; i++)
		{
			pinMode(pins[i], INPUT);

		}
	}
}

void pinMode()
{
	int pin_quantity = Serial.parseInt();
	int pins [pin_quantity];
	int values [pin_quantity];

	for(int i=0; i<pin_quantity; i++)
	{
		pins[i] = Serial.parseInt();
		values[i] = Serial.parseInt();
	}

	if(Serial.read() == TERMINAL_SIGN)
	{
		for(int i=0; i<pin_quantity; i++)
		{
			if(values[i] == 1)
			{
				pinMode(pins[i],INPUT);
			}

			else
			{
				pinMode(pins[i],OUTPUT);
			}
		}
	}

}

void digitalWrite()
{
	int pin_quantity = Serial.parseInt();
	int pins [pin_quantity];
	int values [pin_quantity];

	for(int i=0; i<pin_quantity; i++)
	{
		pins[i] = Serial.parseInt();
		values[i] = Serial.parseInt();
	}

	if(Serial.read() == TERMINAL_SIGN)
	{
		for(int i=0; i<pin_quantity; i++)
		{
			if(values[i] == 0)
			{
				digitalWrite(pins[i],LOW);
			}

			else
			{
				digitalWrite(pins[i],HIGH);
			}
		}
	}

}

void analogWrite()
{
	int pin_quantity = Serial.parseInt();
	int pins [pin_quantity];
	int values [pin_quantity];

	for(int i=0; i<pin_quantity; i++)
	{
		pins[i] = Serial.parseInt();
		values[i] = Serial.parseInt();
	}

	if(Serial.read() == TERMINAL_SIGN)
	{
		for(int i=0; i<pin_quantity; i++)
		{
			analogWrite(pins[i],values[i]);
		}
	}

}






