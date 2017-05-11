const int tempSensorPin = A0; //temperatureSensor
const int lightSensorPin = A2; 
const int buzzer = 9; //buzzer to arduino pin 9
//int readingLight = 0;
float tempSeuil = 30;
float lightSeuil = 100;

void setup() {
  Serial.begin(9600); // open a serial port 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
}

void loop() {
  // Reading Temperature
    int readingTemp = analogRead(tempSensorPin);
    float voltage = readingTemp * 5.0;
    voltage /= 1024.0; 
    float temperatureC = (voltage - 0.5) * 100 ;
    Serial.print("Temperature : ");
    Serial.println(temperatureC);

  // Reading Light 
      int readingLight = analogRead(lightSensorPin);
      //voltage /= 1024.0; 
      Serial.print("Lumière : ");
      Serial.println(readingLight);
  
  // Conditions 
    if( temperatureC > tempSeuil  ) //
    {
      alarm();
    }
}

void alarm(){ // Alarm manager

tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
  }
