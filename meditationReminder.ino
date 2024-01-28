#include<LiquidCrystal.h>

// The LCD is usually interfaced via 16 pins which are labelled as shown below:
                         //Connections to Arduino
                         //  LCD                                                 Connection
                         //  1. GND - Ground                                     GND
                         //  2. VDD - 3 - 5V                                     5V
                         //  3. VO  - Contrast                                   (Tap off a 5K - 10K pot across VCC and Ground)
#define LCD_RS         8 //  4. RS  - Register Select - 0=Command / 1=Character  Arduino Pin as defined
                         //  5. RW  - Read/Write - 0=Write or 1=Read             GND
#define LCD_ENABLE     9 //  6. E   - Enable - Enable data transmit              Arduino Pin as defined
                         //  7. DB0 - Data Bit 0                                 N/A
                         //  8. DB1 - Data Bit 1                                 N/A
                         //  9. DB2 - Data Bit 2                                 N/A
                         // 10. DB3 - Data Bit 3                                 N/A
#define LCD_DB4        4 // 11. DB4 - Data Bit 4 - used in 4 bit operation       Arduino Pin as defined
#define LCD_DB5        5 // 12. DB5 - Data Bit 5 - used in 4 bit operation       Arduino Pin as defined
#define LCD_DB6        6 // 13. DB6 - Data Bit 6 - used in 4 bit operation       Arduino Pin as defined
#define LCD_DB7        7 // 14. DB7 - Data Bit 7 - used in 4 bit operation       Arduino Pin as defined
#define LCD_Backlight 10 // 15. BL1 - Backlight +                                Emitter of 2N3904, Collector to VCC, Base to D10 via 10K resistor
                         // 16. BL2 - Backlight - 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int i = 0;

byte customChar[] = {
  B00000,
  B00000,
  B11011,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000
};

int backLight = 13;

// LiquidCrystal lcd(LCD_RS, LCD_ENABLE, LCD_DB4, LCD_DB5, LCD_DB6, LCD_DB7);

int delayPeriod = 500;
void setup()
{
  lcd.begin(16, 2);
  lcd.clear();
  pinMode(backLight, HIGH);
}

void loop()
{
  if (i % 2 == 0) {
    lcd.clear();
    lcd.print(" ");
    delay(delayPeriod);
    lcd.print("O");
    delay(delayPeriod);
    lcd.print("M ");
    delay(delayPeriod);
    lcd.print("S");
    delay(delayPeriod);
    lcd.print("H");
    delay(delayPeriod);
    lcd.print("A");
    delay(delayPeriod);
    lcd.print("N");
    delay(delayPeriod);
    lcd.print("T");
    delay(delayPeriod);
    lcd.print("I ");
    delay(delayPeriod);
    lcd.print("O");
    delay(delayPeriod);
    lcd.print("M");
    delay(delayPeriod);
    lcd.print("!");
    delay(delayPeriod);
    lcd.createChar(0, customChar);
    lcd.setCursor(15, 0);
    lcd.write((byte)0);
    delay(delayPeriod * 2);
    lcd.setCursor(2, 1);
    lcd.print(" ");
    delay(delayPeriod);
    lcd.print("I ");
    delay(delayPeriod);
    lcd.createChar(0, customChar);
    lcd.setCursor(5, 1);
    lcd.write((byte)0);
    delay(delayPeriod);
    lcd.print(" ");
    delay(delayPeriod);
    lcd.print("Y");
    delay(delayPeriod);
    lcd.print("O");
    delay(delayPeriod);
    lcd.print("G");
    delay(delayPeriod);
    lcd.print("A");
    delay(delayPeriod);
    lcd.print("!");
    delay(delayPeriod * 2);
  }
  else {
    lcd.clear();
    lcd.print("  ");
    delay(delayPeriod);
    lcd.print("R");
    delay(delayPeriod);
    lcd.print("E");
    delay(delayPeriod);
    lcd.print("M");
    delay(delayPeriod);
    lcd.print("E");
    delay(delayPeriod);
    lcd.print("M");
    delay(delayPeriod);
    lcd.print("B");
    delay(delayPeriod);
    lcd.print("E");
    delay(delayPeriod);
    lcd.print("R ");
    delay(delayPeriod);
    lcd.print("T");
    delay(delayPeriod);
    lcd.print("O");
    delay(delayPeriod);
    lcd.print("  ");
    lcd.setCursor(2, 1);
    lcd.print(" ");
    delay(delayPeriod);
    lcd.print("M");
    delay(delayPeriod);
    lcd.print("E");
    delay(delayPeriod);
    lcd.print("D");
    delay(delayPeriod);
    lcd.print("I");
    delay(delayPeriod);
    lcd.print("T");
    delay(delayPeriod);
    lcd.print("A");
    delay(delayPeriod);
    lcd.print("T");
    delay(delayPeriod);
    lcd.print("E");
    delay(delayPeriod);
    lcd.createChar(1, customChar);
    lcd.setCursor(12, 1);
    lcd.write((byte)0);
    lcd.print("   ");
    delay(delayPeriod);
    delay(delayPeriod * 4);
  }

  i++;
}
