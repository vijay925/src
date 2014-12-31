#include <iostream>
using namespace std;

int main(void)
{
  int *arrayPtr = new int[10];

  for(int i = 0; i < 10; i++)
    cout << arrayPtr[i] << " ";

  cout << endl;

  delete[] arrayPtr;

  return 0;
}

/*

int main(void)
{
  char string[6] = {'h','e','l','l','o','\n'};

  cout << string;
  cout << endl;
}
*/