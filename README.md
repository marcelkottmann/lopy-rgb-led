# Program LoPY RGB LED with Arduino IDE
This sketch shows how to program the LoPy builtin rgb led.

Read here to configure your Arduino IDE for the Pycom LoPy board:
https://www.thethingsnetwork.org/labs/story/program-your-lopy-from-the-arduino-ide-using-lmic

WARNING: Pin P2 (aka G23 on extension board and GPIO0 on ESP32 chip) is the internal led 
programming pin. Because G23 is also the pin which must be connected to ground during 
programming you have to power off the Lopy (unplug USB cable) completely before wiring P23 
to ground and turn it on again (plug in the USB cable). Otherwise you risk a short circuit!   
