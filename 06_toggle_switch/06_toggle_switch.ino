#define LED_G D12
#define BNT_R D10

void setup() {
  pinMode(LED_G, OUTPUT); // D12핀을 출력단자로 이용
  pinMode(BNT_R, INPUT); // D10핀을 입력단자로 이용
}

int state_bnt = 0; // 이전루프에서 버튼의 상태
int value = 0; // led on/off 변수

void loop() {
  if(digitalRead(BNT_R) == HIGH){
    if(state_bnt == 0){
      value = (value + 1) % 2;
      state_bnt = 1;
    }
  }else{
    state_bnt = 0;
  }
  
  digitalWrite(LED_G, value);
}
