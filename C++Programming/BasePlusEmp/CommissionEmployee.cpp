#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
#include "CommissionEmployee.h"


CommissionEmployee::CommissionEmployee(const string& first_name, const string& last_name,
  const string& ssn, double gross, double rate)
: firstName(first_name), lastName(last_name), socialSecurity(ssn)
{
  setGrossSales(gross);
  setRate(rate);
}


/* DEFAULT CONSTRUCTOR
CommissionEmployee::CommissionEmployee()
{
  cout << "default contricrettor" << endl;
}
*/


string CommissionEmployee::getFirstName() const
{
  return firstName;
}

void CommissionEmployee::setFirstName(const string first_name)
{
  firstName = first_name;
}


string CommissionEmployee::getLastName() const
{
  return lastName;
}

void CommissionEmployee::setLastName(const string last_name)
{
  lastName = last_name;
}


string CommissionEmployee::getSocialSecurity() const
{
  return socialSecurity;
}

void CommissionEmployee::setSocialSecurity(const string social_security)
{
  socialSecurity = social_security;
}


double CommissionEmployee::getGrossSales() const
{
  return grossSales;
}

void CommissionEmployee::setGrossSales(double sales)
{
  if(sales >= 0)
    grossSales = sales;
  else
    throw invalid_argument("Sales must be greater than or equal to 0.");
}


double CommissionEmployee::getRate() const
{
  return rate;
}

void CommissionEmployee::setRate(double rate_passed)
{
  if(rate_passed > 0 && rate_passed <= 1)
    rate = rate_passed;
  else
    throw invalid_argument("Rate must be between 0 and 1.");
}


double CommissionEmployee::getEarnings() const
{
  return getGrossSales() * getRate();
}


void CommissionEmployee::print() const
{
  cout << "First Name = " << firstName << endl;
  cout << "Last Name = " << lastName << endl;
  cout << "Social Security = " << socialSecurity << endl;
  cout << "Gross = " << grossSales << endl;
  cout << "Rate = " << rate << endl;
  //cout << "Earnings = " << getEarnings() << endl;
}