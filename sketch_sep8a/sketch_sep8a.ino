#include <Keyboard.h>

const int leftA = 2;
const int rightA = 3;
int buttonL = 0;
int buttonR = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(leftA, INPUT);
  pinMode(rightA, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonL = digitalRead(leftA);
  buttonR = digitalRead(rightA);
  
  if (buttonL == HIGH){
    if (buttonL && buttonR == HIGH){
   
    Keyboard.press(KEY_KP_ENTER);
    Keyboard.release(KEY_KP_ENTER);
    delay(300);
  }
    Keyboard.press(KEY_LEFT_ARROW);
    Keyboard.release(KEY_LEFT_ARROW);
    delay(300);
  }
  if (buttonR == HIGH){
    
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(300);
  }
  
}
