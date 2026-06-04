const int pot = A5;
const int motor = 10;

void setup() {
  pinMode(motor, OUTPUT);
}

void loop() {
  int valorPot = analogRead(pot); 

  int velocidad = map(valorPot, 0, 1023, 0, 255);

  analogWrite(motor, velocidad);
  delay(100)
}
