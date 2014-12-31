#include <iostream>

using namespace std;

//template <typename T>
//void print_array(const T* const array, int count);

int main(void)
{
  //char array[6] = {'H','e','l','l','o'};
  //char array2[6] = {'W','O','R','l','o'};

  // int array[5] = {1,2,3,4,5};
  // int array2[5] = {1,2,3,4,5,6};

  // array = array2;



  //int *ptr1 = (int *)malloc(2 * sizeof(int));//

  int *ptr1 = new int[10];

  ptr1[0] = 1;
  ptr1[1] = 2;

  for(int i = 0; i < 2; ++i)
    cout << ptr1[i] << " ";
  cout << endl;



  int *ptr2 = (int *)malloc(2 * sizeof(int));
  ptr2[0] = 3;
  ptr2[1] = 4;

  for(int i = 0; i < 2; ++i)
    cout << ptr2[i] << " ";
  cout << endl;

  ptr1 = ptr2;

  for(int i = 0; i < 2; ++i)
    cout << ptr1[i] << " ";
  cout << endl;

  delete [] ptr1;
  return 0;
}

/*
void print_array(const T* const array, int count)
{
  for(int i = 0; i < count; ++i)
    cout << array[i] << " ";

  cout << endl;
}
*/