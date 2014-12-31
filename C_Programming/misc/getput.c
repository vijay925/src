#include <stdio.h>

int main(void)
{
  char c;
  char string[256];
  c = getchar();

  putchar(c);
  putchar('\n');

  string = gets(string);
  puts(string);

  return 0;
}