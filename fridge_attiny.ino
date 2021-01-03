//Partitore con 3V, 15kohm 

void setup() {
  pinMode(0, OUTPUT);
}

void loop() {
  digitalWrite(0, LOW);
  int val=analogRead(A1);
  if(val>400){
    delay(10000);
    int val_new=analogRead(A1);
    while(val_new>400){
    digitalWrite(0, HIGH);
    val_new=analogRead(A1);
    }
  }
}
