#include <iostream>
#include <string>
#include <stdexcept>
#include "CommissionEmployee.h"
#include "BasePlusEmp.h"

using namespace std;

BasePlusEmp::BasePlusEmp(const string& first_name, const string& last_name,
  const string& ssn, double gross, double rate, double base_salary)
:CommissionEmployee(first_name, last_name, ssn, gross, rate)
{
  setBaseSalary(base_salary);
}

double BasePlusEmp::getBaseSalary() const
{
  return baseSalary;
}

void BasePlusEmp::setBaseSalary(double salary)
{
  if(salary > 0)
    baseSalary = salary;
  else
    throw invalid_argument("Salary must be greater than 0");
}

double BasePlusEmp::getEarnings() const
{
  return baseSalary + CommissionEmployee::getEarnings();
}

void BasePlusEmp::print() const
{
  cout << "Base Salaried" << endl;
  CommissionEmployee::print();
  //cout << "First name as protected member: " << firstName << endl;
  cout << "Base Salary: " << getBaseSalary() << endl;
  cout << "Earnings: " << getEarnings() << endl;
}

/*
void BasePlusEmp::test(double gross)
{
  setGrossSales(gross);
}
 */
