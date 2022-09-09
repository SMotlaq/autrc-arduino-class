int ADCValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  ADCValue = analogRead(A0);
  Serial.println(ADCValue/1023.0*5);
}
