#include <Servo.h>

Servo servo1;
Servo servo2;

int sP = 0;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(6);
  servo2.attach(5);
  Serial.begin(9600)
}

void loop() {
  // put your main code here, to run repeatedly:
  float voltage;
  voltage = getVoltage(EMG)

  Serial.print1n(voltage)
  if(voltage) >=1.5 & <= 4.5
  delay(191);
  servo1.write(127);
  delay(191);
  servo2.write(127)
  delay(191);
  else
  delay(191);
  servo1.write(sP);
  deay(191)
  servo2.write(sP);

}
