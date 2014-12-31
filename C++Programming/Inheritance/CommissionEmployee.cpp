#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(const string& f_name, const string& l_name,
  const string& social, double gross = 0, double rate = 0)
: firstName(f_name), lastName(l_name), socialSecurity(social)
{
  setGrossSales(gross);
  setRate(rate);
}


void CommissionEmployee::setGrossSales(double sales)
{
  if(sales >= 0)
    grossSales = sales;
  else
    throw invalid_argument("Sales must be greater than or equal to 0.");
}

void CommissionEmployee::setRate(double rate)
{
  if(rate > 0 && rate <= 1)
    Rate = rate;
  else
    throw invalid_argument("Rate must be between 0 and 1.");
}

string CommissionEmployee::getFirstName()
{
  return firstName;
}

string CommissionEmployee::getLastName()
{
  return lastName;
}

string CommissionEmployee::getSocialSecurity()
{
  return socialSecurity;
}

double CommissionEmployee::getGrossSales()
{
  return grossSales;
}

double CommissionEmployee::getRate()
{
  return Rate;
}

double CommissionEmployee::getEarnings()
{
  return (grossSales * Rate);
}

void CommissionEmployee::print()
{
  cout << "First Name = " << firstName << endl;
  cout << "Last Name = " << lastName << endl;
  cout << "Social Security = " << socialSecurity << endl;
  cout << "Gross = " << grossSales << endl;
  cout << "Rate = " << Rate << endl;
  cout << "Earnings = " << getEarnings() << endl;
}