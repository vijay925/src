#include <iostream>
#include <string>

using namespace std;

class Employee
{
  public:
    Employee(const string&, const string&);
    static int getCount();
    void get_fName() const;
    ~Employee();

  private:
    string FirstName;
    string LastName;
    static int count;

};

int Employee::count = 0;

Employee::Employee(const string &first_name, const string &last_name)
{
  count++;
  FirstName = first_name;
  LastName = last_name;
}

int Employee::getCount()
{
  return count;
}

void Employee::get_fName() const
{
  //FirstName = "Nigga"; //ERROR
  cout << FirstName;
}

Employee::~Employee()
{
  count--;
}

int main(void)
{
  cout << Employee::getCount() << endl;

  Employee e5("Vijay", "Kumar");
  cout << e5.getCount() << endl;

  {
    Employee e1("Vijay", "Kumar");
    Employee e2("Vijay", "Kumar");
    Employee e3("Vijay", "Kumar");
    Employee e4("Vijay", "Kumar");

    cout << e4.getCount();
    cout << endl;
  }

  cout << e5.getCount();
  cout << endl;

  return 0;
}