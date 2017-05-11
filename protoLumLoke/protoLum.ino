// Test de variation de lumière lors du passage 
// de la résine dans le tube. Test réalisé avec un tube
// passant dans une petite boite, équipée d'une LED et 
// d'une photorésistance. 

// Test concluant, nous pouvons détecter une variation de
// la valeur de la photoresistance lors du passage de l'eau
// dans le tube

// relier cela à une alarme (BUZZER) 

// + faire une relevé de température lors du passage du tube. 

const int lightSensorPin = A2;
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(12, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);
        int readingLight = analogRead(lightSensorPin);
      //voltage /= 1024.0; 
      Serial.print("Lumière : ");
      Serial.println(readingLight);
}
