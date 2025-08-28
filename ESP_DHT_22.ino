#include "DHT.h"
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
 delay(1000);
    hum = dht.readHumidity();
    temp = dht.readTemperature();

    Serial.printf("temperature: %.2f \n", temp);
    Serial.printf("humidity: %.2f \n", hum);
}

