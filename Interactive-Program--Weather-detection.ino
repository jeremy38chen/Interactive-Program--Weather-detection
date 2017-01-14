#include "DHT.h"
#define dhtPin 8
#define dhtType DHT11

float humidity,temperature; 

DHT dht(dhtPin,dhtType);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:


  humidity = dht.readHumidity();
  temperature = dht.readTemperature();

  Serial.print("Temperature");
  Serial.println(temperature);
  Serial.print("Humidity");
  Serial.print(humidity);

  delay(2000);

}
