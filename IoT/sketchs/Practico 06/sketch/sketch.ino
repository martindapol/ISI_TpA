#include <Adafruit_SH110X.h>
#include <Wire.h>
#include <DHT.h>

void updateDht22Display(float t, float h);

const short LED = 23;
const short DHT22_PIN = 33;
Adafruit_SH1106G display = Adafruit_SH1106G(128, 64, &Wire, -1);
DHT dht(DHT22_PIN, DHT22);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  
 //Inicializar pantalla OLED
  display.begin(0x3c, true); //Dirección por defecto: 0x3C
  display.setTextSize(1);
  display.setTextColor(SH110X_WHITE);

  //inicializar sensor DHT22
  dht.begin();
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  updateDht22Display(temp, hum);

  if(temp >= 20){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
  delay(100);
}


void updateDht22Display(float t, float h){
  display.clearDisplay();  
  display.setCursor(0,0);
  //printf permite imprimir una cadena formateada:
  display.printf("Temp: %.1f °C\nHum: %.1f %",t,h);
  display.display();
}