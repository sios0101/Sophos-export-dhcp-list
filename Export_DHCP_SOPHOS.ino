  #include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
int c=0;
}

void loop() {

  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(KEY_C,MOD_CONTROL_LEFT );
  DigiKeyboard.delay(70);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(KEY_2,MOD_GUI_LEFT );  
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(KEY_V,MOD_CONTROL_LEFT);
    DigiKeyboard.delay(70);
  DigiKeyboard.print("\t");
   DigiKeyboard.delay(70);
   DigiKeyboard.sendKeyStroke(KEY_1,MOD_GUI_LEFT );
  DigiKeyboard.delay(70);
}
