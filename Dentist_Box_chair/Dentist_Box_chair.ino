int piezo = 9;
const int button1Pin=3;
void setup() {
  pinMode(button1Pin, INPUT);
  pinMode(piezo, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  
  if(digitalRead(button1Pin)==LOW){
  Serial.println("1pin push");
  delay(180000);
  tone(piezo,500,3000);
  Serial.println("done");
  
  }
}
