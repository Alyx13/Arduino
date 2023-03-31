int led = 13;
int solenoide = 3;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(solenoide, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  digitalWrite(solenoide, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  digitalWrite(solenoide, LOW);
  delay(1000);
}
