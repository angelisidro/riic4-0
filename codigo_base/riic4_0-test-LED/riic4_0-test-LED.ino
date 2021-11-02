int ledPin = D5; // 
int ledPin2 = D6;
int ledPinESP = 2;
int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin , OUTPUT);
  pinMode(ledPinESP , LOW);
  pinMode(ledPin2 , OUTPUT);          
}

void loop() {
 for(int i=0; i < 255; i++){
  analogWrite(ledPin , i);
  analogWrite(ledpin2 , i);
  delay(50)
  }
}
