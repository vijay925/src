#include <iostream>

using namespace std;

class Test
{
  public:
    Test()
    :x(0), y(0)
    {

    }
    Test(int x_passed, int y_passed)
    :x(x_passed), y(y_passed)
    {

    }

    Test operator+(const Test & test_ref)
    {
      Test object;
      object.x = (*this).x + test_ref.x;
      object.y = (*this).y + test_ref.y;

      return object;
    }

    Test operator=(const Test test_ref)
    {
      x = test_ref.x;
      y = test_ref.y;

      return *this;

    }

    void print()
    {
      cout << "x is " << x << endl;
      cout << "y is " << y << endl;
    }

  private:
    int x;
    int y;

};

int main(void)
{
  Test t1(1,1), t2(1,1), t3;
  //t3.print();

  t3 = t1 + t2;
  t3.print();


  return 0;
}