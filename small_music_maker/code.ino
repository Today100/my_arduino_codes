//www.elegoo.com
//2016.12.02

#include "pitches.h"
int buttonApin = 5;
int buttonBpin = 6;
int buttonCpin = 9;
int buttonDpin = 10;
int buttonEpin = 3;
 
// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 1000;  // 500 miliseconds




 
void setup() {
 pinMode(buttonApin, INPUT_PULLUP);
 pinMode(buttonBpin, INPUT_PULLUP);
 pinMode(buttonCpin, INPUT_PULLUP);
 pinMode(buttonDpin, INPUT_PULLUP);
 pinMode(buttonEpin, INPUT_PULLUP);
}
 
void loop() 
{  
//  for (int thisNote = 0; thisNote < 2; thisNote++) {
//    // pin2 output the voice, every scale is 0.5 sencond
//    tone(2, melody[thisNote], duration);
//     
//    // Output the voice after several minutes
//    delay(1000);
//  }
//   
//  // restart after two seconds 
//  delay(1000);
if (digitalRead(buttonEpin) == HIGH)
{
  if (digitalRead(buttonApin) == LOW)
  {tone(2, melody[0], 10);
  buttonBpin == HIGH;
  buttonCpin == HIGH;
  buttonDpin == HIGH;
  buttonEpin == HIGH;
  }
  if (digitalRead(buttonBpin) == LOW)
  {tone(2,melody[1], 10);
  buttonApin == HIGH;
  buttonCpin == HIGH;
  buttonDpin == HIGH;
  buttonEpin == HIGH;
  }
  if (digitalRead(buttonCpin) == LOW)
  {tone(2, melody[2], 10);
    buttonApin == HIGH;
  buttonBpin == HIGH;
  buttonDpin == HIGH;
  buttonEpin == HIGH;
  }
  if (digitalRead(buttonDpin) == LOW)
  {tone(2,melody[3], 10);
    buttonApin == HIGH;
  buttonBpin == HIGH;
  buttonCpin == HIGH;
  buttonEpin == HIGH;
  }
  }
if (digitalRead(buttonEpin) == LOW)
{
  if (digitalRead(buttonApin) == LOW)
  {tone(2, melody[4], 10);
  buttonBpin == HIGH;
  buttonCpin == HIGH;
  buttonDpin == HIGH;
  buttonEpin == HIGH;
  }
  if (digitalRead(buttonBpin) == LOW)
  {tone(2,melody[5], 10);
  buttonApin == HIGH;
  buttonCpin == HIGH;
  buttonDpin == HIGH;
  buttonEpin == HIGH;
  }
  if (digitalRead(buttonCpin) == LOW)
  {tone(2, melody[6], 10);
    buttonApin == HIGH;
  buttonBpin == HIGH;
  buttonDpin == HIGH;
  buttonEpin == HIGH;
  }
  if (digitalRead(buttonDpin) == LOW)
  {tone(2,melody[7], 10);
    buttonApin == HIGH;
  buttonBpin == HIGH;
  buttonCpin == HIGH;
  buttonEpin == HIGH;
  } 
}
 
}