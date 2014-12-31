#include <iostream>

using namespace std;

class Test
{

  public:
    friend void operator++(Test &object);

    Test(int x_passed, int y_passed)
    :x(x_passed), y(y_passed)
    {

    }

    void print()
    {
      cout << x << endl;
      cout << y << endl;
    }

  private:
    int x;
    int y;
};

void operator++(Test &object)
{
  ++object.x;
  ++object.y;

}


int main(void)
{

  Test t(2,2);
  t.print();
  ++t;
  t.print();



  return 0;
}