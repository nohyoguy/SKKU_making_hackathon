#define LED_B D13
#define LED_G D12

void setup() {
  pinMode(LED_B, OUTPUT); // D13핀을 출력단자로 이용
  pinMode(LED_G, OUTPUT); // D12핀을 출력단자로 이용
}

// millis함수를 이용하여 현재 시간 저장
unsigned long B_past = millis();
unsigned long G_past = millis();

// LED 밝기를 나타내는 변수
int B_value = 0;
int G_value = 0;

void loop() {
  if (millis() - B_past > 1000){
    B_past = millis();
    B_value = (B_value + 1) % 2;
  }
  if (millis() - G_past > 50){
    G_past = millis();
    G_value = (G_value + 10) % 200;
  }
  digitalWrite(LED_B, B_value);
  analogWrite(LED_G, G_value);
}
