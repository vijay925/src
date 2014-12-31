#include <iostream>

using namespace std;

class Test
{
  public:
    Test() {cout << "Test consttructor"; cout << endl;}
    ~Test() {cout << "Test Deconsttructor"; cout << endl;}

};

class Test2 : public Test
{
  public:
    Test2() {cout << "Test2 consttructor"; cout << endl;}
    ~Test2() {cout << "Test2 Deconsttructor"; cout << endl;}
};


int main(void)
{
  Test2 t;
  //cout << t.x << endl;
  //t.print();

  return 0;
}