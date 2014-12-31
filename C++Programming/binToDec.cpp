#include <iostream>
using namespace std;

int BinToDec(string number)
{
    int result = 0, pow = 1;
    for ( int i = number.length() - 1; i >= 0; --i, pow <<= 1 )
        result += (number[i] - '0') * pow;

    if(result < 0)
      return 1;
    else
      return -1;
}

int main(void)
{
  string s1 = "01101010001";

  int result = BinToDec(s1);
  cout << result << endl;

  return 0;
}




