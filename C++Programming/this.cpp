#include <iostream>

using namespace std;

class Cow
{
  public:
    Cow()
    {
      x  = 5;
    }

    void print_this()
    {
      cout << this->x << endl;
      cout << (*this).x << endl;
      cout << "Address of preeto is " << this << endl;
    }

  private:
    int x;

};

int main(void)
{
  Cow preeto;
  Cow *preetoPtr;
  preeto.print_this();
  cout << "Address of preeto is " << &preeto << endl;

  return 0;
}