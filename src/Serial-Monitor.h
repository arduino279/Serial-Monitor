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
  value = this->analogRead0();
  if(value == NULL) {
    Serial.println("analogRead0 → NULL");
  } else {
    Serial.print("analogRead0 → ");
    Serial.println(value);
  }
  value = this->analogRead1();
  if(value == NULL) {
    Serial.println("analogRead1 → NULL");
  } else {
    Serial.print("analogRead1 → ");
    Serial.println(value);
  }
  value = this->analogRead2();
  if(value == NULL) {
    Serial.println("analogRead2 → NULL");
  } else {
    Serial.print("analogRead2 → ");
    Serial.println(value);
  }
  value = this->analogRead3();
  if(value == NULL) {
    Serial.println("analogRead3 → NULL");
  } else {
    Serial.print("analogRead3 → ");
    Serial.println(value);
  }
  value = this->analogRead4();
  if(value == NULL) {
    Serial.println("analogRead4 → NULL");
  } else {
    Serial.print("analogRead4 → ");
    Serial.println(value);
  }
  value = this->analogRead5();
  if(value == NULL) {
    Serial.println("analogRead5 → NULL");
  } else {
    Serial.print("analogRead5 → ");
    Serial.println(value);
  }
  value = this->digitalRead2();
  if(value == NULL) {
    Serial.println("digitalRead2 → NULL");
  } else {
    Serial.print("digitalRead2 → ");
    Serial.println(value);
  }
  value = this->digitalRead3();
  if(value == NULL) {
    Serial.println("digitalRead3 → NULL");
  } else {
    Serial.print("digitalRead3 → ");
    Serial.println(value);
  }
  value = this->digitalRead4();
  if(value == NULL) {
    Serial.println("digitalRead4 → NULL");
  } else {
    Serial.print("digitalRead4 → ");
    Serial.println(value);
  }
  value = this->digitalRead5();
  if(value == NULL) {
    Serial.println("digitalRead5 → NULL");
  } else {
    Serial.print("digitalRead5 → ");
    Serial.println(value);
  }
  value = this->digitalRead6();
  if(value == NULL) {
    Serial.println("digitalRead6 → NULL");
  } else {
    Serial.print("digitalRead6 → ");
    Serial.println(value);
  }
  value = this->digitalRead7();
  if(value == NULL) {
    Serial.println("digitalRead7 → NULL");
  } else {
    Serial.print("digitalRead7 → ");
    Serial.println(value);
  }
  value = this->digitalRead8();
  if(value == NULL) {
    Serial.println("digitalRead8 → NULL");
  } else {
    Serial.print("digitalRead8 → ");
    Serial.println(value);
  }
  value = this->digitalRead9();
  if(value == NULL) {
    Serial.println("digitalRead9 → NULL");
  } else {
    Serial.print("digitalRead9 → ");
    Serial.println(value);
  }
  value = this->digitalRead10();
  if(value == NULL) {
    Serial.println("digitalRead10 → NULL");
  } else {
    Serial.print("digitalRead10 → ");
    Serial.println(value);
  }
  value = this->digitalRead11();
  if(value == NULL) {
    Serial.println("digitalRead11 → NULL");
  } else {
    Serial.print("digitalRead11 → ");
    Serial.println(value);
  }
  value = this->digitalRead12();
  if(value == NULL) {
    Serial.println("digitalRead12 → NULL");
  } else {
    Serial.print("digitalRead12 → ");
    Serial.println(value);
  }
  value = this->digitalRead13();
  if(value == NULL) {
    Serial.println("digitalRead13 → NULL");
  } else {
    Serial.print("digitalRead13 → ");
    Serial.println(value);
  }
  return DEBUG;
}

int SerialMonitor::analogRead0() {
  if(analogRead_0 == NULL) {
    return NULL;
  } else {
    return analogRead_0;
  }
}

int SerialMonitor::analogRead1() {
  if(analogRead_1 == NULL) {
    return NULL;
  } else {
    return analogRead_1;
  }
}

int SerialMonitor::analogRead2() {
  if(analogRead_2 == NULL) {
    return NULL;
  } else {
    return analogRead_2;
  }
}

int SerialMonitor::analogRead3() {
  if(analogRead_3 == NULL) {
    return NULL;
  } else {
    return analogRead_3;
  }
}

int SerialMonitor::analogRead4() {
  if(analogRead_4 == NULL) {
    return NULL;
  } else {
    return analogRead_4;
  }
}

int SerialMonitor::analogRead5() {
  if(analogRead_5 == NULL) {
    return NULL;
  } else {
    return analogRead_5;
  }
}

int SerialMonitor::digitalRead2() {
  if(digitalRead_2 == NULL) {
    return NULL;
  } else {
    return digitalRead_2;
  }
}

int SerialMonitor::digitalRead3() {
  if(digitalRead_3 == NULL) {
    return NULL;
  } else {
    return digitalRead_3;
  }
}

int SerialMonitor::digitalRead4() {
  if(digitalRead_4 == NULL) {
    return NULL;
  } else {
    return digitalRead_4;
  }
}

int SerialMonitor::digitalRead5() {
  if(digitalRead_5 == NULL) {
    return NULL;
  } else {
    return digitalRead_5;
  }
}

int SerialMonitor::digitalRead6() {
  if(digitalRead_6 == NULL) {
    return NULL;
  } else {
    return digitalRead_6;
  }
}

int SerialMonitor::digitalRead7() {
  if(digitalRead_7 == NULL) {
    return NULL;
  } else {
    return digitalRead_7;
  }
}

int SerialMonitor::digitalRead8() {
  if(digitalRead_8 == NULL) {
    return NULL;
  } else {
    return digitalRead_8;
  }
}

int SerialMonitor::digitalRead9() {
  if(digitalRead_9 == NULL) {
    return NULL;
  } else {
    return digitalRead_9;
  }
}

int SerialMonitor::digitalRead10() {
  if(digitalRead_10 == NULL) {
    return NULL;
  } else {
    return digitalRead_10;
  }
}

int SerialMonitor::digitalRead11() {
  if(digitalRead_11 == NULL) {
    return NULL;
  } else {
    return digitalRead_11;
  }
}

int SerialMonitor::digitalRead12() {
  if(digitalRead_12 == NULL) {
    return NULL;
  } else {
    return digitalRead_12;
  }
}

int SerialMonitor::digitalRead13() {
  if(digitalRead_13 == NULL) {
    return NULL;
  } else {
    return digitalRead_13;
  }
}
