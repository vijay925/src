#include <stdio.h>

int main(void)
{

  for(int i = 0; i < 20; i++)
  {
    if(i == 15)
    {
      continue;
    }

    printf("%d\n", i);
  }

  return 0;
}