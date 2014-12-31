#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class CommissionEmployee
{
  public:
    CommissionEmployee(const string&, const string&, const string&,
      double, double);

    void setGrossSales(double sales);
    void setRate(double rate);
    void setFirstName(const string &);
    void setLastName(const string &);
    void setSocialSecurity(const string &);
    string getFirstName() const;
    string getLastName() const;
    string getSocialSecurity() const;
    double getGrossSales()const;
    double getRate() const;
    double getEarnings() const;
    void print() const;

  private:
    string firstName;
    string lastName;
    string socialSecurity;
    double grossSales;
    double Rate;
};


CommissionEmployee::CommissionEmployee(const string& f_name, const string& l_name,
  const string& social, double gross = 0, double rate = 0)
{
  setFirstName(f_name);
  setLastName(l_name);
  setSocialSecurity(social);
  setGrossSales(gross);
  setRate(rate);
}

void CommissionEmployee::setFirstName(const string& f_name)
{
  firstName = f_name;
}

void CommissionEmployee::setLastName(const string& l_name)
{
  lastName = l_name;
}

void CommissionEmployee::setSocialSecurity(const string& ssn)
{
  socialSecurity = ssn;
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

string CommissionEmployee::getFirstName() const
{
  return firstName;
}

string CommissionEmployee::getLastName() const
{
  return lastName;
}

string CommissionEmployee::getSocialSecurity() const
{
  return socialSecurity;
}

double CommissionEmployee::getGrossSales() const
{
  return grossSales;
}

double CommissionEmployee::getRate() const
{
  return Rate;
}

double CommissionEmployee::getEarnings() const
{
  return (grossSales * Rate);
}

void CommissionEmployee::print() const
{
  cout << "First Name = " << firstName << endl;
  cout << "Last Name = " << lastName << endl;
  cout << "Social Security = " << socialSecurity << endl;
  cout << "Gross = " << grossSales << endl;
  cout << "Rate = " << Rate << endl;
  cout << "Earnings = " << getEarnings() << endl;
}

int main(void)
{
  CommissionEmployee employee1("Vijay", "Kumar", "123-45-6789", 20000, 0.5);
  employee1.print();


  return 0;
}