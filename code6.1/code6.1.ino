// select the input pin for LDR
int sensorPin = A1; 

// variable to store the value coming from the sensor
int sensorValue = 0; 

void setup() 
{
   //sets serial port for communication
   Serial.begin(9600);
}

void loop()
{
  // read the value from the sensor
  sensorValue = analogRead(sensorPin);
  
  //prints the values coming from the sensor on the screen
  Serial.println(sensorValue); 
  
  delay(100);
}
