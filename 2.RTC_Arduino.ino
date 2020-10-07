#include <DS3231.h>
DS3231  rtc(SDA, SCL);

Time  t;
int Hor;
int Min;
int Sec;
void setup() {
  Serial.begin(9600);
  rtc.begin();
  
  // The following lines can be uncommented to set the date and time
  //rtc.setDOW(WEDNESDAY);     // Set Day-of-Week to SUNDAY
  //rtc.setTime(15, 25, 0);     // Set the time to 12:00:00 (24hr format)
  //rtc.setDate(10, 7, 2020);   // Set the date to January 1st, 2014
}

void loop() {

t = rtc.getTime();
Hor = t.hour;
Min = t.min;
Sec = t.sec;
// Send time
  Serial.println(rtc.getTimeStr());
  Serial.println(Hor);
  Serial.println(Min);
  Serial.println(Sec);
  delay(1000);
}
