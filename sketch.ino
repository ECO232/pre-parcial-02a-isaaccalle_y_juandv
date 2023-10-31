const int buttonUpPin = 2;
const int buttonDownPin = 3;
const int buttonLeftPin = 4;
const int buttonRightPin = 5;
const int fireButtonPin = 6;

void setup() {
  pinMode(buttonUpPin, INPUT_PULLUP);
  pinMode(buttonDownPin, INPUT_PULLUP);
  pinMode(buttonLeftPin, INPUT_PULLUP);
  pinMode(buttonRightPin, INPUT_PULLUP);
  pinMode(fireButtonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int upButtonState = digitalRead(buttonUpPin);
  int downButtonState = digitalRead(buttonDownPin);
  int leftButtonState = digitalRead(buttonLeftPin);
  int rightButtonState = digitalRead(buttonRightPin);
  int fireButtonState = digitalRead(fireButtonPin);

  if (upButtonState == LOW) {
    Serial.println("Up button pressed");
  }
  if (downButtonState == LOW) {
    Serial.println("Down button pressed");
  }
  if (leftButtonState == LOW) {
    Serial.println("Left button pressed");
  }
  if (rightButtonState == LOW) {
    Serial.println("Right button pressed");
  }
  if (fireButtonState == LOW) {
    Serial.println("Fire button pressed");
  }

  delay(100);  // Debounce delay
}