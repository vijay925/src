#include <iostream>

using namespace std;

class Counter
{
  public:
    void set_x(int value)
    {
      x = value;
    }

    void print_x()
    {
      cout << x << endl;
    }

  private:
    int x;
};

int main(void)
{
  Counter i;
  Counter *iPtr = &i;
  Counter &iRef = i;

  i.set_x(19);
  i.print_x();

  iRef.set_x(19);
  iRef.print_x();

  iPtr->set_x(20);
  iPtr->print_x();


  return 0;
}