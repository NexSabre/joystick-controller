/* joystick controller for Arduino MicroPro */
int horizontalPin = A0;
int verticalPin = A1;

int buttonPin = 9;

int horizontalZero, verticalZero = 0;
int horizontalValue, verticalValue = 0;
const int sensitivity = 200; 

int mouseClick = 0;

void setup() {
  pinMode(horizontalPin, INPUT);
  pinMode(verticalPin, INPUT);
  
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  delay(1000);

  horizontalZero = analogRead(horizontalPin);
  verticalZero = analogRead(verticalPin);
}

void loop() {
  // put your main code here, to run repeatedly:

}
