#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void)
{
  int a = 5;
  int b = 6;

  printf("%s%d\n", "The value of a is: ", a);
  printf("%s%d\n", "The value of b is: ", b);
  printf("%s\n", "Calling swap\n");
  swap(&a, &b);
  printf("%s%d\n", "The value of a is: ", a);
  printf("%s%d\n", "The value of b is: ", b);


  return 0;
}

