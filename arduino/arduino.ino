#include "Wire.h"
#define DS1307_I2C_ADDRESS 0x68
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))
int ledPins[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
int pinCount = 14;

void allOff() {
  for (int i = 0; i < pinCount; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}
void writeAryHigh(int *ary, int size) {
  for (int i = 0; i < size ; ++i) {
    digitalWrite(ary[i], HIGH);
  }
}
void zero(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 15, 14, 4, 5, 6, 3 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void one(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void two(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 15, 14, 5, 6, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void three(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 15, 14, 4, 5, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void four(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 14, 4, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void five(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 15, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void six(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 15, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void seven(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 15, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void eight(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 15, 14, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void nine(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 15, 14, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void ten(void) {
  int ary[] = { 7, 11, 15, 14, 4, 5, 6, 3 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void eleven(void) {
  int ary[] = { 7, 11, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void twelve(void) {
  int ary[] = { 7, 11, 15, 14, 5, 6, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void thirteen(void) {
  int ary[] = { 7, 11, 15, 14, 4, 5, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fourteen(void) {
  int ary[] = { 7, 11, 14, 4, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fifteen(void) {
  int ary[] = { 7, 11, 15, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void sixteen(void) {
  int ary[] = { 7, 11, 15, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void seventeen(void) {
  int ary[] = { 7, 11, 15, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void eighteen(void) {
  int ary[] = { 7, 11, 15, 14, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void nineteen(void) {
  int ary[] = { 7, 11, 15, 14, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void twenty(void) {
  int ary[] = { 8, 7, 12, 13, 9, 15, 14, 4, 5, 6, 3 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void twentyone(void) {
  int ary[] = { 8, 7, 12, 13, 9, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void twentytwo(void) {
  int ary[] = { 8, 7, 12, 13, 9, 15, 14, 5, 6, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void twentythree(void) {
  int ary[] = { 8, 7, 12, 13, 9, 15, 14, 4, 5, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void twentyfour(void) {
  int ary[] = { 8, 7, 12, 13, 9, 14, 4, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void twentyfive(void) {
  int ary[] = { 8, 7, 12, 13, 9, 15, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void twentysix(void) {
  int ary[] = { 8, 7, 12, 13, 9, 15, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void twentyseven(void) {
  int ary[] = { 8, 7, 12, 13, 9, 15, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void twentyeight(void) {
  int ary[] = { 8, 7, 12, 13, 9, 15, 14, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void twentynine(void) {
  int ary[] = { 8, 7, 12, 13, 9, 15, 14, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void thirty(void) {
  int ary[] = { 8, 7, 11, 12, 9, 15, 14, 4, 5, 6, 3 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void thirtyone(void) {
  int ary[] = { 8, 7, 11, 12, 9, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void thirtytwo(void) {
  int ary[] = { 8, 7, 11, 12, 9, 15, 14, 5, 6, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void thirtythree(void) {
  int ary[] = { 8, 7, 11, 12, 9, 15, 14, 4, 5, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void thirtyfour(void) {
  int ary[] = { 8, 7, 11, 12, 9, 14, 4, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void thirtyfive(void) {
  int ary[] = { 8, 7, 11, 12, 9, 15, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void thirtysix(void) {
  int ary[] = { 8, 7, 11, 12, 9, 15, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void thirtyseven(void) {
  int ary[] = { 8, 7, 11, 12, 9, 15, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void thirtyeight(void) {
  int ary[] = { 8, 7, 11, 12, 9, 15, 14, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void thirtynine(void) {
  int ary[] = { 8, 7, 11, 12, 9, 15, 14, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void forty(void) {
  int ary[] = { 7, 11, 10, 9, 15, 14, 4, 5, 6, 3 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fortyone(void) {
  int ary[] = { 7, 11, 10, 9, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fortytwo(void) {
  int ary[] = { 7, 11, 10, 9, 15, 14, 5, 6, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fortythree(void) {
  int ary[] = { 7, 11, 10, 9, 15, 14, 4, 5, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fortyfour(void) {
  int ary[] = { 7, 11, 10, 9, 14, 4, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fortyfive(void) {
  int ary[] = { 7, 11, 10, 9, 15, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fortysix(void) {
  int ary[] = { 7, 11, 10, 9, 15, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fortyseven(void) {
  int ary[] = { 7, 11, 10, 9, 15, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fortyeight(void) {
  int ary[] = { 7, 11, 10, 9, 15, 14, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fortynine(void) {
  int ary[] = { 7, 11, 10, 9, 15, 14, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fifty(void) {
  int ary[] = { 8, 11, 12, 10, 9, 15, 14, 4, 5, 6, 3 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fiftyone(void) {
  int ary[] = { 8, 11, 12, 10, 9, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fiftytwo(void) {
  int ary[] = { 8, 11, 12, 10, 9, 15, 14, 5, 6, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fiftythree(void) {
  int ary[] = { 8, 11, 12, 10, 9, 15, 14, 4, 5, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fiftyfour(void) {
  int ary[] = { 8, 11, 12, 10, 9, 14, 4, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fiftyfive(void) {
  int ary[] = { 8, 11, 12, 10, 9, 15, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fiftysix(void) {
  int ary[] = { 8, 11, 12, 10, 9, 15, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fiftyseven(void) {
  int ary[] = { 8, 11, 12, 10, 9, 15, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fiftyeight(void) {
  int ary[] = { 8, 11, 12, 10, 9, 15, 14, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void fiftynine(void) {
  int ary[] = { 8, 11, 12, 10, 9, 15, 14, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void sixty(void) {
  int ary[] = { 8, 11, 12, 13, 10, 9, 15, 14, 4, 5, 6, 3 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void sixtyone(void) {
  int ary[] = { 8, 11, 12, 13, 10, 9, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void sixtytwo(void) {
  int ary[] = { 8, 11, 12, 13, 10, 9, 15, 14, 5, 6, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void sixtythree(void) {
  int ary[] = { 8, 11, 12, 13, 10, 9, 15, 14, 4, 5, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void sixtyfour(void) {
  int ary[] = { 8, 11, 12, 13, 10, 9, 14, 4, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void sixtyfive(void) {
  int ary[] = { 8, 11, 12, 13, 10, 9, 15, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void sixtysix(void) {
  int ary[] = { 8, 11, 12, 13, 10, 9, 15, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void sixtyseven(void) {
  int ary[] = { 8, 11, 12, 13, 10, 9, 15, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void sixtyeight(void) {
  int ary[] = { 8, 11, 12, 13, 10, 9, 15, 14, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void sixtynine(void) {
  int ary[] = { 8, 11, 12, 13, 10, 9, 15, 14, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void seventy(void) {
  int ary[] = { 8, 7, 11, 15, 14, 4, 5, 6, 3 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void seventyone(void) {
  int ary[] = { 8, 7, 11, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void seventytwo(void) {
  int ary[] = { 8, 7, 11, 15, 14, 5, 6, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void seventythree(void) {
  int ary[] = { 8, 7, 11, 15, 14, 4, 5, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void seventyfour(void) {
  int ary[] = { 8, 7, 11, 14, 4, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void seventyfive(void) {
  int ary[] = { 8, 7, 11, 15, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void seventysix(void) {
  int ary[] = { 8, 7, 11, 15, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void seventyseven(void) {
  int ary[] = { 8, 7, 11, 15, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void seventyeight(void) {
  int ary[] = { 8, 7, 11, 15, 14, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void seventynine(void) {
  int ary[] = { 8, 7, 11, 15, 14, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void eighty(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 9, 15, 14, 4, 5, 6, 3 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void eightyone(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 9, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void eightytwo(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 9, 15, 14, 5, 6, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void eightythree(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 9, 15, 14, 4, 5, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void eightyfour(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 9, 14, 4, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void eightyfive(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 9, 15, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void eightysix(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 9, 15, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void eightyseven(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 9, 15, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void eightyeight(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 9, 15, 14, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void eightynine(void) {
  int ary[] = { 8, 7, 11, 12, 13, 10, 9, 15, 14, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void ninety(void) {
  int ary[] = { 8, 7, 11, 12, 10, 9, 15, 14, 4, 5, 6, 3 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void ninetyone(void) {
  int ary[] = { 8, 7, 11, 12, 10, 9, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void ninetytwo(void) {
  int ary[] = { 8, 7, 11, 12, 10, 9, 15, 14, 5, 6, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void ninetythree(void) {
  int ary[] = { 8, 7, 11, 12, 10, 9, 15, 14, 4, 5, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void ninetyfour(void) {
  int ary[] = { 8, 7, 11, 12, 10, 9, 14, 4, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void ninetyfive(void) {
  int ary[] = { 8, 7, 11, 12, 10, 9, 15, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void ninetysix(void) {
  int ary[] = { 8, 7, 11, 12, 10, 9, 15, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void ninetyseven(void) {
  int ary[] = { 8, 7, 11, 12, 10, 9, 15, 14, 4 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void ninetyeight(void) {
  int ary[] = { 8, 7, 11, 12, 10, 9, 15, 14, 4, 5, 6, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}
void ninetynine(void) {
  int ary[] = { 8, 7, 11, 12, 10, 9, 15, 14, 4, 5, 3, 2 };
  allOff();
  writeAryHigh(ary, NELEMS(ary));
}

typedef void (*digit_ptr)( void );
digit_ptr digit_ptr_array[42] = {zero,one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen,seventeen,eighteen,nineteen,twenty,twentyone,twentytwo,twentythree,twentyfour,twentyfive,twentysix,twentyseven,twentyeight,twentynine,thirty,thirtyone,thirtytwo,thirtythree,thirtyfour,thirtyfive,thirtysix,thirtyseven,thirtyeight,thirtynine,forty,fortyone};//,fortytwo,fortythree,fortyfour,fortyfive,fortysix,fortyseven,fortyeight,fortynine,fifty,fiftyone,fiftytwo,fiftythree,fiftyfour,fiftyfive,fiftysix,fiftyseven,fiftyeight,fiftynine,sixty,sixtyone,sixtytwo,sixtythree,sixtyfour,sixtyfive,sixtysix,sixtyseven,sixtyeight,sixtynine,seventy,seventyone,seventytwo,seventythree,seventyfour,seventyfive,seventysix,seventyseven,seventyeight,seventynine,eighty,eightyone,eightytwo,eightythree,eightyfour,eightyfive,eightysix,eightyseven,eightyeight,eightynine,ninety,ninetyone,ninetytwo,ninetythree,ninetyfour,ninetyfive,ninetysix,ninetyseven,ninetyeight,ninetynine};

byte yearA;
byte monthA;
long days;
long daysf;

// Convert normal decimal numbers to binary coded decimal
byte decToBcd(byte val) {
  return ( (val/10*16) + (val%10) );
}

// Convert binary coded decimal to normal decimal numbers
byte bcdToDec(byte val) {
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

void setup() {
  for (int thisPin = 0; thisPin < (pinCount); thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  }
  byte second, minute, hour, dayOfWeek, dayOfMonth, month, year;
  Wire.begin();
  Serial.begin(9600);
  
  // Change these values to what you want to set your clock to.
  // and then comment out the setDateDs1307 call.
  //and upload sketch again
  second = 15;
  minute = 12;
  hour = 0;
  dayOfWeek = 5;
  dayOfMonth = 16;
  month = 11;
  year = 17;
// setDateDs1307(second, minute, hour, dayOfWeek, dayOfMonth, month, year);
}

void minute(int num) {
  for (int i = 0; i < (num * 2); ++i) {
    delay(30000);
  }
}

void loop() {
  // for (int i = 41; i > 0; i--) {
  //   (*digit_ptr_array[i])();
  //   minute(1);
  // }
  byte second, minute, hour, dayOfWeek, dayOfMonth, month, year;
  byte yearA;
  byte monthA;
  getDateDs1307(&second, &minute, &hour, &dayOfWeek, &dayOfMonth, &month, &year);
  Serial.print(hour, DEC);// convert the byte variable to a decimal number when being displayed
  Serial.print(":");
  if (minute<10) {
    Serial.print("0");
  }
  Serial.print(minute, DEC);
  Serial.print(":");
  if (second<10) {
    Serial.print("0");
  }
  Serial.print(second, DEC);
  Serial.println("  ");

  if (month <3) {//if month is January or February subtract 1 from year and use in yearA
    yearA=year-1;
  } else {
    yearA=year;
  } 
  if (month <3) {//if month is January or February add 12 to the month and use in monthA
    monthA=month +12;
  } else {
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
    // digits[0] = diff%10;
    // digits[1] = (diff >= 10) ? (diff/10)%10 : 10;
    // digits[2] = (diff >= 100) ? (diff/100)%10 : 10;
    // delay (500);
    // Serial.println (days);
    // Serial.println (daysf);
    // Serial.println (diff);
    (*digit_ptr_array[diff])();
}