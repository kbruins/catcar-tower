int irAmount = 0; 

void setup() {
  pinMode(A1,INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
//  Serial.begin(9600);
//  Serial.println("starting");
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
}

void loop() {
  irAmount = analogRead(A1);
  if (irAmount > 200) {
//    Serial.println(irAmount);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    delay(500);
    digitalWrite(12, LOW);
  } else {
  delay(25);    
  }
}
