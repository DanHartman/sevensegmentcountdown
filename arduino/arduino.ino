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

void setup() {
  for (int thisPin = 0; thisPin < (pinCount); thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  }
}

void minute(int num) {
  for (int i = 0; i < (num * 2); ++i) {
    delay(30000);
  }
}

void loop() {
  for (int i = 41; i > 0; i--) {
    (*digit_ptr_array[i])();
    minute(1);
  }
}