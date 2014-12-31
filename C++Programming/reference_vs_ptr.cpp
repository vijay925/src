#include <iostream>
using namespace std;

int main(void)
{
  int x = 0;
  int *xPtr = &x;

  int &y = *xPtr;
  y = 600;

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;

  return 0;
}