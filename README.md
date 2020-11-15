# PS4 Joystic-Controlled Baby Monitor

<img src="https://i.ibb.co/Xj5jtgW/Baby-Monitor.png">

<img src="https://i.ibb.co/W05Fw9k/20201115-130529.jpg" ALIGN="right">

I bought this baby monitor, to monitor my baby.It worked fine. 

It was handheld and I could take it with me wherever I went, prop it on a countertop in the shed, etc. etc. One of the reasons I bought it was because it was not WiFi enabled. 

Fearing the Internet of Things, it seemed like a good choice at the time. 

The thing about handheld is that you've got to always hold it. 

When I want to turn the screen on or when I want to toggle the camera tilt or pan, I had to pick it up and hold it like a game controller. 

In an ideal world I could mount the screen among my growing array of screens (see: diagnostic screen, 3D printer screen, filament weight screen, PC screen) and access it from the comfort of my chair, checking in on baby without having to fumble for the monitor.

Silly, I know. 

Even silier that it would reqire adding some sort of wireless connectivity. I chose bluetooth and went about making a primo and secondo device which are wireless connected and send the PS4 joystick commands to the remote screen. It gets the job done. 

This modification could be adpted for any toggle-switch monitor you have. The pain comes in designing a suitable case to cram all the electronics into. I borrowed the motherboard, battery, antenna and screen from the original unit, then added all the Arduino components, including a switch and 9V battery and the monster is now thrice as large as the original box. That's not including the primo enclosure and components.

Impractical engineering, to be sure. But a good way to get into HC-05 pairing and AT Mode hell. I've included a few notes below on the case design (and failures) and on making an Arduino Uno standalone, as I'd explored replacing the Uno itself with something smaller and fitted for the needs of the mod and nothing more. I'll make a secondary repository when I've a moment.

Component | Source  | Price
------------ | -------------  | ------------- 
eufy Security Video Baby Monitor Camera | eBay | £64.93
Arduino Uno* | Amazon.co.uk | £19.79
Arduino Nano* | Amazon.co.uk | £21.60
HC-05 (x2) | Amazon.co.uk | £6.99 (for a pair)
KY-019 5V Relay | Amazon.co.uk | £6.09 (for 5)
Elegoo 4 Channel Relay | Amazon.co.uk | £6.99
PS2 Joystick | Amazon.co.uk |	£6.90 (for 5)
Li-Ion Lipo Battery | Amazon.co.uk |
Assorted Dupont Wires, switches, etc. | Amazon.co.uk |
Resistors | Amazon.co.uk |	£7.99 (assort. of 525)
TOTAL:   | | £141.28

*Any ATmega328 will do

*3D-print your case to fit your needs/space

#### Fritzing TK


#### Standalone UNO TK


#### Case Design Thoughts TK
