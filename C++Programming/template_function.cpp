#include <iostream>
using namespace std;

template <typename T>
void print_array(const T * const array, int count);

int main(void)
{
  int array1[5] = {1,2,3,4,5};
  double array2[5] = {1.1,2.2,3.3,4.4,5.5};
  char array3[5] = {'W','O','R','D'};

  print_array(array1, 5);
  print_array(array2, 5);
  print_array(array3, 5);

  return 0;
}

template <typename T>
void print_array(const T * const array, int count)
{
  for(int i = 0; i < count; ++i)
    cout << array[i] << " ";
  cout << endl;
}