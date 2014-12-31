#include <stdio.h>

typedef struct
{
  int num;
  int denom;
} Fraction;

void print(Fraction f)
{
  printf("%d/%d\n", f.num, f.denom);
}
int main(int argc, char const *argv[])
{
  Fraction f1, f2, f3;
  f1.num = 1;
  f1.denom = 2;

  f2.num = 2;
  f2.denom = 3;

  f3.num = 1;
  f3.denom = 9;

  Fraction array[3] = {f1, f2, f3};

  for(int i = 0; i < 3; i++)
    print(array[i]);


  return 0;
}