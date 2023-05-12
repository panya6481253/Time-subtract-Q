#include <iomanip>
#include <iostream>

using namespace std;

void square(int &);
double square(double);

int main() {
 double a = 5;
 square(a); cout<<"my a is" << a<<endl;

  int b=10;
  square(b); cout<<"my b is"<<b<<endl;
  // int h3=1;
  // int m3=57;

  // cout<<setfill('0')<<setw(2)<<h3<<":";
  // cout<<m3<<endl;

  return 0;
}

void square(int &x) { x *= x; }

double square(double x) { return x * x; }