#define LED1 7
#define LED2 8
#define KEY  3

int flag = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(KEY, INPUT);
  attachInterrupt(digitalPinToInterrupt(KEY), key_pressed, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void key_pressed(){
  flag = !flag;
  digitalWrite(LED1, flag);
  digitalWrite(LED2, !flag);
}
