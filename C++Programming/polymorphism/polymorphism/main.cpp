//
//  main.cpp
//  polymorphism
//
//  Created by Vijay Kumar on 9/18/13.
//  Copyright (c) 2013 Vijay Kumar. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

void virtualViaPointer(const Employee * const employee_ptr);
void virtualViaReference(const Employee& employee_ref);

int main(int argc, const char * argv[])
{
  SalariedEmployee employee1("Vijay", "Kumar", "121213414", 1000);
  CommissionEmployee employee2("Robert", "Kirkham", "123232123", 5000, 0.5);
  BasePlusCommissionEmployee employee3("Charlie", "Le", "12123123", 5000, 0.5, 900);
  
  employee1.print();
  cout << "Earned: " << employee1.earnings() << "\n";
  cout << endl;
  
  employee2.print();
  cout << "Earned: " << employee2.earnings() << "\n";
  cout << endl;
  
  employee3.print();
  cout << "Earned: " << employee3.earnings() << "\n";
  cout << endl;
  
  vector<Employee *> employees(3);
  
  employees[0] = &employee1;
  employees[1] = &employee2;
  employees[2] = &employee3;
  
  cout << "Print using polymorphism pointers" << "\n" << endl;
  for (int i = 0; i < employees.size(); ++i)
  {
    virtualViaPointer(employees[i]);
  }
  
  cout << "Print using references" << endl;
  for (int i = 0; i < employees.size(); ++i)
  {
    virtualViaReference(*employees[i]);
  }
  
  return 0;
}

void virtualViaPointer(const Employee * const employee_ptr)
{
  employee_ptr->print();
  cout << "Earned: " << employee_ptr->earnings() << "\n" << endl;
}

void virtualViaReference(const Employee& employee_ref)
{
  employee_ref.print();
  cout << "Earned: " << employee_ref.earnings() << "\n" << endl;
  
}




