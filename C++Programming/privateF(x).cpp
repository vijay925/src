#include <iostream>

using namespace std;

class Test
{
  public:
    void print2()
    {
      print();
    }

  public:
    int x;

    void print()
    {
      cout << "Private f(x)" << endl;
    }

};

int main(void)
{

  Test t;
  cout << t.x << endl;


  return 0;
}