/*
 * RGB_Fade
 * author: srichs
 * created: Dec 2020
 */

#include <RGB.h>

RGB rgb(11, 10, 9); // Connect RGB LED to PWM pins: Red - 11, Green - 10, Blue - 9

void setup() {}

void loop() {
  rgb.rainbowLoop(); // Loops through the various color values of the RGB scale
}
