#include <Adafruit_SH110X.h>
#include <Wire.h>
#include <ESP32Encoder.h>

void updateEncoderDisplay(int pasos, bool sentido, bool led);

//pines: señal CkL = A, señal DT = B
const short LED = 23, PIN_A = 18, PIN_B = 5, PIN_SW = 19;

//variables:
Adafruit_SH1106G display = Adafruit_SH1106G(128, 64, &Wire, -1);
ESP32Encoder enc;
int n = 0, nAnt;
bool sentido;
bool led;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(PIN_SW, INPUT_PULLUP);
  
 //Init display:
  display.begin(0x3c, true);
  display.setTextSize(1);
  display.setTextColor(SH110X_WHITE);

  //init encoder:
  enc.attachSingleEdge(PIN_A, PIN_B);
  enc.setCount(0);
}

void loop() {
  nAnt = n;
  n = enc.getCount();
 
  if(n > nAnt)
    sentido = true;
  else if(n < nAnt)
    sentido = false;

  if(digitalRead(PIN_SW) == LOW){
    led = ! digitalRead(LED);
    digitalWrite(LED, led);
  }

  updateEncoderDisplay(n, sentido, led);
  delay(100);
}

void updateEncoderDisplay(int n, bool sentido, bool led){
  display.clearDisplay();  
  display.setCursor(0,0);
  display.printf("Pasos: %d\n\nSentido: %s\n\nLED:%s", n, (sentido?"RELOJ":"NO-RELOJ"), (led?"ON":"OFF"));
  display.display();
}