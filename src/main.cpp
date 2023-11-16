#include <Arduino.h>
#include <M5CoreInk.h>
#include <M5GFX.h>
#include "esp_adc_cal.h"

#include <ArduinoJson.h> //https://github.com/bblanchon/ArduinoJson.git
#include <NTPClient.h>   //https://github.com/taranais/NTPClient
#include "Orbitron_Bold_70.h"
#include "Orbitron_Medium_20.h"
#include "Orbitron_Bold_32.h"
#include <WiFi.h>
#include <WiFiUdp.h>
#include <HTTPClient.h>
#include <Wire.h>
#include <SparkFun_MS5803_I2C.h> // Click here to get the library: http://librarymanager/All#SparkFun_MS5803-14BA

// available addresses (selected by jumper on board)
// default is ADDRESS_HIGH
//  ADDRESS_HIGH = 0x76
//  ADDRESS_LOW  = 0x77
MS5803 sensor(ADDRESS_HIGH); // Instantiate the sensor using ADDRESS_HIGH
M5GFX display;

const char *ssid = "ShadowNets";        // EDIT
const char *password = "Shadow666";        // EDIT

float temperature_c;
double pressure_abs;
char text[64];

// Define NTP Client to get time
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);

// Variables to save date and time
String formattedDate;
String dayStamp;
String timeStamp;

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
  display.setFont(&Orbitron_Bold_66);
  int32_t o;
   display.clear(TFT_WHITE);
  //o = display.textWidth(text);
  //display.setCursor((display.width()/2 - o/2), 100);
  display.setCursor(4,50);
  display.print(round(pressure_abs),0); //(floor(aFloat),0)

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

  //getData();

  //Serial.println(" ");//padding between outputs
  //delay(5000);
  display.display();
  display.waitDisplay();
  display.wakeup();
  //delay(700);
  //M5.shutdown(300); // 600 seconds = 10 minutes

  WiFi.begin(ssid, password);
  int nowifi = 0;
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(100);
    ++nowifi;
    if (nowifi > 200)
    {
      //drawBatteryStatus();
      display.display();
      display.waitDisplay();
      display.wakeup();
      M5.shutdown();
    }
  }
  timeClient.begin();
  timeClient.setTimeOffset(3600); /*EDDITTTTTTTTTTTTTTTTTTTTTTTT                      */
  delay(100);

}

String curSeconds = "";

void loop() {

getData();

  while (!timeClient.update())
  {
    timeClient.forceUpdate();
  }
  // The formattedDate comes with the following format:
  // 2018-05-28T16:00:13Z
  // We need to extract date and time
  formattedDate = timeClient.getFormattedDate();

  int splitT = formattedDate.indexOf("T");
  dayStamp = formattedDate.substring(0, splitT);
  timeStamp = formattedDate.substring(splitT + 1, formattedDate.length() - 1);
  curSeconds = timeStamp.substring(6, 8);
  String current = timeStamp.substring(0, 5);
    display.setFont(&Orbitron_Bold_32);
    display.setCursor(10, 10);
  display.print(current); // print current time

  delay(700);
  M5.shutdown(3600); // 600 seconds = 10 minutes

  // To measure to higher degrees of precision use the following sensor settings:
  // ADC_256
  // ADC_512
  // ADC_1024
  // ADC_2048
  // ADC_4096


}


