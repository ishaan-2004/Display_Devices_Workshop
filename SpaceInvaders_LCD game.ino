#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // RS, E, D4, D5, D6, D7
byte customChar[] = {
  B00000,
  B00000,
  B10000,
  B11000,
  B00100,
  B11000,
  B10000,
  B00000
};

byte customChar1[] = {
  B00000,
  B00000,
  B10000,
  B11000,
  B00101,
  B11000,
  B10000,
  B00000
};

byte customChar2[] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B01100,
  B00000,
  B00000,
  B00000
};

byte customChar3[] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00011,
  B00000,
  B00000,
  B00000
};

byte customChar4[] = {
  B00000,
  B00000,
  B10100,
  B01010,
  B01100,
  B01010,
  B10100,
  B00000
};


byte customChar5[] = {
  B00000,
  B00000,
  B00100,
  B11010,
  B01100,
  B11010,
  B00100,
  B00000
};

byte customChar6[] = {
  B00000,
  B00000,
  B10100,
  B01010,
  B01101,
  B01010,
  B10100,
  B00000
};

byte customChar7[] = {
  B00000,
  B00000,
  B00100,
  B11010,
  B01101,
  B11010,
  B00100,
  B00000
};
void setup(){
  pinMode(A0,OUTPUT);
  pinMode(7,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
	Serial.begin(9600);
  lcd.begin(16,2);
lcd.createChar(4, customChar);
lcd.createChar(1, customChar1);
lcd.createChar(2, customChar2);
lcd.createChar(3, customChar3);
  lcd.createChar(4, customChar4);
  lcd.createChar(5, customChar5);
  lcd.createChar(6, customChar6);
  lcd.createChar(7, customChar7);
}

void loop(){
  int b=digitalRead(7);
  int c=digitalRead(6);
  lcd.setCursor(0,0);
  lcd.print("Space Invaders");
  lcd.setCursor(0,1);
  lcd.write(1);
  lcd.setCursor(15,0);lcd.write(4);
  lcd.setCursor(15,1);lcd.write(4);delay(3000);lcd.clear();
  
  if(c==1){
  lcd.setCursor(0,1);
  lcd.write(1);
  int a=15;  int d=1; int e=15;
  for(a&&d&&e;a>=1&&d<=15&&e>=1;a--&&d++&&e--){delay(300);
    lcd.setCursor(a,1);
    lcd.write(4);
    lcd.setCursor(e,0);
    lcd.write(4);
      lcd.setCursor(d,1);
         lcd.write(3);
          if(a<d){int bullet=1; for(bullet;bullet<=d;bullet++){
        	lcd.setCursor(bullet,1);
            lcd.write(3);a=15;
          }}
           
       if(a==1||e==1){
       lcd.clear();
       lcd.setCursor(5,0);
       lcd.print("Game Over");delay(4000);lcd.clear();
       }}
                 
  }
  
  }