//Attiny85 code for a fridge alarm project, the circuit uses a 3V reference, the light signal is taken on  pin A1, connected to a resistive divider with a 15kohm resistance 
//and a LDR (the LDR is between A1 and GND). A buzzer is connected to pin 0 abd it is activated if the light is on for more than 10 sec.

void setup() {
  pinMode(0, OUTPUT);
}

void loop() {
  digitalWrite(0, LOW);
  int val=analogRead(A1); //initial acquisition
  if(val>400){ //threshold value
    delay(10000);
    int val_new=analogRead(A1); //if the acquired value is above threshold the system wait for 10sec, then does another acquisition and even if this one is above threshold the buzzer is activated until the light is off
    while(val_new>400){
    digitalWrite(0, HIGH);
    val_new=analogRead(A1);
    }
  }
}
