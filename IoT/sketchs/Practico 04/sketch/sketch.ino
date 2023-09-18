#include <Adafruit_SH110X.h>
#include <Wire.h>

Adafruit_SH1106G display = Adafruit_SH1106G(128, 64, &Wire, -1);
const short GREEN_LED = 23; //valor por defecto en placa UTN
const short RELAY = 14;

//función para escribir en la pantalla un texto recibido
//como argumento.
void updateOLEDMod(String txt);

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RELAY, OUTPUT);
  Serial.begin(9600);
  
  //Inicializar pantalla OLED
  display.begin(0x3c, true); //Dirección por defecto: 0x3C
  display.setTextSize(1);
  display.setTextColor(SH110X_WHITE);
  updateOLEDMod("OLED Module ON!");
}

void loop() {
 if(Serial.available() != 0){
    String cmd = "";
    while(Serial.available()){
      cmd += (char)Serial.read();
     
      if(cmd == "LUZ_ON"){
        digitalWrite(GREEN_LED, HIGH);
        digitalWrite(RELAY, HIGH);
        updateOLEDMod("RELAY ON!");
      }
      else if(cmd == "LUZ_OFF"){
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(RELAY, LOW);
        updateOLEDMod("RELAY OFF!");
      }
    }
  }
  delay(100);
}


void updateOLEDMod(String txt){
  display.clearDisplay();  
  display.setCursor(0,0);
  display.println(txt);
  display.display();
}
