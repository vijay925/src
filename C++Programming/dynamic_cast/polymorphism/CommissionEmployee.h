//
//  CommissionEmployee.h
//  polymorphism
//
//  Created by Vijay Kumar on 9/18/13.
//  Copyright (c) 2013 Vijay Kumar. All rights reserved.
//

#ifndef __polymorphism__CommissionEmployee__
#define __polymorphism__CommissionEmployee__

#include <iostream>
#include "Employee.h"
using namespace std;

class CommissionEmployee : public Employee
{
  public:
    CommissionEmployee(const string& first_name, const string& last_name,
                       const string& ssn, const double gross_sales,
                       const double commission_rate);
    virtual double earnings() const;
    virtual void print() const;
  
  private:
    double grossSales;
    double commissionRate;
  
};

#endif /* defined(__polymorphism__CommissionEmployee__) */
