This project displays the approximate processor usage on LED's on an Arduino. I used 5 LED's for simplicity. So, when LED1 is solid then that means processor usage is between 0-9%, if LED1 and LED2 are solid then processor usage is between 10-19%, etc... If LED1 is blinking, processor usage is between 50-59%, if LED1 is solid and LED2 is blinking then processor usage is between 60-69% etc... If none are lit then the usage is at 100%.



----------------SETUP----------------

Coming soon: Arduino wiring schematic once I have time to make one and figure out how. Until then, here's a written description:

Pin2->LED1->GND

Pin3->LED2->GND

Pin4->LED3->GND

Pin5->LED4->GND

Pin6->LED5->GND

Once the Arduino is connected, setup is easy: 



1. Flash the Arduino Uno with the arduino.ino file 

2. In your Windows search bar, type in "Device Manager" and hit enter

3. Expand the "Ports(Com & LPT)" section

4. Note which COM port the Arduino is on (often COM3), labelled as either Arduino or USB Serial Device

5. Run the included Powershell script, typing the port number found from step 4


