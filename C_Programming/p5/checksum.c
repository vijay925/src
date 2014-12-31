#include <stdio.h>

int calc_checksum();

int main(void)
{
  char character, first = '\0';
  int sum;

  while(first != '.')
  {
    sum = 0;
    printf("Line: ");
    scanf(" %c", &first);
    sum += first;
    character = first;

    while(character != '.')
    {
      scanf(" %c", &character);
      sum += character;
    }

    sum = ((sum % 64) + ' ');

    if(first != '.')
      printf("Checksum: %c\n", sum);
  }

  return 0;
}


