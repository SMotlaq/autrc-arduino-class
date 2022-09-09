#define RC_TRIG 8

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RC_TRIG, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RC_TRIG, HIGH);
  uint32_t pre_time = micros();
  while(analogRead(A0) < 1023*0.63){
    Serial.println(analogRead(A0));
  }
  uint32_t total_time = micros() - pre_time;
  float Cx = total_time / 330.0;
  Serial.println(Cx);
  digitalWrite(RC_TRIG, LOW);
  delay(10000);
}
