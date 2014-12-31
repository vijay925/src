//
//  BasePlusCommissionEmployee.h
//  polymorphism
//
//  Created by Vijay Kumar on 9/18/13.
//  Copyright (c) 2013 Vijay Kumar. All rights reserved.
//

#ifndef __polymorphism__BasePlusCommissionEmployee__
#define __polymorphism__BasePlusCommissionEmployee__

#include "CommissionEmployee.h"
#include <iostream>
#include <string>

using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
  public:
    BasePlusCommissionEmployee(const string& first_name, const string& last_name,
                       const string& ssn, const double gross_sales,
                       const double commission_rate, const double base_salary);
  
    virtual double earnings() const;
    virtual void print() const;
  
  private:
    double baseSalary;
};


#endif /* defined(__polymorphism__BasePlusCommissionEmployee__) */
