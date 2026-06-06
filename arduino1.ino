void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(2, HIGH);
  delay(3000);
  digitalWrite(2, LOW);
  
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  
  digitalWrite(4, HIGH);
  delay(3000);
  digitalWrite(4, LOW);
  
  // put your main code here, to run repeatedly:

}
