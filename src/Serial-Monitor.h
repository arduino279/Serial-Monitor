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
  if(analogRead0 > 0) {
    Serial.println("Value of Analog Input 0: " + analogRead0);
  } else if(analogRead1 == null) {
    Serial.println("Value of Analog Input 1: " + analogRead1);
  } else if(analogRead2 == null) {
    Serial.println("Value of Analog Input 2: " + analogRead2);
  } else if(analogRead3 == null) {
    Serial.println("A3: " + analogRead3);
  } else if(analogRead4 == null) {
    Serial.println("A4: " + analogRead4);
  } else if(analogRead5 == null) {
    Serial.println("A5: " + analogRead5);
  } else {
  }
  return true;
}
