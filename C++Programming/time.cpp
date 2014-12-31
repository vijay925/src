#include <iostream>
#include <stdexcept>
#include <iomanip>

using namespace std;

class Time
{
  public:
    Time();
    void set_time(int h, int m, int s);
    void print_universal();
    void print_standard();

  private:
    int hour;
    int minutes;
    int seconds;
};

Time::Time()
{
  hour = minutes = seconds = 0;
}

void Time::set_time(int h, int m, int s)
{
  if((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
  {
    hour = h;
    seconds = s;
    minutes = m;
  }
  else
    throw invalid_argument("Wrong Argument");
}

void Time::print_universal()
{
   cout << setfill( '0' ) << setw( 2 ) << hour << ":"
      << setw( 2 ) << minutes << ":" << setw( 2 ) << seconds;
}

void Time::print_standard()
{
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 ) << ":"
      << setfill( '0' ) << setw( 2 ) << minutes << ":" << setw( 2 )
      << seconds << ( hour < 12 ? " AM" : " PM" );
}

int main(void)
{
  Time t;
  t.print_universal();
  cout << endl;
  t.print_standard();
  cout << endl;

  try
  {
    t.set_time(45,45,45);
  }
  catch (invalid_argument &e)
  {
    cout << e.what() << endl;
  }


  return 0;
}