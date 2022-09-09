#define LED1 7
#define LED2 8
#define KEY  9

int flag = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(KEY, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(KEY)){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
  }
  else{
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);    
  }
}
