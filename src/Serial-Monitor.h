int analogRead0 = analogRead(A0);
int analogRead1 = analogRead(A1);
int analogRead2 = analogRead(A2);
int analogRead3 = analogRead(A3);
int analogRead4 = analogRead(A4);
int analogRead5 = analogRead(A5);

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
