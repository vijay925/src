#include "Implementation.h"
#include "Interface.h"

Interface::Interface(int v)
:ptr(new Implementation(v))
{

}

int Interface::get_value()
{
  return ptr->get_value();
}

void Interface::set_value(int value_passed)
{
  ptr->set_value(value_passed);
}

Interface::~Interface()
{
  delete ptr;
}