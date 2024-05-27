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

  /* PowerShell
  Remove "-noexit" argument to terminate after the specified command is executed
  Change "ipconfig" to your command
  */
  Keyboard.print("powershell -noexit -command \"ipconfig\"");

  /* CMD
  /C Argument carries out the command specified and then terminates
  /K Argument carries out the command specified but remains
  Change "ipconfig" to your command
  */
  // Keyboard.print("cmd /k \"ipconfig\"");

  delay(200);

  // Press Enter
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
}

void loop() {
  
}
