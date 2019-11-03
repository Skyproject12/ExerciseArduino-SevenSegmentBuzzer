#include <Keypad.h>
const byte ROWS=4; 
const byte COLS=3;
char keymap[ROWS][COLS]={
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}  
};

byte rowPins[ROWS]={A1,A2,A3,A4}; 
byte colPins[COLS]={13,12,11};
Keypad customKeypad= Keypad(makeKeymap(keymap),rowPins,colPins,ROWS,COLS);

int a=10; 
int b=9; 
int c=8; 
int d=7;
int e=6; 
int f=5;
int g=4;


void setup() { 
    for(int i=10; i>=4; i--){
        pinMode(i,OUTPUT);
    }
}

void loop() { 
  char customKey= customKeypad.getKey(); 
  switch(customKey){ 
      case '3':
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      break;

    case '2':
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      break;

    case '1':
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      break;

    case '6':
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;

    case '5':
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;

    case '4':
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
  }
} 
