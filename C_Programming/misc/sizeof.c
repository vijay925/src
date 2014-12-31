#include <stdio.h>
#include <limits.h>

int main(void)
{
  //unsigned int x = -1;
  //x = sizeof(int);
  int x;
  char x = 's';
  double x;
  printf("Size of an int is %zu.\n", sizeof(int));
  printf("Size of an float is %zu.\n", sizeof(double));

  return 0;
}


//void *malloc( size_t size );