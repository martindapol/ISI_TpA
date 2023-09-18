#include <Adafruit_SH110X.h>
#include <Wire.h>

void updateOLEDMod(String txt);
void updatePoteValuesDisplay(int valor);

const short LED = 23;
const short POTE = 32;
Adafruit_SH1106G display = Adafruit_SH1106G(128, 64, &Wire, -1);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  
 //Inicializar pantalla OLED
  display.begin(0x3c, true); //Dirección por defecto: 0x3C
  display.setTextSize(1);
  display.setTextColor(SH110X_WHITE);
}

void loop() {
  int valor = analogRead(POTE);
  analogWrite(LED, valor);
  updatePoteValuesDisplay(valor);
  delay(100);
}

void updatePoteValuesDisplay(int valor){
  display.clearDisplay();  
  display.setCursor(0,0);
  float volt = (valor *3.3)/4095;
  //printf permite imprimir una cadena formateada:
  display.printf("Pote: %d|Volt: %.2f", valor, volt);
  display.display();
}