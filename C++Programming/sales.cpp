#include <iostream>

using namespace std;

class SalesPerson
{
  public:
    static const int months_per_year = 12;
    SalesPerson();
    void get_sales_from_user();
    void set_sales(int month, double amount);
    void print_annual_sales();

  private:
    double total_annual_sale();
    double sales[months_per_year];
};

SalesPerson::SalesPerson()
{
  for(int i = 0; i < months_per_year; i++)
    sales[i] = 0;
}

void SalesPerson::get_sales_from_user()
{
  double sales_amount;

  for(int i = 1; i <= 12; i++)
  {
    cout << "Enter sales for month " << i << ": ";
    cin >> sales_amount;
    set_sales(i, sales_amount);
  }
}

void SalesPerson::set_sales(int month, double amount)
{
  if((month >= 1 && month <= 12) && (amount >= 0))
  {
    sales[month-1] = amount;
  }
}

void SalesPerson::print_annual_sales()
{
  cout << "Total annual sales are " << ": " << "$" << total_annual_sale() << ".";
  cout << endl;
}

double SalesPerson::total_annual_sale()
{
  double total = 0;

  for(int i = 0; i < 12; i++)
    total += sales[i];

  return total;
}

int main(void)
{
  SalesPerson person1;
  person1.get_sales_from_user();
  person1.print_annual_sales();


  return 0;
}