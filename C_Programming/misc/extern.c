#include <stdio.h>

int x;
void write_extern(void);

int main()
{
  write_extern();
  printf("%d\n", x);
  return 0;
}