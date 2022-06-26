#define LED_B D13

void setup() {
  pinMode(LED_B, OUTPUT); // D13핀을 출력단자로 이용
}

void loop() {
  digitalWrite(LED_B, HIGH); // D13핀에 5V 인가
  delay(1000);  // 1초(1000ms) 정지
  digitalWrite(LED_B, LOW); // D13핀에 접지
  delay(2000); // 2초(2000ms) 정지
}
