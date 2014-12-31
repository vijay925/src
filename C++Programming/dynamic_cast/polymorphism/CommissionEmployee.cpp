//
//  CommissionEmployee.cpp
//  polymorphism
//
//  Created by Vijay Kumar on 9/18/13.
//  Copyright (c) 2013 Vijay Kumar. All rights reserved.
//

#include "CommissionEmployee.h"
#include "Employee.h"
#include <iostream>
#include <string>

CommissionEmployee::CommissionEmployee(const string& first_name, const string& last_name,
                                       const string& ssn, const double gross_sales,
                                       const double commission_rate) 
:Employee(first_name, last_name, ssn)
{
  grossSales = gross_sales;
  commissionRate = commission_rate;
}

double CommissionEmployee::earnings() const
{
  return grossSales * commissionRate;
}

void CommissionEmployee::print() const
{
  cout << "Commission Employee: " << endl;
  Employee::print();
  cout << "GrossSales = " << grossSales << endl;
  cout << "CommissionRate = " << commissionRate << endl;
}