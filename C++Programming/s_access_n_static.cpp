#include <iostream>
using namespace std;

class Test
{
  public:
    Test()
    :x(0)
    {

    }

    void static print()
    {
      cout << x << endl;
    }

  private:
    const static int number = 9;
    const int x;

};

using namespace std;

int main(void)
{
  Test test;
  test.print();

  return 0;
}