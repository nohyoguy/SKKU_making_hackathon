void setup() {
  Serial.begin(9600); // 시리얼 통신 시작 (보드레이트 : 9600)
  // 시리얼 포트로 수신된 데이터는 64바이트까지 버퍼에 저장된다.
}

char a;

void loop() {
  // avilable(): 시리얼 포트에 수신되어 저장되어 있는 데이터읠 바이트 수를 반환한다.
  if(Serial.available()){
    // read(): 시리얼 통신 수신 버퍼에서 첫번째 문자를 읽어 반환한다.
    // 수신 버퍼가 비어있으면 -1을 반환한다.
    a = Serial.read();
    Serial.println(a);
  }
  delay(100);
}
