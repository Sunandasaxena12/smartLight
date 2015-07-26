

// These constants won't change.  They're used to give names
// to the pins used:
/*const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int OutPin = 3; // Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0; 
//int outputValue1 = 0;// value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(analogInPin, INPUT);
  pinMode(OutPin, OUTPUT);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 200, 500, 255, 0);
  outputValue = constrain(outputValue, 255, 0);
  analogWrite(3, outputValue);
  
  /*analogWrite(analogOutPin,outputValue);

  // print the results to the serial monitor:
  Serial.print("sensor = " );
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);*/

  // wait 2 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
  //delay(2);
//}*/

int photocellPin = 0;// A0
int photocellVal = 0;
int ledPin1 = 3;
int ledPin2 = 5;
int outputVal = 0;// define photocell variable


void setup() {
  Serial.begin(9600);
  pinMode(photocellPin, INPUT);
  pinMode(ledPin1, OUTPUT);
   pinMode(ledPin2, OUTPUT);
}
void loop() {
  photocellVal = analogRead(photocellPin);// read the analog from photocell
     Serial.println( photocellVal); // print to screen
 
//DIGITALWAY - ON/OFF Only
   outputVal = map(photocellVal, 0, 350, 0, 255);
  outputVal = constrain(photocellVal, 0, 255);
  if(outputVal <= 75)
  {
  digitalWrite(ledPin1, HIGH);
   digitalWrite(ledPin2, HIGH);
  }

  else
  {
    digitalWrite(ledPin1, LOW);
     digitalWrite(ledPin2, LOW);

  }

  //AnalogWay - Dimming
  /* outputVal = map(photocellVal, 145, 15, 0, 255);
  outputVal = constrain(photocellVal, 0, 255);
  outputVal = (255 - outputVal) ;
  //Serial.println( outputVal);
  analogWrite(ledPin1, outputVal);
  analogWrite(ledPin2, outputVal);
 delay(50);*/
 } 




