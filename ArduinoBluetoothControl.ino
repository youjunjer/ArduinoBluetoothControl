#include <BluetoothSerial.h>
BluetoothSerial SerialBT;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  SerialBT.begin("BLETEST");//<<--rename
  pinMode(4,OUTPUT);//
  pinMode(16,OUTPUT);//

}

void loop() {
  
  if(SerialBT.available()){Serial.println("");}//new data
  while(SerialBT.available())
  {
    char btdata=SerialBT.read();
    if (btdata=='1'){digitalWrite(4,LOW);}
    if (btdata=='2'){digitalWrite(4,HIGH);}
    if (btdata=='3'){digitalWrite(16,LOW);}
    if (btdata=='4'){digitalWrite(16,HIGH);}

    Serial.print(btdata);
  }  
  delay(500);
}



