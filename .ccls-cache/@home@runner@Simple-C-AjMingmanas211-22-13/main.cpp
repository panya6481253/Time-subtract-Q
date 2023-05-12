#include <iomanip>
#include <iostream>
#include "Time.h"

using namespace std;

void square(int &);
double square(double);
int houradd(int, int, int);
int minadd(int, int);

//int main() {
//double a = 5;
// square(a); cout<<"my a is " << a<<endl;
//  int b=10;
//  square(b); cout<<"my b is "<<b<<endl;
//  int x=2,y=3;
//  cout<<setw(10)<<x<<setw(x)<<y<<endl;
//  float z=5.213;
//  cout<<fixed<<setprecision(2)<<y<<endl;
//  int h3=1;
//  int m3=57;
//  cout<<fixed<<setprecision(2)<<y<<endl;
//  cout<<setfill('x')<<setw(5)<<y<<endl;
//    cout<<setfill('0')<<setw(5)<<y<<endl;
//    cout<<setfill('0')<<setw(5)<<h3<<":";
//    cout<<m3<<endl;
//  return 0;
//}
int main()
{
  int hour1,hour2,minute1,minute2;
  cout<<"Initial Time (Format: hr min):"<<endl;
  getTime(hour1,minute1);
  cout<<"Final Time (Format: hr min):"<<endl;
  getTime(hour2,minute2);
  cout<<"Time:"<<setfill('0')<<setw(2)<<subtract(hour1,hour2,minute1,minute2)<<":"<<setfill('0')<<setw(2)<<subtract(minute1,minute2)<<endl;
  return 0;
}
void square(int &x) { x *= x; }

double square(double x) { return x * x; }

int houradd(int hour, int minute1, int minute2)
{
  int x;
  x=(minute1+minute2)/60;
  x+=hour;
  return x;
}
int minadd(int minute1, int minute2)
{
  int x;
  x=(minute1+minute2)%60;
  return x;
}