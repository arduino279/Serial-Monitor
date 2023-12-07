String monitor_state = "Initializing...";
int var = 0;

class SerialMonitor {
  public:
    initialize();
};

int SerialMonitor::initialize() {
  Serial.begin(9600);
  Serial.print(monitor_state);
  while(var > 200) {}
  return true;
}
