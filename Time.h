#include <iomanip>
#include <iostream>

void getTime(int &hour, int &minute)
{
  std::cin>> hour>>minute;
}

int subtract(int hour1, int hour2, int minute1, int minute2)
{
  int x, y=0;
  if (minute1>minute2)
    y=1;
  x=(hour2-hour1-y+24)%24;
  return x;
}
int subtract(int minute1, int minute2)
{
  int x;
  x=(minute2-minute1+60)%60;
  return x;
}