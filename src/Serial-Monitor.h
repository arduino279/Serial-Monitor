int value = 0;
int analogRead0 = analogRead(A0);
int analogRead1 = analogRead(A1);
int analogRead2 = analogRead(A2);
int analogRead3 = analogRead(A3);
int analogRead4 = analogRead(A4);
int analogRead5 = analogRead(A5);
int digitalRead2 = digitalRead(2);
int digitalRead3 = digitalRead(3);
int digitalRead4 = digitalRead(4);
int digitalRead5 = digitalRead(5);
int digitalRead6 = digitalRead(6);
int digitalRead7 = digitalRead(7);
int digitalRead8 = digitalRead(8);
int digitalRead9 = digitalRead(9);
int digitalRead10 = digitalRead(10);
int digitalRead11 = digitalRead(11);

class SerialMonitor {
  public:
    initialize();
    analogRead0();
    analogRead1();
    analogRead2();
    analogRead3();
    analogRead4();
    analogRead5();
};

int SerialMonitor::initialize() {
  Serial.begin(9600);
  value = serial.analogRead0();
  if(value == NULL) {
    Serial.println("analogRead0 → NULL");
  } else {
    Serial.println("analogRead0 → " + value);
  }
  value = serial.analogRead1();
  if(value == NULL) {
    Serial.println("analogRead1 → NULL");
  } else {
    Serial.println("analogRead1 → " + value);
  }
  value = serial.analogRead2();
  if(value == NULL) {
    Serial.println("analogRead2 → NULL");
  } else {
    Serial.println("analogRead2 → " + value);
  }
  value = serial.analogRead3();
  if(value == NULL) {
    Serial.println("analogRead3 → NULL");
  } else {
    Serial.println("analogRead3 → " + value);
  }
  value = serial.analogRead4();
  if(value == NULL) {
    Serial.println("analogRead4 → NULL");
  } else {
    Serial.println("analogRead4 → " + value);
  }
  value = serial.analogRead5();
  if(value == NULL) {
    Serial.println("analogRead5 → NULL");
  } else {
    Serial.println("analogRead5 → " + value);
  }
  return true;
}

int SerialMonitor::analogRead0() {
  if(analogRead0 == NULL) {
    return NULL;
  } else {
    return analogRead0;
  }
}

int SerialMonitor::analogRead1() {
  if(analogRead1 == NULL) {
    return NULL;
  } else {
    return analogRead1;
  }
}

int SerialMonitor::analogRead2() {
  if(analogRead2 == NULL) {
    return NULL;
  } else {
    return analogRead2;
  }
}

int SerialMonitor::analogRead3() {
  if(analogRead3 == NULL) {
    return NULL;
  } else {
    return analogRead3;
  }
}

int SerialMonitor::analogRead4() {
  if(analogRead4 == NULL) {
    return NULL;
  } else {
    return analogRead4;
  }
}

int SerialMonitor::analogRead5() {
  if(analogRead5 == NULL) {
    return NULL;
  } else {
    return analogRead5;
  }
}
