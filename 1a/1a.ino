#include <I2CIO.h>
#include <LCD.h>
#include <LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>
#include <LiquidCrystal_SR.h>
#include <LiquidCrystal_SR_LCD3.h>

int C[]={
 13,12,11};
int R[]={
 A1,A2,A3,A4};
char keymap[4][3]={
 {'1','2','3'},
 {'4','5','6'},
 {'7','8','9'},
 {'*','0','#'}
 };
 char key;
// LiquidCrystal lcd(PIN_LCD_DATA, PIN_LCD_CLOCK,
//PIN_LCD_STROBE );
 void setup(){
 for(int i=0; i<3; i++){
 pinMode(C[i],INPUT);
 }
 for(int i=0; i<4; i++){
 pinMode(R[i],OUTPUT);
 }
 //lcd.begin(16.0);
 }
 void loop(){
 scankeypad();
 //lcd.println(key);
 key=' ';
 }
 void scankeypad(){
 for(int i=0; i<4; i++){
 digitalWrite(R[i],LOW);
 for(int j=0; j<3; j++){
 if(digitalRead(C[j])==LOW){
 key=keymap[i][j];
 delay(500);
 }
 }
 digitalWrite(R[i],HIGH);
 }
 }
