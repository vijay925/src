#ifndef COMMISSION_H
  #define COMMISSION_H

class CommissionEmployee
{
  public:
    CommissionEmployee(const string&, const string&, const string&, double, double);

    void setGrossSales(double sales);
    void setRate(double rate);
    string getFirstName();
    string getLastName();
    string getSocialSecurity();
    double getGrossSales();
    double getRate();
    double getEarnings();
    void print();

  private:
    string firstName;
    string lastName;
    string socialSecurity;
    double grossSales;
    double Rate;
};

#endif
