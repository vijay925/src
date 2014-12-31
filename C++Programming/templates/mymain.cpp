#include <iostream>
using namespace std;

template <typename T>

void print_array(const T * const array, int count)
{
  for(int i = 0; i < count; ++i)
    cout << array[i] << " ";

  cout << endl;
}

int main(void)
{
  int array1[5] = {1,2,3,4,5};
  //int array1[ 5 ] = { 1, 2, 3, 4, 5 };
  //const double array2[5] = {1.1,2.2,3.3,4.4,5.5};
  //const char array[5] = {'W','o','r','l',};

  print_array(array1,5);

}
/*
void print_array(const T * const array, int count)
{
  for(int i = 0; i < count; ++i)
    cout << array[i] << " ";

  cout << endl;
}
*/