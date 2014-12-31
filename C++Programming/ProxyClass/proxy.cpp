#include <iostream>
using namespace std;

class Implementation
{
  public:
    Implementation(int v);
    int get_value();
    void set_value(int value_passed);

  private:
    int value;
};

Implementation::Implementation(int v)
: value(v)
{

}

int Implementation::get_value()
{
  return value;
}

void Implementation::set_value(int value_passed)
{
  value = value_passed;
}

class Implementation;

class Interface
{
  public:
    Interface(int v);
    int get_value();
    void set_value(int value_passed);
    ~Interface();

  private:
    Implementation *ptr;
};

Interface::Interface(int v)
:ptr(new Implementation(v))
{

}

int Interface::get_value()
{
  cout << "YES! get_value" << endl;
  return ptr->get_value();
}

void Interface::set_value(int value_passed)
{
  cout << "YES! set_value" << endl;
  ptr->set_value(value_passed);
}

Interface::~Interface()
{
  delete ptr;
}


using namespace std;

int main(void)
{
  Interface i(5);

  cout << i.get_value() << endl;
  i.set_value(6);
  cout << i.get_value() << endl;

  return 0;
}