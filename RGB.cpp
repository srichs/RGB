/*
 * RGB.cpp
 * created: Dec 2020
 */

#include "RGB.h"
#include "Arduino.h"

RGB::RGB(int redPin, int greenPin, int bluePin) {
  _redPin = redPin;
  _greenPin = greenPin;
  _bluePin = bluePin;
  _delay_val = 10;
}

RGB::RGB(int redPin, int greenPin, int bluePin, int delayValue) {
  _redPin = redPin;
  _greenPin = greenPin;
  _bluePin = bluePin;
  _delay_val = delayValue;
}

void RGB::color(int red, int green, int blue) {
  analogWrite(_redPin, red);
  analogWrite(_greenPin, green);
  analogWrite(_bluePin, blue);
}

void RGB::red() { color(255, 0, 0); }

void RGB::green() { color(0, 255, 0); }

void RGB::blue() { color(0, 0, 255); }

void RGB::yellow() { color(200, 230, 0); }

void RGB::cyan() { color(0, 255, 255); }

void RGB::magenta() { color(200, 0, 255); }

void RGB::white() { color(200, 230, 230); }

void RGB::off() { color(0, 0, 0); }

void RGB::loopDelay(int delayVal) { _delay_val = delayVal; }

void RGB::rainbowLoop() {
  for (int i = 0; i <= MAX_RGB_VALUE; i++) {
    color(MAX_RGB_VALUE, i, 0);
    delay(_delay_val);
  }
  for (int i = MAX_RGB_VALUE; i >= 0; i--) {
    color(i, MAX_RGB_VALUE, 0);
    delay(_delay_val);
  }
  for (int i = 0; i <= MAX_RGB_VALUE; i++) {
    color(0, MAX_RGB_VALUE, i);
    delay(_delay_val);
  }
  for (int i = MAX_RGB_VALUE; i >= 0; i--) {
    color(0, i, MAX_RGB_VALUE);
    delay(_delay_val);
  }
  for (int i = 0; i <= MAX_RGB_VALUE; i++) {
    color(i, 0, MAX_RGB_VALUE);
    delay(_delay_val);
  }
  for (int i = MAX_RGB_VALUE; i >= 0; i--) {
    color(MAX_RGB_VALUE, 0, i);
    delay(_delay_val);
  }
}
