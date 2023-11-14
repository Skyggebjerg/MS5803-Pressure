#include <Arduino.h>
#include <M5CoreInk.h>
#include <Wire.h>
#include <SparkFun_MS5803_I2C.h> // Click here to get the library: http://librarymanager/All#SparkFun_MS5803-14BA

// available addresses (selected by jumper on board)
// default is ADDRESS_HIGH
//  ADDRESS_HIGH = 0x76
//  ADDRESS_LOW  = 0x77
MS5803 sensor(ADDRESS_HIGH); // Instantiate the sensor using ADDRESS_HIGH

float temperature_c;
double pressure_abs;

void setup() {
  Wire.begin(21,22);
  Serial.begin(115200);
  sensor.reset(); //Retrieve calibration constants for conversion math.
  sensor.begin(); // Begin the sensor using Wire
}

void loop() {
  // To measure to higher degrees of precision use the following sensor settings:
  // ADC_256
  // ADC_512
  // ADC_1024
  // ADC_2048
  // ADC_4096

  temperature_c = sensor.getTemperature(CELSIUS, ADC_512);
  pressure_abs = sensor.getPressure(ADC_4096);

  Serial.print("Temperature C = ");
  Serial.println(temperature_c);
  Serial.print("Pressure abs (mbar)= ");
  Serial.println(pressure_abs);
  Serial.println(" ");//padding between outputs
  delay(1000);
}


