#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(void)
{
  vector <string> v(3);

  cin.ignore();
  cin >> setw(3) >> v[0];
  cin.ignore(2);
  cin >> setw(3) >> v[1];
  cin.ignore();
  cin >> setw(4) >> v[2];

  for(int i = 0; i < 3; i++)
    cout << v[i] << endl;

  //(800) 900-2020



  return 0;
}