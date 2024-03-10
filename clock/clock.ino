const int CLOCK_PIN = 13;
const int DELAY_TIME = 5;
String received_char;

void setup() {
  // put your setup code here, to run once:
  pinMode(CLOCK_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

      digitalWrite(CLOCK_PIN, HIGH);
      delay(DELAY_TIME);
      digitalWrite(CLOCK_PIN, LOW);
      delay(DELAY_TIME);
      Serial.println("n");

}
