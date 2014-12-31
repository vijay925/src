#include <stdio.h>

extern int x;

void write_extern(void)
{
  x = 10;
}
