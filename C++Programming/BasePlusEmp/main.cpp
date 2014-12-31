//
//  main.cpp
//  inheritance_final
//
//  Created by Vijay Kumar on 9/14/13.
//  Copyright (c) 2013 Vijay. All rights reserved.
//

#include <iostream>
#include <string>
#include "BasePlusEmp.h"
#include "CommissionEmployee.h"

using namespace std;

int main(void)
{
  /*
  BasePlusEmp employee1("Chief", "Keef", "123-45-6789", 2000, 0.12, 10000);
  employee1.print();
  //cout << endl;
  //employee1.test(12345);
  //employee1.print();
  */
  
  CommissionEmployee commission_employee(
    "Chief", "Keef","123-45-6789", 2000, 0.12);
  CommissionEmployee *commission_employee_ptr = 0;
  
  BasePlusEmp base_plus_emp(
    "Vijay", "Kumar", "123-45-6789", 2000, 0.12, 10000);
  BasePlusEmp *base_plus_emp_ptr = 0;
  
  commission_employee_ptr = &commission_employee;
  commission_employee_ptr->print();
  cout << endl;
  
  base_plus_emp_ptr = &base_plus_emp;
  base_plus_emp_ptr->print();
  cout << endl;
  
  commission_employee_ptr = &base_plus_emp;
  commission_employee_ptr->print();
  
  base_plus_emp_ptr = &commission_employee;
  base_plus_emp_ptr->setBaseSalary(2500);
  
  

  
  
  
  
  
  
  

  return 0;
}
