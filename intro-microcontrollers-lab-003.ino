#define LED_ON_DURATION_MILLISECONDS  25
#define LED_OFF_DURATION_MILLISECONDS 5000

#define LED_PIN_NUMBER 8

void setup() {
  // put your setup code here, to run once:

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_PIN_NUMBER, OUTPUT);

  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(LED_PIN_NUMBER, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED_PIN_NUMBER, HIGH);
  delay(LED_ON_DURATION_MILLISECONDS);

  digitalWrite(LED_PIN_NUMBER, LOW);
  delay(LED_OFF_DURATION_MILLISECONDS);
}