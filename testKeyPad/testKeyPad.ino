#include <Keypad.h> 

// Set the LCD address to 0x27 for a 16 chars and 2 line display

const byte ROWS = 4; 
const byte COLS = 3; 
char keys[ROWS][COLS] = 
{
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'A','0','B'}
};


byte colPins[COLS] = {5,6,7};
byte rowPins[ROWS] = {11,10,9,8}; 

Keypad keypadA = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

char inKey;


void setup()
{
 Serial.begin(9600);
}


void loop()
{
	  inKey=keypadA.getKey();             
    delay(1);
    
    if(inKey=='A'){
      Serial.println('A');
    }
    else if(inKey=='B'){
      Serial.println('B');
    }
    else if(inKey=='1'){
      Serial.println('1');
    }
     else if(inKey=='2'){
      Serial.println('2');
    }
     else if(inKey=='3'){
      Serial.println('3');
    }
     else if(inKey=='4'){
      Serial.println('4');
    }
     else if(inKey=='5'){
      Serial.println('5');
    }
     else if(inKey=='6'){
      Serial.println('6');
    }
     else if(inKey=='7'){
      Serial.println('7');
    }
     else if(inKey=='8'){
      Serial.println('8');
      delay(2000);
    }
     else if(inKey=='9'){
      Serial.println('9');
    }
     else if(inKey=='0'){
      Serial.println('0');
    }
     else {
     }
}
