#ifndef COMMISSION_H
  #define COMMISSION_H

#include <string>

using namespace std;

class CommissionEmployee
{
  public:
    CommissionEmployee(const string& first_name, const string& last_name,
      const string& ssn, double gross = 0, double rate = 0);
  
    //CommissionEmployee(); DEFAULT CONSTRUCTOR
  
    string getFirstName() const;
    void setFirstName(string first_name);
  
    string getLastName() const;
    void setLastName(string last_name);
  
    string getSocialSecurity() const;
    void setSocialSecurity(string social_security);
  
    double getGrossSales() const;
    void setGrossSales(double gross_sales);
  
    double getRate() const;
    void setRate(double rate);
  
    double getEarnings() const;
    void print() const;

  //protected:
  private:
    string firstName;
    string lastName;
    string socialSecurity;
    double grossSales;
    double rate;
};

#endif
