/*this code is written by NAMAN SHARMA on 8/3/2020
connect DIN PIN to 10
connect CS PIN to 9
connect CLK PIN to 8*/
#include <MaxMatrix.h>//download from https://code.google.com/archive/p/arudino-maxmatrix-library/downloads
int DIN = 10;   // DIN pin of MAX7219 module
int CLK = 8;   // CLK pin of MAX7219 module
int CS = 9;    // CS pin of MAX7219 module
int maxInUse = 1;
MaxMatrix m(DIN, CS, CLK, maxInUse); 
char A[] = {8, 8,//you can make or edit my animation by https://www.riyas.org/2013/12/online-led-matrix-font-generator-with.html and copy the binary and paste
            B00111000,
B01000100,
B01000100,
B01000100,
B01111100,
B01000100,
B01000100,
B01000100};
char B[] = {8, 8,
       
            B01111000,
B01000100,
B01000100,
B01111000,
B01000100,
B01000100,
B01111000,
B00000000};
char c[] = {8, 8,
B00000000,
B00111100,
B01000000,
B01000000,
B01000000,
B01000000,
B00111100,
B00000000};
  
char d[] = {8, 8,
                  B00000000,
B01111000,
B01000100,
B01000100,
B01000100,
B01000100,
B01111000,
B00000000};
char e[] = {8, 8,
                  B00000000,
B01111100,
B01000000,
B01000000,
B01111100,
B01000000,
B01000000,
B01111100};

char f[] = {8, 8,
                  B00000000,
B01111100,
B01000000,
B01000000,
B01111100,
B01000000,
B01000000,
B01000000};



char g[] = {8, 8,
                  B00000000,
B00111100,
B01000000,
B01000000,
B01000000,
B01001110,
B01000010,
B00111110};


char h[] = {8, 8,
                  B00000000,
B01000100,
B01000100,
B01111100,
B01000100,
B01000100,
B01000100,
B00000000};

char i[] = {8, 8,
                  B00000000,
B01111100,
B00010000,
B00010000,
B00010000,
B00010000,
B01111100,
B00000000};

char j[] = {8, 8,
                  B00000000,
B00000100,
B00000100,
B00000100,
B00000100,
B01000100,
B00111000,
B00000000};

char k[] = {8, 8,
                  B00000000,
B00100100,
B00101000,
B00110000,
B00101000,
B00100100,
B00100010,
B00000000};

char l[] = {8, 8,
                  B00000000,
B01000000,
B01000000,
B01000000,
B01000000,
B01000000,
B01111100,
B00000000};


char jk[] = {8, 8,//its m it was coming error so i wrote jk
                  B00000000,
B01000010,
B01100110,
B01011010,
B01000010,
B01000010,
B01000010,
B00000000};

char n[] = {8, 8,
                  B00000000,
B01000010,
B01100010,
B01010010,
B01001010,
B01000110,
B01000010,
B00000000};

char o[] = {8, 8,
                  B00111100,
B01000010,
B01000010,
B01000010,
B01000010,
B01000010,
B01000010,
B00111100};

char p[] = {8, 8,
                  B00000000,
B00111000,
B00100100,
B00100100,
B00111000,
B00100000,
B00100000,
B00000000};

char q[] = {8, 8,
                  B00111100,
B01000010,
B01000010,
B01000010,
B01001010,
B01000110,
B00111110,
B00000001};

char r[] = {8, 8,
                  B01111000,
B01000100,
B01000100,
B01111000,
B01100000,
B01010000,
B01001000,
B01000100};

char s[] = {8, 8,
                  B00111100,
B01000000,
B01000000,
B00111000,
B00000100,
B00000100,
B01111000,
B00000000};

char t[] = {8, 8,
                  B00000000,
B01111100,
B00010000,
B00010000,
B00010000,
B00010000,
B00010000,
B00000000};

char u[] = {8, 8,
                  B00000000,
B01000010,
B01000010,
B01000010,
B01000010,
B01000010,
B00111100,
B00000000};

char v[] = {8, 8,
                  B00000000,
B00100100,
B00100100,
B00100100,
B00100100,
B00100100,
B00011000,
B00000000};

char w[] = {8, 8,
                  B00000000,
B01010100,
B01010100,
B01010100,
B01010100,
B01010100,
B00111000,
B00000000};

char x[] = {8, 8,
                  B00000000,
B01000100,
B00101000,
B00010000,
B00101000,
B01000100,
B00000000,
B00000000};

char y[] = {8, 8,
                  B10000001,
B01000010,
B00100100,
B00011000,
B00011000,
B00011000,
B00011000,
B00011000};

char z[] = {8, 8,
                  B00000000,
B01111100,
B00001000,
B00010000,
B00100000,
B01111100,
B00000000,
B00000000};

void setup() {
  m.init(); // MAX7219 initialization
  m.setIntensity(5); // initial led matrix intensity, 0-15
}
void loop() {
  // Seting the LEDs On or Off at x,y or row,column position
  m.setDot(6,2,true); 
  delay(1000);
  m.setDot(6,3,true);
  delay(1000);
  m.clear(); // Clears the display
  for (int i=0; i<8; i++){
    m.setDot(i,i,true);
    delay(300);
  }
  m.clear();
  // Displaying the character at x,y (upper left corner of the character)  
  m.writeSprite(0, 0, A);
  delay(1000);
  m.writeSprite(0, 0, B);
  delay(1000);
  m.writeSprite(0, 0, c);
  delay(1000);
  
  m.writeSprite(0, 0, d);
  delay(1000);
  
  m.writeSprite(0, 0, e);
  delay(1000);
 
  m.writeSprite(0, 0, f);
  delay(1000);
  
 m.writeSprite(0, 0, g);
  delay(1000);
 
 m.writeSprite(0, 0, h);
 delay(1000);
  
 m.writeSprite(0, 0, i);
 delay(1000);

m.writeSprite(0, 0, j);
 delay(1000);

 m.writeSprite(0, 0, k);
 delay(1000);

 m.writeSprite(0, 0, l);
 delay(1000);

 m.writeSprite(0, 0, jk);
 delay(1000);

m.writeSprite(0, 0, n);
 delay(1000);

 m.writeSprite(0, 0, o);
 delay(1000);
 
  m.writeSprite(0, 0, p);
 delay(1000);

  m.writeSprite(0, 0, q);
 delay(1000);

  m.writeSprite(0, 0, r);
 delay(1000);

  m.writeSprite(0, 0, s);
 delay(1000);

  m.writeSprite(0, 0, t);
 delay(1000);

  m.writeSprite(0, 0, u);
 delay(1000);

  m.writeSprite(0, 0, v);
 delay(1000);

  m.writeSprite(0, 0, w);
 delay(1000);

  m.writeSprite(0, 0, x);
 delay(1000);

 m.writeSprite(0, 0, y);
 delay(1000);

 m.writeSprite(0, 0, z);
 delay(1000);
  }
  
