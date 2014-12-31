#include <iostream>
using namespace std;

class Time
{
  public:
    Time()
    {
      hour = minute = second = 0;
    }

    Time& set_hour(int);
    Time& set_minute(int);
    Time& set_second(int);
    void print();

  private:
    int hour;
    int minute;
    int second;
};

Time& Time::set_hour(int hour_passed)
{
  hour = hour_passed;

  return *this;
}

Time& Time::set_minute(int minute_passed)
{
  minute = minute_passed;

  return *this;
}

Time& Time::set_second(int second_passed)
{
  second = second_passed;

  return *this;
}

void Time::print()
{
  cout << hour << "/" << minute << "/" << second << endl;
}

int main(void)
{
  Time t;
  cout << &(t.set_hour(5));
  cout << endl;
  cout << &t;
  cout << endl;

  //t.set_hour(6).set_minute(10).set_second(59);

  //t.print();


  return 0;
}