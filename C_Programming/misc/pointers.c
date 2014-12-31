#include <stdio.h>

int main(void)
{
  int array1[10];
  int x = 5;
  for (int i = 0; i < 10; ++i)
  {
    array1[i] = i;
  }

  printf("%d\n", *(array1 + 0));

  return 0;
}