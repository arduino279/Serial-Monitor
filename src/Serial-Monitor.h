String monitor_state = "Initializing...";

class SerialMonitor {
  public:
    initialize();
};

int SerialMonitor::initialize() {
  Serial.begin(9600);
  Serial.print(monitor_state);
  return true;
}