#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main(void)
{
  /*
  string s1 = "happy";
  string s2 = " birthday";
  string s3;

  cout << "s1 = " << s1 << endl;
  cout << "s2 = " << s2 << endl;
  cout << "s3 = " << s3 << endl;


  s3 = s1;
  s1 += s2;
  cout << s1 << endl;
  cout << (s1 += " to you") << endl;
  cout << s1 << endl;
  cout << endl << endl;

  cout << "s1 = " << s1 << endl;
  cout << (s1 = s1.substr(0,14)) << endl;
  cout << s1 << endl;



  if (s3.empty())
    cout << "True" << endl;
  else
    cout << "False" << endl;
  */

  //string s1 = "This nigga is crazy";
  //cout << s1 << endl;
  //s1 = s1.substr(100);
  string s1 = "This Nigga";
  string s2(s1);
  cout << s1 << endl;
  cout << s2 << endl;

  s1[0] = 't';
  cout << s1 << endl;

  s1.at(0) = 'B';
  cout << s1 << endl;

  try
  {
    s1.at(50) = 'H';
  }
  catch(out_of_range &ex)
  {
    cout << ex.what() << endl;
  }

  return 0;
}

