#include <GloveFunctions.h>
#include <GeneralFunctions.h>

int BAUD_RATE = 57600;
int functionCase;
int TIME_TEST_FUNCTION_NUMBER = 9;
unsigned long timeStart;

void setup() {
 
 	Serial.begin(57600);
 	
}

void loop() {

	while (Serial.available() > 0) {
		//Serial.println("datos disponibles");
	    functionCase = Serial.parseInt();
	    //Serial.println(functionCase);

	    switch (functionCase) {

	    	case 1:

	    		initializeMotor();
	    		break;

	    	case 2:
	          
	    		activateMotor();
	    		break;

	    	case 3:

	    		analogRead();
	    		break;

	    	case 4:

	    		digitalRead();
	    		break;

	    	case 5:

	    		initializeDigitalInputs();
	    		break;

	    	case 6:

	    		pinMode();
	    		break;

	    	case 7:

	    		digitalWrite();
	    		break;

	    	case 8:

	    		analogWrite();
	    		break;

	    	case 9:

	    		timeStart = micros();
	    		activateMotorTimeTest(timeStart);
				break;
				
	    	default:

	    	break;
	        
	    } 

	}
	   
}
