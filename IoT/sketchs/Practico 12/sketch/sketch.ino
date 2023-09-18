#include "ThingSpeak.h"
#include "WiFi.h"

#include "DHT.h"

#define pin2 32       //Pin del DHT22.

const char* ssid = "ssid";                        //SSID de vuestro router.
const char* password = "password";                //Contraseña de vuestro router.

unsigned long channelID = 999999;                //ID de vuestro canal.
const char* WriteAPIKey = "WriteAPIKey";     //Write API Key de vuestro canal.

WiFiClient cliente;

DHT dht2(pin2, DHT22);    //El blanco.

Adafruit_BMP085 bmp;

void setup() {
  Serial.begin(115200);
  Serial.println("Test de sensores:");

  WiFi.begin(ssid,password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Wifi conectado!");

  ThingSpeak.begin(cliente);

  dht2.begin();

}

void loop() {

  delay(2000);
  leerdht2();

  ThingSpeak.writeFields(channelID,WriteAPIKey);
  Serial.println("Datos enviados a ThingSpeak!");
  delay(14000);
}

void leerdht2() {
  
  float t2 = dht2.readTemperature();
  float h2 = dht2.readHumidity();

  while (isnan(t2) || isnan(h2)){
    Serial.println("Lectura fallida en el sensor DHT22, repitiendo lectura...");
    delay(2000);
    t2 = dht2.readTemperature();
    h2 = dht2.readHumidity();
  }

  Serial.print("Temperatura DHT22: ");
  Serial.print(t2);
  Serial.println(" ºC.");

  Serial.print("Humedad DHT22: ");
  Serial.print(h2);
  Serial.println(" %."); 

  Serial.println("-----------------------");

  ThingSpeak.setField (3,t2);
  ThingSpeak.setField (4,h2);
}
