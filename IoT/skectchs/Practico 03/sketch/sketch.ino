const short GREEN_LED = 23; //valor por defecto en placa UTN
const short RELAY = 14;

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RELAY, OUTPUT);
  //Inicializar la comunicación serial:
  Serial.begin(9600);
  
}

void loop() {

 if(Serial.available() != 0){
    String cmd = "";
    while(Serial.available()){
      cmd += (char)Serial.read();
     
      if(cmd == "LUZ_ON"){
        digitalWrite(GREEN_LED, HIGH);
        digitalWrite(RELAY, HIGH);
      }
      else if(cmd == "LUZ_OFF"){
        digitalWrite(GREEN_LED, LOW);
        digitalWrite(RELAY, LOW);
      }
    }
  }
  delay(100);
  
}
