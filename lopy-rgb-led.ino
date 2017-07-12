/**
* This sketch shows how to program the LoPy builtin rgb led with Arduino IDE.
*/

#include <Adafruit_NeoPixel.h>

// Builtin rgb led pin on Pycom LoPy.
#define PIN 0

// You can set the max brightness value in the range from 0 to 255.
#define MAX_BRIGHTNESS 16

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(1, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  pixels.begin();
}

// Loops forever and shows random led colors.
void loop()
{
  pixels.setPixelColor(0, pixels.Color(random(0, MAX_BRIGHTNESS), random(0, MAX_BRIGHTNESS), random(0, MAX_BRIGHTNESS)));
  pixels.show();
  delay(200);
}
