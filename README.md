# ArduinoBluetoothControl
Use Android APP to control ESP32 device from bluetooth include voice command

This is a small demo for how to control ESP32 device from Android Phone by bluetooth.
In this demo, we provide button and voice command to turn on and off the light and fan.
The demo video is at Youtube: https://youtu.be/hUC-MHM_P04
In this project, we need to prepare those below
  1. ESP32:NodeMCU-32s
  2. 2 way Relay 
  3. A Fan
  4. A light 
  5. Android Phone and installed the APP: Arduino Bluetooth Control(Google Play: https://goo.gl/jEAmbu)
The key points of this project are 
  1. Using Android Phone sends string to ESP32 by Bluetooth
  2. ESP32 reads the string in Bluetooth
  3. Using the string to turn on or off the assigning pins. Ex. If string is ‘3’ then make pin 4 LOW and this will turn on the fan.
  ![alt text](https://raw.githubusercontent.com/username/projectname/branch/path/to/img.png)
