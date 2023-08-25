const int encoderPinA =  18;    // Pin A del encoder
const int encoderPinB =  5;    // Pin B del encoder

int lastEncoderAState = LOW;
int pasos = 0;

void setup() {
  pinMode(encoderPinA, INPUT);
  pinMode(encoderPinB, INPUT);
  Serial.begin(9600);
}

void loop() {
  int encoderAState = digitalRead(encoderPinA);

  if (encoderAState != lastEncoderAState) {
    if (digitalRead(encoderPinB) == LOW) {
      pasos++;
    } else {
      pasos--;
    }

    Serial.println("Pasos: " + String(pasos));
    lastEncoderAState = encoderAState;
  }
}
