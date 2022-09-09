float Voltage = 0.0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Voltage = analogRead(A0)/1023.0*5;
  float Rx = 50000/Voltage - 10000;
  Serial.println(Rx);
}
