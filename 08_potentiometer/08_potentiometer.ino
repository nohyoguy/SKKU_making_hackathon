void setup() {
  // 아날로그핀은 따로 핀모드를 설정할 필요가 없습니다.
  Serial.begin(9600); // 시리얼 통신 시작 (보드레이트 : 9600)
}

void loop() {
  //analogRead(A0) : 0(0V) ~ 1023(5V)
  int value = analogRead(A0);
  Serial.println(value);
  delay(500);
}
