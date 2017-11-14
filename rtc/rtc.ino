/*
 Event countdown to a specified date(or time) using the ds1307
 
 */

#include "Wire.h"
// #include <MsTimer2.h>
#define DS1307_I2C_ADDRESS 0x68
byte yearA;
byte monthA;
long days;
long daysf;
const int Disp1 = 4;                  // setting up the pins for the displays
const int Disp2 = 3;
const int Disp3 = 2;
const int segA = 5;
const int segB = 6;
const int segC = 7;
const int segD = 8;
const int segE = 9;
const int segF = 11;
const int segG = 10;
const int numDisplays = 3;
int digits[numDisplays] = {3, 2, 1};
const int displayPins[numDisplays] = {Disp1, Disp2, Disp3};
int digitCounter = 0;

void displayIsr() {
  digitalWrite(displayPins[digitCounter], HIGH);
  ++digitCounter;
  if (digitCounter == numDisplays) { digitCounter = 0; }
  number(digits[digitCounter]);
  digitalWrite(displayPins[digitCounter], LOW);
}

// Convert normal decimal numbers to binary coded decimal
byte decToBcd(byte val)
{
  return ( (val/10*16) + (val%10) );
}

// Convert binary coded decimal to normal decimal numbers
byte bcdToDec(byte val)
{
  return ( (val/16*10) + (val%16) );
}

// 1) Sets the date and time on the ds1307
// 2) Starts the clock
// 3) Sets hour mode to 24 hour clock

// Assumes you're passing in valid numbers

void setDateDs1307(byte second,        // 0-59
byte minute,        // 0-59
byte hour,          // 1-23
byte dayOfWeek,     // 1-7
byte dayOfMonth,    // 1-28/29/30/31
byte month,         // 1-12
byte year)          // 0-99
{
  Wire.beginTransmission(DS1307_I2C_ADDRESS);
  Wire.write(0);
  Wire.write(decToBcd(second));    // 0 to bit 7 starts the clock
  Wire.write(decToBcd(minute));
  Wire.write(decToBcd(hour));     
  Wire.write(decToBcd(dayOfWeek));
  Wire.write(decToBcd(dayOfMonth));
  Wire.write(decToBcd(month));
  Wire.write(decToBcd(year));
  Wire.write(00010000); // sends 0x10 (hex) 00010000 (binary) to control register - turns on square wave
  Wire.endTransmission();
}

// Gets the date and time from the ds1307
void getDateDs1307(byte *second,
byte *minute,
byte *hour,
byte *dayOfWeek,
byte *dayOfMonth,
byte *month,
byte *year)

{
  // Reset the register pointer
  Wire.beginTransmission(DS1307_I2C_ADDRESS);
  Wire.write(0);
  Wire.endTransmission();

  Wire.requestFrom(DS1307_I2C_ADDRESS, 7);

  // A few of these need masks because certain bits are control bits
  *second     = bcdToDec(Wire.read() & 0x7f);
  *minute     = bcdToDec(Wire.read());
  *hour       = bcdToDec(Wire.read() & 0x3f);  // Need to change this if 12 hour am/pm
  *dayOfWeek  = bcdToDec(Wire.read());
  *dayOfMonth = bcdToDec(Wire.read());
  *month      = bcdToDec(Wire.read());
  *year       = bcdToDec(Wire.read());
}

void setup()
{
  byte second, minute, hour, dayOfWeek, dayOfMonth, month, year;
  pinMode(Disp1, OUTPUT);
  pinMode(Disp2, OUTPUT);
  pinMode(Disp3, OUTPUT);
  digitalWrite(Disp1, HIGH);
  digitalWrite(Disp2, HIGH);
  digitalWrite(Disp3, HIGH);
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);  
  Wire.begin();
  Serial.begin(9600);
  
  

  // Change these values to what you want to set your clock to.
  // and then comment out the setDateDs1307 call.
  //and upload sketch again

  second = 0;
  minute = 20;
  hour = 13;
  dayOfWeek = 2;
  dayOfMonth = 14;
  month = 11;
  year = 17;
// setDateDs1307(second, minute, hour, dayOfWeek, dayOfMonth, month, year);
 // MsTimer2::set(1, &displayIsr);
 // MsTimer2::start();

}



void loop()
{
  byte second, minute, hour, dayOfWeek, dayOfMonth, month, year;
  byte yearA;
  byte monthA;
  getDateDs1307(&second, &minute, &hour, &dayOfWeek, &dayOfMonth, &month, &year);
  Serial.print(hour, DEC);// convert the byte variable to a decimal number when being displayed
  Serial.print(":");
  if (minute<10)
  {
      Serial.print("0");
  }
  Serial.print(minute, DEC);
  Serial.print(":");
  if (second<10)
  {
      Serial.print("0");
  }
  Serial.print(second, DEC);
  Serial.print("  ");
  Serial.print(dayOfMonth, DEC);
  Serial.print("/");
  Serial.print(month, DEC);
  Serial.print("/");
  Serial.print(year, DEC);
  Serial.print("  Day of week:");
  switch(dayOfWeek){
  case 1: 
    Serial.println("Sunday");
    break;
  case 2: 
    Serial.println("Monday");
    break;
  case 3: 
    Serial.println("Tuesday");
    break;
  case 4: 
    Serial.println("Wednesday");
    break;
  case 5: 
    Serial.println("Thursday");
    break;
  case 6: 
    Serial.println("Friday");
    break;
  case 7: 
    Serial.println("Saturday");
    break;
  }
  if (month <3) {//if month is January or February subtract 1 from year and use in yearA
      yearA=year-1;
    }
    else {
      yearA=year;
    } 
    if (month <3) {//if month is January or February add 12 to the month and use in monthA
    monthA=month +12;
    }
    else {
    monthA=month;
    }
  //  Serial.println(dayOfWeek, DEC);
   delay(1000);
  /*The following calculates days to set countdown with the following formula
    If month is 1 or 2 add 12 to the month and subtract 1 from the year 
    then apply the following formula
    365*year + year/4 - year/100 + year/400 + date + (153*month+8)/5 all integers rounded down
    Do this for the current date and the future date and subtract one from the other then 
    display the days remaining on the 7 segment display*/
    days=365L*(yearA+2000L) + (2000L+yearA)/4L - (2000L+yearA)/100L + (2000L+yearA)/400L + dayOfMonth + (153L*monthA+8L)/5L;
    /* Below is the function to perform the calculation on the date till the event. 
    I have set the now.year because I will always be counting down till the
    25th December in the current year. Just alter the year and month and day values
    for other dates*/
    daysf=365L*(year+2000L) + (2000L+year)/4L - (2000L+year)/100L + (2000L+year)/400L + 25L + (153L*12L+8L)/5L;
    unsigned int diff = daysf - days;
    digits[0] = diff%10;
    digits[1] = (diff >= 10) ? (diff/10)%10 : 10;
    digits[2] = (diff >= 100) ? (diff/100)%10 : 10;
    delay (500);
    Serial.println (days);
    Serial.println (daysf);
    Serial.println (diff);
}
 
void number(int var)
{
  switch(var)
  {
    case 0:
    digitalWrite(segG, HIGH);
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    break;
    
    case 1:
    digitalWrite(segA, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    break;
    
    case 2:
    digitalWrite(segC, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segG, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segD, LOW);    
    break;
    
    case 3:
    digitalWrite(segF, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segG, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    break;

    case 4:
    digitalWrite(segA, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    break;
    
    case 5:
    digitalWrite(segB, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    break;   
    
    case 6:   
    digitalWrite(segB, HIGH);
    digitalWrite(segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segG, LOW);
    break;
    
    case 7:
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segD, HIGH); 
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    break;
    
    case 8:
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
    break;
    
    case 9:
    digitalWrite(segE, HIGH);
    digitalWrite(segG, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    break;
    
    case 10:
    digitalWrite(segE, HIGH);
    digitalWrite(segG, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    break;
    default:
    break;
   
  }
}