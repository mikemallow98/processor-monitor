This project displays the approximate processor usage on LED's on an Arduino. I used 5 LED's for simplicity. So, when LED1 is solid then that means processor usage is between 0-9%, if LED1 and LED2 are solid then processor usage is between 10-19%, etc... If LED1 is blinking, processor usage is between 50-59%, if LED1 is solid and LED2 is blinking then processor usage is between 60-69% etc... If none are lit then the usage is at 100%.



----------------SETUP----------------

![pin layout](https://github.com/mikemallow98/processor-monitor/blob/master/pin_layout.PNG)

This layout is a little messy so I made the GND wire green so it's a bit easier to see. If the image is still confusing, here's a written description. 

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

If you found this small program useful, please consider buying me a coffee so I can continue to create free programs :)

<a href='https://ko-fi.com/G2G0BMUL' target='_blank'><img height='36' style='border:0px;height:36px;' src='https://az743702.vo.msecnd.net/cdn/kofi2.png?v=0' border='0' alt='Buy Me a Coffee at ko-fi.com' /></a>

