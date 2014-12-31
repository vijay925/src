//
//  BasePlusCommissionEmployee.cpp
//  polymorphism
//
//  Created by Vijay Kumar on 9/18/13.
//  Copyright (c) 2013 Vijay Kumar. All rights reserved.
//

#include "Employee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string& first_name, const string& last_name,
    const string& ssn, const double gross_sales,
    const double commission_rate, const double base_salary)
:CommissionEmployee(first_name, last_name, ssn, gross_sales, commission_rate)
{
  baseSalary = base_salary;
  
}

double BasePlusCommissionEmployee::earnings() const
{
  return baseSalary + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const
{
  CommissionEmployee::print();
  cout << "Base Salary = " << baseSalary << endl;
}

void BasePlusCommissionEmployee::setSalary(double salary_passed)
{
  baseSalary = salary_passed;
}

double BasePlusCommissionEmployee::getSalary() const
{
  return baseSalary;
}