//
//  SalariedEmployee.h
//  polymorphism
//
//  Created by Vijay Kumar on 9/18/13.
//  Copyright (c) 2013 Vijay Kumar. All rights reserved.
//

#ifndef __polymorphism__SalariedEmployee__
#define __polymorphism__SalariedEmployee__

#include <iostream>
#include "Employee.h"

class SalariedEmployee : public Employee
{
  public:
    SalariedEmployee(const string& first_name, const string& last_name,
                     const string& ssn, const double salary_passed);
  
  
  virtual double earnings() const;
  
  virtual void print() const;
  
  private:
    double salary;
};

#endif /* defined(__polymorphism__SalariedEmployee__) */
