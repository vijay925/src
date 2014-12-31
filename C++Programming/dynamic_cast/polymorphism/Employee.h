//
//  Employee.h
//  polymorphism
//
//  Created by Vijay Kumar on 9/18/13.
//  Copyright (c) 2013 Vijay Kumar. All rights reserved.
//

#ifndef __polymorphism__Employee__
#define __polymorphism__Employee__

#include <string>

using namespace std;

class Employee
{
  public:
    Employee(const string& first_name, const string& last_name,
             const string& ssn);
  
    void setFirstName(const string first_name);
    string getFirstName() const;
  
    void setLastName(const string last_name);
    string getLastName() const;
  
    void setSocialSecurity(const string ssn);
    string getSocialSecurity() const;
  
    virtual void print() const;

    virtual double earnings() const = 0;
  
  private:
    string firstName;
    string lastName;
    string SSN;
};

#endif /* defined(__polymorphism__Employee__) */
