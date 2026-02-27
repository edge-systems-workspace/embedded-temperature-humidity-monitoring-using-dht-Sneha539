#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * This program reads environmental data from the DHT11 sensor
 * and displays temperature and humidity values on Serial Monitor.
 * Students must complete the TODO sections.
 */

#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {

    Serial.begin(9600);
    dht.begin();
    Serial.println("DHT11 initialized");
}

void loop() {

    // TODO 7:
    // Read humidity value from sensor

    // TODO 8:
    // Read temperature value from sensor

    // TODO 9:
    // Check if either reading failed using isnan()
    // If failed, print error message and return

    // TODO 10:
    // Print formatted temperature and humidity values

    // TODO 11:
    // Add a 2-second delay before next reading
}
