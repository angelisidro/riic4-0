int inPin = D3;
int ledPinESP = 2;
int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin , OUTPUT);
  pinMode(inPin , INPUT);          
}

void loop() {
  val = digitalRead(inPin);
  Serial.println("Este es el valor de lectura: " + val);
 if(val == HIGH){
  digitalWrite(ledPin , LOW);
  }else{
    digitalWrite(ledPin, HIGH);
    }
  delay(500);  
}
