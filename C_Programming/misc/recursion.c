#include <stdio.h>
#include <string.h>

/* Factorial

unsigned int factorial(unsigned int n)
{
  if(n <= 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int main(int argc, char const *argv[])
{
  unsigned int n;

  printf("Enter a number >= 0: ");
  scanf("%u", &n);
  printf("The factorial of %u is %u.\n", n, factorial(n));

  return 0;
}

*/

// unsigned int sum_digits(unsigned int n)
// {

// }

/* sum_digits

unsigned int sum_digits(char integer_array[])
{
  int len = strlen(integer_array);

  if(len == 0)
    return 0;
  else
  {
    for(int i = 0; i < len; i++)
      return (int)(integer_array[0] - '0') + sum_digits(integer_array + 1);
  }
}

int main(int argc, char const *argv[])
{
  unsigned int n;
  char integer_array[10];

  printf("Enter an integer: ");
  scanf("%u", &n);
  sprintf(integer_array, "%u", n);
  printf("The sum of the digits is: %u.\n", sum_digits(integer_array));

  return 0;
}

*/

unsigned int sum_digits(unsigned int n)
{
  if(n == 0)
    return 0;
  else
    return (n % 10) + sum_digits(n / 10);
}

int main(int argc, char const *argv[])
{
  unsigned int n;

  printf("Enter an integer: ");
  scanf("%u", &n);
  printf("The sum of the digits is: %u.\n", sum_digits(n));

  return 0;
}
