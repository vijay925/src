#ifndef BasePlusEmp_H
  #define BasePlusEmp_H

#include <string>
#include "CommissionEmployee.h"

using namespace std;

class BasePlusEmp : public CommissionEmployee
{
  public:
    BasePlusEmp(const string& first_name, const string& last_name, const string& ssn,
      double gross = 0, double rate = 0, double base_salary = 0);

    void setBaseSalary(double);
    double getBaseSalary() const;

    double getEarnings() const;
    void print() const;
    //void test(double);

  private:
    double baseSalary;
};

#endif
