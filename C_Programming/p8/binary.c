#include <stdio.h>
#include <string.h>

void replace_first_x(char binary_number[])
{
  int i = 0;
  while(i < strlen(binary_number) && binary_number[i] != 'x')
    i++;
  binary_number[i] = '0';
  printf("%s\n", binary_number);
  binary_number[i] = '1';
  printf("%s\n", binary_number);
  replace_first_x(binary_number);
}

int main(int argc, char const *argv[])
{
  char binary_number[80];

  printf("Binary number: ");
  fgets(binary_number, 80, stdin);
  replace_first_x(binary_number);

  return 0;
}

