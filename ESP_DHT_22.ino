/*
  Rui Santos
  Complete project details at https://RandomNerdTutorials.com/esp32-mqtt-publish-dht11-dht22-arduino/
  
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files.
  
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
*/

#include "DHT.h"
//#define DHTPIN 27  
#define DHTPIN 1

// Uncomment whatever DHT sensor type you're using
//#define DHTTYPE DHT11   // DHT 11
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)   

// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);

// Variables to hold sensor readings
float temp;
float hum;

unsigned long previousMillis = 0;   // Stores last time temperature was published
const long interval = 1000;        // Interval at which to publish sensor readings

void setup() {
  Serial.begin(115200);
  Serial.println();

  dht.begin();
}

void loop() {
  //unsigned long currentMillis = millis();
  // Every X number of seconds (interval = 10 seconds) 
  // it publishes a new MQTT message
 // if (currentMillis - previousMillis >= interval)
 delay(1000);
  {
    // Save the last time a new reading was published
 //   previousMillis = currentMillis;
    // New DHT sensor readings
    hum = dht.readHumidity();
    // Read temperature as Celsius (the default)
    temp = dht.readTemperature();
    // Read temperature as Fahrenheit (isFahrenheit = true)
    //temp = dht.readTemperature(true);

    // Check if any reads failed and exit early (to try again).
    /*if (isnan(temp) || isnan(hum)) {
      Serial.println(F("Failed to read from DHT sensor!"));
      return;
    }
    */
    // Publish an MQTT message on topic esp32/dht/temperature
  //  uint16_t packetIdPub1 = mqttClient.publish(MQTT_PUB_TEMP, 1, true, String(temp).c_str());                            
//    Serial.printf("Publishing on topic %s at QoS 1, packetId: %i", MQTT_PUB_TEMP, packetIdPub1);
    Serial.printf("temperature: %.2f \n", temp);

    // Publish an MQTT message on topic esp32/dht/humidity
 //   uint16_t packetIdPub2 = mqttClient.publish(MQTT_PUB_HUM, 1, true, String(hum).c_str());                            
 //   Serial.printf("Publishing on topic %s at QoS 1, packetId %i: ", MQTT_PUB_HUM, packetIdPub2);
    Serial.printf("humidity: %.2f \n", hum);
  }
}
