#include <LiquidCrystal_I2C.h> //ini sialisasi untuk libary

int kolom = 16;
int baris = 2; //variabel untuk lcd

LiquidCrystal_I2C lcd(0x27, kolom, baris);  // mendefinisikan ukuran layar LCD


void setup() 
{
  lcd.init();    //digunakan untuk menginisialisasi LCD                  
  lcd.backlight();//berfungsi untuk menyalakan lampu latar (backlight) pada LCD
}

void loop() 
{
  int i;  
  lcd.setCursor(0,0);//Menyetel posisi kursor di baris pertama
  lcd.print("Selamat Datang");
  lcd.setCursor(0,1);
  lcd.print("DI ROCSU ROBOTIC USM");
  for (i = 0 ; i < 16; i++) 
  {
    lcd.scrollDisplayRight(); 
    delay(200);//membuat jeda 2 detik untuk scroling
  } 

}
