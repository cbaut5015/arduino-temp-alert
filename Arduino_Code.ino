#include "DHT.h"

#define DHTPIN A5       // DHT11 data pin
#define DHTTYPE DHT11  // DHT11 sensor type

#define LEDPIN 2       // LED pin
#define BUZZERPIN 4    // Buzzer pin
#define TEMP_THRESHOLD 30  // Temperature threshold in Celsius

DHT dht(DHTPIN, DHTTYPE); //Set pin and type

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("Running...");
  
  pinMode(LEDPIN, OUTPUT);
  pinMode(BUZZERPIN, OUTPUT);
}

void loop() {
  float temp = dht.readTemperature(); // Read temperature
  
  // Check if reading failed
  if (isnan(temp)) {
    digitalWrite(LEDPIN, HIGH);
    digitalWrite(BUZZERPIN, HIGH);
    Serial.println("Failed to read DHT sensor");
    delay(2000);
    digitalWrite(LEDPIN, LOW);
    digitalWrite(BUZZERPIN, LOW);
    return;
  }
  
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");
  
  // Trigger LED and buzzer if above threshold
  if (temp > TEMP_THRESHOLD) {
    digitalWrite(LEDPIN, HIGH);
    digitalWrite(BUZZERPIN, HIGH);
  } else {
    digitalWrite(LEDPIN, LOW);
    digitalWrite(BUZZERPIN, LOW);
  }
  
  delay(2000); // Wait 2 seconds before next reading
}