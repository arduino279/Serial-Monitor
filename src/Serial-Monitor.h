int analogRead0 = analogRead(A0);
int analogRead1 = analogRead(A1);
int analogRead2 = analogRead(A2);
int analogRead3 = analogRead(A3);
int analogRead4 = analogRead(A4);
int analogRead5 = analogRead(A5);

class SerialMonitor {
  public:
    initialize();
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
