//
//  Employee.cpp
//  polymorphism
//
//  Created by Vijay Kumar on 9/18/13.
//  Copyright (c) 2013 Vijay Kumar. All rights reserved.
//

#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(const string& first_name, const string& last_name,
         const string& ssn)
:firstName(first_name), lastName(last_name), SSN(ssn)
{
  
}


void Employee::setFirstName(const string first_name)
{
  firstName = first_name;
}

string Employee::getFirstName() const
{
  return firstName;
}

void Employee::setLastName(const string last_name)
{
  lastName = last_name;
}

string Employee::getLastName() const
{
  return lastName;
}

void Employee::setSocialSecurity(const string ssn)
{
  SSN = ssn;
}

string Employee::getSocialSecurity() const
{
  return SSN;
}

void Employee::print() const
{
  cout << "FirstName = " << getFirstName() << endl;
  cout << "LastName = " << getLastName() << endl;
  cout << "SSN = " << getSocialSecurity() << endl;
}
