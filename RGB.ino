const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

const int redSwitchPin = 2;   
const int greenSwitchPin = 3; 
const int blueSwitchPin = 4;  

void setup() {
  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  
  pinMode(redSwitchPin, INPUT_PULLUP);
  pinMode(greenSwitchPin, INPUT_PULLUP);
  pinMode(blueSwitchPin, INPUT_PULLUP);

  Serial.begin(9600); 
}

void loop() {
  
  int redSwitchState = digitalRead(redSwitchPin);
  int greenSwitchState = digitalRead(greenSwitchPin);
  int blueSwitchState = digitalRead(blueSwitchPin);

  
  if (redSwitchState == LOW) { 
    digitalWrite(redPin, HIGH); 
  } else { 
    digitalWrite(redPin, LOW);  
  }

 
  if (greenSwitchState == LOW) {
    digitalWrite(greenPin, HIGH);
  } else {
    digitalWrite(greenPin, LOW);
  }

 
  if (blueSwitchState == LOW) {
    digitalWrite(bluePin, HIGH);
  } else {
    digitalWrite(bluePin, LOW);
  }

 
  Serial.print("Red Switch: ");
  Serial.print(redSwitchState);
  Serial.print("\tGreen Switch: ");
  Serial.print(greenSwitchState);
  Serial.print("\tBlue Switch: ");
  Serial.println(blueSwitchState);

  delay(50);
}
