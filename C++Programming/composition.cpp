#include <iostream>
#include <string>

using namespace std;

class Date
{
  public:
    Date(int day_passed, int month_passed, int year_passed);
    Date(const Date &date_object);
    ~Date();

  private:
    int day;
    int month;
    int year;
};

class Employee
{
  public:
    Employee(string first, string last, Date &birth, Date &hiring);
    ~Employee();

  private:
    string first_name;
    string last_name;
    Date birth_date;
    Date hiring_date;
};

Date::Date(int day_passed, int month_passed, int year_passed)
{
  year = year_passed;
  month = month_passed;
  day = day_passed;

  cout << "Date constrctor for " << day << "/"<< month << "/" << year << endl;
}

Date::Date(const Date &date_object)
{
  year = date_object.year;
  month = date_object.month;
  day = date_object.day;
  cout << "date copy constructorerer for " << date_object.day << "/" << date_object.month
       << "/" << date_object.year << endl;
}

Date::~Date()
{
  cout << "Date deconstrctor for " << day << "/"<< month << "/" << year << endl;
}

Employee::Employee(string first, string last, Date &birth, Date &hiring)
: first_name(first), last_name(last), birth_date(birth), hiring_date(hiring)
{
  cout << "Employee constructor" << endl;
}

Employee::~Employee()
{
  cout << "Employee deconstrctor" << endl;
}

int main()
{
  cout << endl << endl;
  Date birth(2,6,1995);
  Date hiring(9,15,2012);

  Employee CEO("Vijay", "Kumar", birth, hiring);

}