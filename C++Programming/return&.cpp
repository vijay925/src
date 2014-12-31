#include <iostream>
using namespace std;

/*
static int x = 0;

int function1()
{
  cout << "f1 run x = " << x << endl;
  return x;
}

void function2()
{
  function1() = 5;
  cout << "f2 run x = " << x << endl;
}

int main()
{
  function2();
  //cout << x;

  return 0;
}

*/
int main(void)
{
  int x = 0, y = 0;

  y = x++;
  cout << x << endl << y << endl;
}