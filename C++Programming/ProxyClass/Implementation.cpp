#include "Implementation.h"

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