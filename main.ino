#include <BleGamepad.h>

#define JOYSTICK_X 34
#define JOYSTICK_Y 35

#define BUTTON_A 25
#define BUTTON_B 26
#define BUTTON_X 27
#define BUTTON_Y 14

BleGamepad bleGamepad;

void setup() {
  Serial.begin(115200);

  // Initialize buttons
  pinMode(BUTTON_A, INPUT_PULLUP);
  pinMode(BUTTON_B, INPUT_PULLUP);
  pinMode(BUTTON_X, INPUT_PULLUP);
  pinMode(BUTTON_Y, INPUT_PULLUP);

  // Start BLE Gamepad
  bleGamepad.begin();
}

void loop() {
  if (bleGamepad.isConnected()) {
    // Joystick values (map 0-4095 to -127 to 127)
    int joyX = map(analogRead(JOYSTICK_X), 0, 4095, -127, 127);
    int joyY = map(analogRead(JOYSTICK_Y), 0, 4095, -127, 127);

    bleGamepad.setLeftThumb(joyX, joyY);
    bleGamepad.sendReport();

    // Read buttons (active LOW)
    bleGamepad.press(BUTTON_1, digitalRead(BUTTON_A) == LOW);
    bleGamepad.press(BUTTON_2, digitalRead(BUTTON_B) == LOW);
    bleGamepad.press(BUTTON_3, digitalRead(BUTTON_X) == LOW);
    bleGamepad.press(BUTTON_4, digitalRead(BUTTON_Y) == LOW);

    delay(20); // Small delay for stability
  }
}
