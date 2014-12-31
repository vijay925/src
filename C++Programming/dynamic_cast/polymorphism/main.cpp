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

int main(int argc, const char * argv[])
{
  SalariedEmployee s_emp("Vijay", "Kumar", "123456", 10000);
  CommissionEmployee c_emp("Charlie", "Le", "123456", 5000, 0.5);
  BasePlusCommissionEmployee bp_emp("Robert", "Kirkham", "123456", 5000, 0.5, 5000);
  
  //s_emp.print();
  //c_emp.print();
  //bp_emp.print();
  
  vector<Employee *> employees(3);
  
  employees[0] = &s_emp;
  employees[1] = &c_emp;
  employees[2] = &bp_emp;
  
  for(int i = 0; i < employees.size(); ++i)
  {
    employees[i]->print();
    cout << endl;
    
    BasePlusCommissionEmployee *base_ptr = static_cast<BasePlusCommissionEmployee*>(employees[i]);
    
    if(base_ptr != 0)
    {
      double old_salary = base_ptr->getSalary();
      base_ptr->setSalary(1.10 * old_salary);
      
      cout << "Old salary is: " << old_salary << endl;
      cout << "New salary is: " << base_ptr->getSalary() << endl;
    }
    
    employees[i]->print();
    
  }
  
  
  //employees[0]->SalariedEmployee::setSalary(); ERRROR NEED TO DOWNCAST
  

  return 0;
}

