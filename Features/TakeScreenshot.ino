#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  
  delay(500);

  // Press Windows Key + Print Screen
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_PRINT_SCREEN);
  delay(100);
  Keyboard.releaseAll();

  // Ensure that the screenshot was taken
  delay(500);

  // Press Windows Key + R
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();

  delay(200);

  // Screenshots folder
  Keyboard.print("%USERPROFILE%\\Pictures\\Screenshots");

  delay(200);

  // Press Enter
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
}

void loop() {

}
