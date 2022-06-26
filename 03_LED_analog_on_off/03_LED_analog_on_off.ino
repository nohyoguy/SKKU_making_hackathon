#define LED_G D12

void setup() {
  pinMode(LED_G, OUTPUT); // D12핀을 출력단자로 이용
}

void loop() {
  for (int value = 0; value < 255; value++){
    analogWrite(LED_G, value);
    //아날로그 출력신호 (value) : 0(0V) ~ 255(5V)
    delay(5);
  }
}
