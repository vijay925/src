//
//  SalariedEmployee.cpp
//  polymorphism
//
//  Created by Vijay Kumar on 9/18/13.
//  Copyright (c) 2013 Vijay Kumar. All rights reserved.
//

#include "SalariedEmployee.h"
#include <iostream>
#include <string>

using namespace std;

SalariedEmployee::SalariedEmployee(const string& first_name, const string& last_name,
                                   const string& ssn, const double salary_passed)
:Employee(first_name, last_name, ssn), salary(salary_passed)
{
  
}

void SalariedEmployee::print() const
{
  cout << "Salaried Employee: " << endl;
  Employee::print();
}


double SalariedEmployee::earnings() const
{
  return salary;
}
