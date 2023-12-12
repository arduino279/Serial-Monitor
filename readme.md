# Serial Monitor

[![](https://img.shields.io/badge/Available_in_the_Arduino_Library_Manager-2ea44f)](https://www.arduino.cc/reference/en/libraries/serial_monitor/)

## Get Started

**Import**

1. Look up `Serial_Monitor` in the Library Manager and install the latest version
2. Insert the following snippet
 
```ino
#include <Serial-Monitor.h>
```

### Setup

```ino
#define DEBUG <boolean>
```
**Description** Enable or disable `SerialMonitor`

---

```ino
SerialMonitor serial;
```
**Description** Create a new `SerialMonitor` Object

**Parameters**
* `serial` Name of the class without spaces

---

```ino
Serial.begin(9600);
```
**Description** Setup the serial monitor

### Use

```ino
serial.initialize();
```
**Description** *No Description available*

**Parameters**
* `serial` Name of a declared class

---

```ino
if(serial.initialize() == true) {
  // Your code goes here
}
```
**Description** *No Description available*

**Parameters**
* `serial` Name of a declared class
