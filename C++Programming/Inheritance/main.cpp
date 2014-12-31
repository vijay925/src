#include <iostream>
#include <string>
using namespace std;
#include "CommissionEmployee.h"

int main(void)
{
  CommissionEmployee employee1("Vijay", "Kumar", "123-45-6789", 20000, 0.5);
  employee1.print();

  return 0;
}