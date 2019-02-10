#include <SimpleDHT.h>
#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

// Set these to run example.
#define FIREBASE_HOST "nodemcu-8dbd3.firebaseio.com"
#define FIREBASE_AUTH "mB8ZIu0b5USzXhJOQKuHFPUoOTo4d29K5idDRr34"
#define WIFI_SSID "ROBOTICS SOCIETY"
#define WIFI_PASSWORD "vssutrobotix"


int ledPin = 15;
int HumiditySensorPin = 5;
const int soil_moisture = 00; 
SimpleDHT11 dht11(HumiditySensorPin);
void setup() {
  Serial.begin(9600);

  pinMode(HumiditySensorPin, INPUT);
  pinMode(soil_moisture, INPUT);
  pinMode(ledPin, OUTPUT);
  
  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
 
 // Set Firebase Reference
  Firebase.set("soil", 0);
  Firebase.set("humidity", 0);
  Firebase.set("temp", 0);
}

int button = 0;
float light = 0.0;

void loop() {
  digitalWrite(ledPin, Firebase.getInt("humidity"));

  byte temperature = 0;
  byte humidity = 0;
  int err = SimpleDHTErrSuccess;
  if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err="); Serial.println(err);delay(1000);
    return;
  }
  
  
  Serial.print((int)temperature); Serial.print(" *C, "); 
  Serial.print((int)humidity); Serial.print(" H");

  //int moisture_percentage;
  int sensor_analog;
  sensor_analog = analogRead(soil_moisture);
  //moisture_percentage = ( 100 - ( (sensor_analog/1023.00) * 100 ) );
 
    Firebase.setFloat("soil",(int)sensor_analog);
    Firebase.setFloat("humidity", (int)humidity);
    Firebase.setFloat("temp",(int)temperature);
    String soil = Firebase.pushInt("soil_m",(int)sensor_analog);
    String temp = Firebase.pushInt("temp_",(int)temperature);
    String humi = Firebase.pushInt("humi",(int)humidity);
   // Serial.println(newLight);
    //Serial.println();
  //}
 
 Serial.print("Moisture Percentage = ");
  //Serial.print(moisture_percentage);
  Serial.print("%\n\n");
  delay(200);
}
