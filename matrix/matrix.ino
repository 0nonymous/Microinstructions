int DIN = 11;
int CS = 7;
int CLK = 13;

void setup() {
  pinMode(DIN, OUTPUT);
  pinMode(CS, OUTPUT);
  pinMode(CLK, OUTPUT);
  digitalWrite(CS, HIGH);
}

void loop() {
  digitalWrite(CS, LOW);
  for (int i = 0; i < 16; i++) {
    digitalWrite(DIN, HIGH);
    digitalWrite(CLK, HIGH);
    delay(1000);
    digitalWrite(CLK, LOW);
  }
  digitalWrite(CS, HIGH);
}