#include <stdio.h>
const int size = 10;

int *bigger (int * array1, int *array2, int size);

int main(void)
{
  int *bigger_sum;
  int array1[size] = {0,1,2,3,4,5,6,7,8,9};
  int array2[size] = {10,11,12,13,14,15,16,17,18,19};

  bigger_sum = bigger(array1, array2, size);

  for(int i = 0; i < size; i++)
  {
    printf("bigger_sum[%d] = %d\n", i, bigger_sum[i]);
  }

  return 0;
}

int *bigger (int * array1, int *array2, int size)
{
  int array1_sum = 0, array2_sum = 0;
  static int *array_pointer;

  for(int i = 0; i < size; i++)
  {
    array1_sum += array1[i];
    array2_sum += array2[i];
  }

  if(array1_sum > array2_sum)
    array_pointer = array1;
  else
    array_pointer = array2;

  return array_pointer;

}