#define LED_B D13
#define BNT_L D11

void setup() {
  pinMode(LED_B, OUTPUT); // D13핀을 출력단자로 이용
  pinMode(BNT_L, INPUT); // D11핀을 입력단자로 이용
}

void loop() {
  if(digitalRead(BNT_L) == HIGH){
    digitalWrite(LED_B, HIGH);
  }else{
    digitalWrite(LED_B, LOW);
  }
}
