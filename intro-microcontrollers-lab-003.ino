#define LED_ON_DURATION_MILLISECONDS  100
#define LED_OFF_DURATION_MILLISECONDS 100

#define LED_PIN_NUMBER    8
#define BUTTON_PIN_NUMBER 7

#define BUTTON_DEBOUNCE_MILLISECONDS 50

void setup() {
  // put your setup code here, to run once:

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_PIN_NUMBER, OUTPUT);
  pinMode(BUTTON_PIN_NUMBER, INPUT_PULLUP);

  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(LED_PIN_NUMBER, LOW);
}

bool ledEnabled = true;

void loop() {
  // put your main code here, to run repeatedly:

  if (ledEnabled)
  {
    digitalWrite(LED_PIN_NUMBER, HIGH);
    delay(LED_ON_DURATION_MILLISECONDS);

    digitalWrite(LED_PIN_NUMBER, LOW);
    delay(LED_OFF_DURATION_MILLISECONDS);
  }
  else
  {
    digitalWrite(LED_PIN_NUMBER, LOW);
  }

  // Basic button press de-bounce procedure
  if (digitalRead(BUTTON_PIN_NUMBER) == LOW)
  {
    while (digitalRead(BUTTON_PIN_NUMBER) == LOW) {}
    delay(BUTTON_DEBOUNCE_MILLISECONDS);
    ledEnabled = !ledEnabled;
  }
}