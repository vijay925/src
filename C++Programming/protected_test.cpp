#include <iostream>

using namespace std;

class Test
{
  public:
    Test()
    {

    }
  protected:
    int x;
};

class Test2 : public Test
{
  public:
    void print()
    {
      cout << x << endl;
    }

};


int main(void)
{
  Test2 t;
  //cout << t.x << endl;
  t.print();

  return 0;
}