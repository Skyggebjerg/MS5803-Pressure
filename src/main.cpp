#include <Arduino.h>
#include <M5CoreInk.h>
#include <M5GFX.h>
#include "Orbitron_Bold_70.h"
#include "Orbitron_Medium_20.h"
#include <Wire.h>
#include <SparkFun_MS5803_I2C.h> // Click here to get the library: http://librarymanager/All#SparkFun_MS5803-14BA

// available addresses (selected by jumper on board)
// default is ADDRESS_HIGH
//  ADDRESS_HIGH = 0x76
//  ADDRESS_LOW  = 0x77
MS5803 sensor(ADDRESS_HIGH); // Instantiate the sensor using ADDRESS_HIGH
M5GFX display;

float temperature_c;
double pressure_abs;
char text[64];

void getData()
{
  temperature_c = sensor.getTemperature(CELSIUS, ADC_512);
  pressure_abs = sensor.getPressure(ADC_4096);
  //pressure_abs.toCharArray(text, 5);

  //Serial.print("Temperature C = ");
  //Serial.println(temperature_c);
  //Serial.print("Pressure abs (mbar)= ");
  //Serial.println(pressure_abs);
  display.setTextColor(TFT_BLACK);
  //display.setFont(&Orbitron_Medium_25);
  display.setFont(&Orbitron_Bold_70);
  int32_t o;
   display.clear(TFT_WHITE);
  o = display.textWidth(text);
  //display.setCursor((display.width()/2 - o/2), 100);
  display.setCursor(5,5);
  display.print(floor(pressure_abs),0); //(floor(aFloat),0)

}

void setup() {
  delay(2000);
    M5.begin();
  Wire.begin(21,22);
  Serial.begin(115200);


  display.init();
  display.setEpdMode(epd_mode_t::epd_fastest);
  display.clear(TFT_WHITE);
  sensor.reset(); //Retrieve calibration constants for conversion math.
  sensor.begin(); // Begin the sensor using Wire

  getData();

  //Serial.println(" ");//padding between outputs
  //delay(5000);
  display.display();
  display.waitDisplay();
  display.wakeup();
  delay(700);
  M5.shutdown(300); // 600 seconds = 10 minutes
}

void loop() {
  // To measure to higher degrees of precision use the following sensor settings:
  // ADC_256
  // ADC_512
  // ADC_1024
  // ADC_2048
  // ADC_4096


}


