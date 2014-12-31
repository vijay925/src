#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class PhoneNumber
{
  public:
    friend ostream& operator<< (ostream &output, const PhoneNumber &number);
    friend istream& operator>> (istream &input, PhoneNumber &number);

  private:
    string areaCode;
    string exchange;
    string line;
};

ostream& operator << (ostream & output, const PhoneNumber &number)
{

  output << "(" << number.areaCode << ") " << number.exchange << "-" << number.line
         << endl;

  return output;
}

istream& operator >> (istream & input, PhoneNumber &number)
{
  input.ignore();
  input >> setw(3) >> number.areaCode;
  input.ignore(2);
  input >> setw(3) >> number.exchange;
  input.ignore();
  input >> setw(4) >> number.line;

  return input;
}

int main(void)
{
  PhoneNumber phone1;
  PhoneNumber phone2;

  cout << "Enter a phone number: ";
  cin >> phone1;
  cout << "Enter a phone number: ";
  cin >> phone2;

  cout << phone1 << endl;
  cout << phone2;

  return 0;
}
