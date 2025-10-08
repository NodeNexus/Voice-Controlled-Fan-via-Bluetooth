#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); // RX, TX
int relay = 8;

void setup() {
  Serial.begin(9600);
  BT.begin(9600);
  pinMode(relay, OUTPUT);
}

void loop() {
  if (BT.available()) {
    String cmd = BT.readString();
    cmd.trim();
    if (cmd == "ON") {
      digitalWrite(relay, HIGH);
      Serial.println("Fan ON");
    } else if (cmd == "OFF") {
      digitalWrite(relay, LOW);
      Serial.println("Fan OFF");
    }
  }
}
