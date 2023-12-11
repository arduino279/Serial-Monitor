int value = 0;
int analogRead_0 = analogRead(A0);
int analogRead_1 = analogRead(A1);
int analogRead_2 = analogRead(A2);
int analogRead_3 = analogRead(A3);
int analogRead_4 = analogRead(A4);
int analogRead_5 = analogRead(A5);
int digitalRead_2 = digitalRead(2);
int digitalRead_3 = digitalRead(3);
int digitalRead_4 = digitalRead(4);
int digitalRead_5 = digitalRead(5);
int digitalRead_6 = digitalRead(6);
int digitalRead_7 = digitalRead(7);
int digitalRead_8 = digitalRead(8);
int digitalRead_9 = digitalRead(9);
int digitalRead_10 = digitalRead(10);
int digitalRead_11 = digitalRead(11);
int digitalRead_12 = digitalRead(12);
int digitalRead_13 = digitalRead(13);

Serial.begin(9600);

class SerialMonitor {
  public:
    initialize();
    analogRead0();
    analogRead1();
    analogRead2();
    analogRead3();
    analogRead4();
    analogRead5();
    digitalRead2();
    digitalRead3();
    digitalRead4();
    digitalRead5();
    digitalRead6();
    digitalRead7();
    digitalRead8();
    digitalRead9();
    digitalRead10();
    digitalRead11();
    digitalRead12();
    digitalRead13();
};

int SerialMonitor::initialize() {
  value = serial.analogRead0();
  if(value == NULL) {
    Serial.println("analogRead0 → NULL");
  } else {
    Serial.print("analogRead0 → ");
    Serial.println(value);
  }
  value = serial.analogRead1();
  if(value == NULL) {
    Serial.println("analogRead1 → NULL");
  } else {
    Serial.print("analogRead1 → ");
    Serial.println(value);
  }
  value = serial.analogRead2();
  if(value == NULL) {
    Serial.println("analogRead2 → NULL");
  } else {
    Serial.print("analogRead2 → ");
    Serial.println(value);
  }
  value = serial.analogRead3();
  if(value == NULL) {
    Serial.println("analogRead3 → NULL");
  } else {
    Serial.print("analogRead3 → ");
    Serial.println(value);
  }
  value = serial.analogRead4();
  if(value == NULL) {
    Serial.println("analogRead4 → NULL");
  } else {
    Serial.print("analogRead4 → ");
    Serial.println(value);
  }
  value = serial.analogRead5();
  if(value == NULL) {
    Serial.println("analogRead5 → NULL");
  } else {
    Serial.print("analogRead5 → ");
    Serial.println(value);
  }
  value = serial.digitalRead2();
  if(value == NULL) {
    Serial.println("digitalRead2 → NULL");
  } else {
    Serial.print("digitalRead2 → ");
    Serial.println(value);
  }
  value = serial.digitalRead3();
  if(value == NULL) {
    Serial.println("digitalRead3 → NULL");
  } else {
    Serial.print("digitalRead3 → ");
    Serial.println(value);
  }
  value = serial.digitalRead4();
  if(value == NULL) {
    Serial.println("digitalRead4 → NULL");
  } else {
    Serial.print("digitalRead4 → ");
    Serial.println(value);
  }
  value = serial.digitalRead5();
  if(value == NULL) {
    Serial.println("digitalRead5 → NULL");
  } else {
    Serial.print("digitalRead5 → ");
    Serial.println(value);
  }
  value = serial.digitalRead6();
  if(value == NULL) {
    Serial.println("digitalRead6 → NULL");
  } else {
    Serial.print("digitalRead6 → ");
    Serial.println(value);
  }
  value = serial.digitalRead7();
  if(value == NULL) {
    Serial.println("digitalRead7 → NULL");
  } else {
    Serial.print("digitalRead7 → ");
    Serial.println(value);
  }
  value = serial.digitalRead8();
  if(value == NULL) {
    Serial.println("digitalRead8 → NULL");
  } else {
    Serial.print("digitalRead8 → ");
    Serial.println(value);
  }
  value = serial.digitalRead9();
  if(value == NULL) {
    Serial.println("digitalRead9 → NULL");
  } else {
    Serial.print("digitalRead9 → ");
    Serial.println(value);
  }
  value = serial.digitalRead10();
  if(value == NULL) {
    Serial.println("digitalRead10 → NULL");
  } else {
    Serial.print("digitalRead10 → ");
    Serial.println(value);
  }
  value = serial.digitalRead11();
  if(value == NULL) {
    Serial.println("digitalRead11 → NULL");
  } else {
    Serial.print("digitalRead11 → ");
    Serial.println(value);
  }
  value = serial.digitalRead12();
  if(value == NULL) {
    Serial.println("digitalRead12 → NULL");
  } else {
    Serial.print("digitalRead12 → ");
    Serial.println(value);
  }
  value = serial.digitalRead13();
  if(value == NULL) {
    Serial.println("digitalRead13 → NULL");
  } else {
    Serial.print("digitalRead13 → ");
    Serial.println(value);
  }
  return DEBUG;
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

int SerialMonitor::digitalRead2() {
  if(digitalRead2 == NULL) {
    return NULL;
  } else {
    return digitalRead2;
  }
}

int SerialMonitor::digitalRead3() {
  if(digitalRead3 == NULL) {
    return NULL;
  } else {
    return digitalRead3;
  }
}

int SerialMonitor::digitalRead4() {
  if(digitalRead4 == NULL) {
    return NULL;
  } else {
    return digitalRead4;
  }
}

int SerialMonitor::digitalRead5() {
  if(digitalRead5 == NULL) {
    return NULL;
  } else {
    return digitalRead5;
  }
}

int SerialMonitor::digitalRead6() {
  if(digitalRead6 == NULL) {
    return NULL;
  } else {
    return digitalRead6;
  }
}

int SerialMonitor::digitalRead7() {
  if(digitalRead7 == NULL) {
    return NULL;
  } else {
    return digitalRead7;
  }
}

int SerialMonitor::digitalRead8() {
  if(digitalRead8 == NULL) {
    return NULL;
  } else {
    return digitalRead8;
  }
}

int SerialMonitor::digitalRead9() {
  if(digitalRead9 == NULL) {
    return NULL;
  } else {
    return digitalRead9;
  }
}

int SerialMonitor::digitalRead10() {
  if(digitalRead10 == NULL) {
    return NULL;
  } else {
    return digitalRead10;
  }
}

int SerialMonitor::digitalRead11() {
  if(digitalRead11 == NULL) {
    return NULL;
  } else {
    return digitalRead11;
  }
}

int SerialMonitor::digitalRead12() {
  if(digitalRead12 == NULL) {
    return NULL;
  } else {
    return digitalRead12;
  }
}

int SerialMonitor::digitalRead13() {
  if(digitalRead13 == NULL) {
    return NULL;
  } else {
    return digitalRead13;
  }
}
