#include <stdio.h>

int main(void)
{
  int array[10][10];

  for(int i = 0; i < 10; i++)
  {
    for(int j = 0; j < 10; j++)
    {
      array[i][j] = i + 100;
      printf("array[%d][%d] = %d\n", i, j, array[i][j]);
    }
  }

  return 0;
}