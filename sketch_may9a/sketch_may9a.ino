#include <SoftwareSerial.h>

SoftwareSerial BT(2,3);

// Sensors
#define FLAME_SENSOR 9
#define TRIG A4
#define ECHO A5
#define BUZZER 13
#define RELAY 4

// LEFT MOTOR DRIVER
int L_RPWM = A0;
int L_LPWM = A1;
int L_REN  = A2;
int L_LEN  = A3;

// RIGHT MOTOR DRIVER
int R_RPWM = 5;
int R_LPWM = 6;
int R_REN  = 7;
int R_LEN  = 8;

int leftSpeed = 250;
int rightSpeed = 150;
char cmd = 'S';
int distance = 100;

unsigned long lastUltraTime = 0;

void setup() {
  BT.begin(9600);
  Serial.begin(9600);

  pinMode(FLAME_SENSOR, INPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(RELAY, OUTPUT);

  pinMode(L_RPWM, OUTPUT);
  pinMode(L_LPWM, OUTPUT);
  pinMode(L_REN, OUTPUT);
  pinMode(L_LEN, OUTPUT);

  pinMode(R_RPWM, OUTPUT);
  pinMode(R_LPWM, OUTPUT);
  pinMode(R_REN, OUTPUT);
  pinMode(R_LEN, OUTPUT);

  digitalWrite(L_REN, HIGH);
  digitalWrite(L_LEN, HIGH);
  digitalWrite(R_REN, HIGH);
  digitalWrite(R_LEN, HIGH);

  digitalWrite(RELAY, HIGH);
  digitalWrite(BUZZER, LOW);

  stopRobot();
}

void loop() {
  // Bluetooth command আগে read
  while (BT.available()) {
    cmd = BT.read();
  }

  int flame = digitalRead(FLAME_SENSOR);

  // Ultrasonic প্রতি 150ms পরপর read
  if (millis() - lastUltraTime >= 150) {
    distance = getDistance();
    lastUltraTime = millis();
  }

  bool fireDetected = (flame == LOW);
  bool obstacleDetected = (distance > 0 && distance < 20);

  if (fireDetected) {
    digitalWrite(BUZZER, HIGH);
    digitalWrite(RELAY, LOW);   // Pump ON
  } else {
    digitalWrite(RELAY, HIGH);  // Pump OFF
  }

  if (obstacleDetected) {
    stopRobot();
    digitalWrite(BUZZER, HIGH);
  } else {
    if (!fireDetected) digitalWrite(BUZZER, LOW);

    if (cmd == 'F') forward();
    else if (cmd == 'B') backward();
    else if (cmd == 'L') leftTurn();
    else if (cmd == 'R') rightTurn();
    else if (cmd == 'S') stopRobot();
  }
}

int getDistance() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duration = pulseIn(ECHO, HIGH, 12000); // আগের 30000 থেকে কমানো
  int d = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(d);

  return d;
}

void forward() {
  analogWrite(L_RPWM, 0);
  analogWrite(L_LPWM, leftSpeed);
  analogWrite(R_RPWM, 0);
  analogWrite(R_LPWM, rightSpeed);
}

void backward() {
  analogWrite(L_RPWM, leftSpeed);
  analogWrite(L_LPWM, 0);
  analogWrite(R_RPWM, rightSpeed);
  analogWrite(R_LPWM, 0);
}

void leftTurn() {
  analogWrite(L_RPWM, leftSpeed);
  analogWrite(L_LPWM, 0);
  analogWrite(R_RPWM, 0);
  analogWrite(R_LPWM, rightSpeed);
}

void rightTurn() {
  analogWrite(L_RPWM, 0);
  analogWrite(L_LPWM, leftSpeed);
  analogWrite(R_RPWM, rightSpeed);
  analogWrite(R_LPWM, 0); 
}

void stopRobot() {
  analogWrite(L_RPWM, 0);
  analogWrite(L_LPWM, 0);
  analogWrite(R_RPWM, 0);
  analogWrite(R_LPWM, 0);
}