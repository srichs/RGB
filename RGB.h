/*
 * RGB_h
 * created: Dec 2020
 */

#ifndef RGB_h
#define RGB_h

#include "Arduino.h"

/*!
 * A Library that is designed to setup a common cathode RGB LED with PWM
 * controls on an Arduino.
 * \author srichs
 */
class RGB {
public:
  /*!
   * The main constructor of the class.
   * \param redPin The PWM pin that is used for Red.
   * \param greenPin The PWM pin that is used for Green.
   * \param bluePin The PWM pin that is used for Blue.
   */
  RGB(int redPin, int greenPin, int bluePin);
  /*!
   * A constructor of the class.
   * \param redPin The PWM pin that is used for Red.
   * \param greenPin The PWM pin that is used for Green.
   * \param bluePin The PWM pin that is used for Blue.
   * \param delayVal The number of milliseconds of delay for the
   * rainbowLoop method.
   */
  RGB(int redPin, int greenPin, int bluePin, int delayVal);
  /*!
   * Sets the color of the RGB LED with the given RGB values.
   * \param red The value of Red, a value between 0 and 255;
   * \param green The value of Green, a value between 0 and 255;
   * \param blue The value of Blue, a value between 0 and 255;
   */
  void color(int red, int green, int blue);
  /*!
   * Sets the RGB LED to Red.
   */
  void red();
  /*!
   * Sets the RGB LED to Green.
   */
  void green();
  /*!
   * Sets the RGB LED to Blue.
   */
  void blue();
  /*!
   * Sets the RGB LED to Yellow.
   */
  void yellow();
  /*!
   * Sets the RGB LED to Cyan.
   */
  void cyan();
  /*!
   * Sets the RGB LED to Magenta.
   */
  void magenta();
  /*!
   * Sets the RGB LED to White.
   */
  void white();
  /*!
   * Sets the RGB LED off.
   */
  void off();
  /*!
   * Sets the millisecond delay for the rainbowLoop method.
   */
  void loopDelay(int delayVal);
  /*!
   * Performs a faded iteration through the spectrum that can be looped.
   */
  void rainbowLoop();

private:
  int _redPin;
  int _greenPin;
  int _bluePin;
  int _delay_val;
  static const int MAX_RGB_VALUE = 230;
};

#endif
