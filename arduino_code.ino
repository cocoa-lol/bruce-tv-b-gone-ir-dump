#include <SoftwareSerial.h>

SoftwareSerial mySerial(3, -1);

void setup() {
  Serial.begin(115200);
  mySerial.begin(115200);
}

void loop() {
  while (mySerial.available()) {
    int val = mySerial.read();
    Serial.print(val);
    Serial.print(" ");
  }
}
