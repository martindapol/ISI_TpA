const short BLUE_LED = 2; //Pin 23 está conectado con el LED en la placa UTN
const short GREEN_LED = 23;
const short RED_LED = 13;
const short WHITE_LED = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello, ESP32!");
  pinMode(BLUE_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(WHITE_LED,OUTPUT);
}

void loop() {
  digitalWrite(BLUE_LED, HIGH);
  delay(500); // this speeds up the simulation
  digitalWrite(GREEN_LED, HIGH);
  delay(500); // this speeds up the simulation
  digitalWrite(RED_LED, HIGH);
  delay(500); // this speeds up the simulation
  digitalWrite(WHITE_LED, HIGH);
  delay(500); // this speeds up the simulation
  
  digitalWrite(GREEN_LED, LOW);
  delay(500); // this speeds up the simulation
  digitalWrite(BLUE_LED, LOW);
  delay(500); // this speeds up the simulation
  digitalWrite(RED_LED, LOW);
  delay(500); // this speeds up the simulation
  digitalWrite(WHITE_LED, LOW);
  delay(500); // this speeds up the simulation



}



