#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  
  delay(500);

  // Press Windows Key + R
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();

  delay(200);

  // Write ps / cmd
  Keyboard.print("powershell");

  delay(200);

  // Press Ctrl + Shift + Enter
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();

  delay(300);

  // Press Left Arrow
  Keyboard.press(KEY_LEFT_ARROW);
  delay(100);
  Keyboard.releaseAll();

  delay(200);

  // Press Enter
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
}

void loop() {

}
