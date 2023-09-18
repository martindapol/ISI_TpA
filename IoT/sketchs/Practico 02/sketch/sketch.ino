const short GREEN_LED = 23; //valor por defecto en placa UTN
const short BLUE_LED = 2; // valor por defecto en Esp32

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  //Inicializar la comunicación serial:
  Serial.begin(9600);
  
}

void loop() {

 if(Serial.available() != 0){
    char car = Serial.read();
    if(car == 'v' || car == 'V'){
      digitalWrite(GREEN_LED, HIGH);
      digitalWrite(BLUE_LED, LOW);
    }
    else if(car == 'a' || car == 'A'){
      digitalWrite(GREEN_LED, LOW);
      digitalWrite(BLUE_LED, HIGH);
    }
  }
  
  delay(100);
}
