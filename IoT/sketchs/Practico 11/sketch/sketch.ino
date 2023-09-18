#include "ThingSpeak.h"
#include "WiFi.h"

//Declarar funciones:
void process();

//Constantes:
const int led = 4;
const char * SSID = "ALTOHARD-POLL";
const char * PASS = "@dmin9718";
unsigned long CHANNEL = 1955894;
const char * APIKEY = "3TLNHD74ZJAK4RKN"; 


//Objeto WIFI Client
WiFiClient client;


void setup() {
    // Activamos los pines de entrada y salida
    pinMode(led, OUTPUT);
    Serial.begin(9600);
    //Conectar WIFI:
    WiFi.begin(SSID, PASS);
    Serial.print("Conectando WIFI\n");
    while(WiFi.status() != WL_CONNECTED){
      delay(500);
      Serial.print(".");
    }
    Serial.print("WIFI Conectado!");

    //Inicializar objeto ThingSpeak
    ThingSpeak.begin(client);

}
 
void loop() {
  process();
}


void process(){
  digitalWrite(led, HIGH);
  delay(2000);
  //Enviamos un valor cada vez que se enciende el LED enviamos un valor aleatorio entre [0;100]
  int rand =  random(1,100);
  ThingSpeak.setField(1, rand);
  ThingSpeak.writeFields(CHANNEL, APIKEY);

  Serial.print("\n Enviando valor: ");
  Serial.print(rand);
  
  
  digitalWrite(led, LOW);
  delay(2000); 
  
}