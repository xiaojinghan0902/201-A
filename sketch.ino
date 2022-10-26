#define LED 2 // LED on pin 5
#define POT A0 // Potentiometer on pin A0

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // 
  pinMode(POT, INPUT);
  Serial.begin(9600); // set up Serial monitor
}

void loop() {
  int potStatus = analogRead(POT); //read the pot value
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);//turn on the led
  delay(potStatus);
  digitalWrite(13, LOW);// let it blink
  delay(potStatus);
}
