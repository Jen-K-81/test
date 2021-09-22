#define PIN7 7

void setup(){
  pinMode(PIN7, OUTPUT);
  digitalWrite(PIN7, LOW); 
  delay(1000);
}

void loop(){
  int i = 1;
  while(i<6){
    digitalWrite(PIN7, HIGH);
    delay(100);
    digitalWrite(PIN7, LOW);
    delay(100);

    i=i+1;
  }

  digitalWrite(PIN7, HIGH);

  while(1) { }
}
