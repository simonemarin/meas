//http://arduino.cc/en/Tutorial/Knock

// knock act as a switch and turn the LED on and off

const int ledPin = 13;      // led connected to digital pin 13

const int knockSensor = A0; // the piezo is connected to analog pin 0

const int threshold = 350;  // threshold value to decide when the detected sound is a knock or not

int sensorReading = 0;      // variable to store the value read from the sensor pin

int ledState = LOW;         // variable used to store the last LED status, to toggle the light

void setup() {

 pinMode(ledPin, OUTPUT); 

 //Serial.begin(9600);      

}

void loop() {

  sensorReading = analogRead(knockSensor);    

  if (sensorReading >= threshold) {

    ledState = !ledState;     

    digitalWrite(ledPin, ledState);

    //Serial.println(“Knock!”);         

  }

  delay(2000);  // delay to avoid overloading the serial port buffer

}
