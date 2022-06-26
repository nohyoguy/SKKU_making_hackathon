#define TRIG D13
#define ECHO D12

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT); // D9핀을 출력단자로 이용
  pinMode(ECHO, INPUT); // D8핀을 입력단자로 이용
}

void loop() {
  long duration, distance;

  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  // 물체에 반사되어돌아온 초음파의 시간을 변수에 저장
  duration = pulseIn (ECHO, HIGH);

  // 34000*초음파가 물체로 부터 반사되어 돌아오는시간 /1000000/2
  // 초음파센서의 거리값이 위 계산값과 동일하게 Cm로 환산되는 계산공식
  distance = duration * 17 / 1000;

  // PC모니터로 초음파 거리값 확인
  Serial.println(distance); //측정된 물체로부터 거리값(cm값)을 보여줍니다.
}
