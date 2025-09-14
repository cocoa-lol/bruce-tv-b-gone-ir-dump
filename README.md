# bruce-tv-b-gone-ir-dump
This is a raw IR dump of the Bruce Firmware TV-B-Gone IR spammer.
Currently, there are numbers such as 14155 and 14646. These are two commands combined as that is how they are sent. They are not sent as seperate lines.

# How I did it
I used an Arduino Nano connected to my M5Stack StickC Plus 2 running Bruce 1.11 Beta Firmware.

# How to do it yourself
First, Set the IR TX pin to a GPIO pin that is compatible with your device, in this case, I will refer to it as "G26".
Next, Upload the code in the file "arduino_code.ino" to your Arduino.
Then, connect G26 to a pin on your Arduino, it is recommended to use D3 as that is what the code is written for.
Then, connect GND on your device running Bruce to GND on your Arduino.
Next, open a serial console (https://www.serialterminal.com/ is recommended) with the Baud 115200. The console should be connected to your Arduino.
Finally, run TV-B-Gone on your device running Bruce, and the codes should be printed to the serial console.

If you have any issues, please open an issue.
