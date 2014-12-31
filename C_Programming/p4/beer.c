#include <stdio.h>
#define PIELS 1
#define COORS 2
#define BUD 3
#define IRON_CITY 4
#define TOTAL_BEER_TYPES 4

int main(int argc, char const *argv[])
{
  FILE *input = fopen(argv[1], "r");
  int inventory[TOTAL_BEER_TYPES];
  int type_of_beer = - 1;
  double temp;

  for(int i = 0; i < TOTAL_BEER_TYPES; i++)
  {
    fscanf(input, "%d", &(inventory[i]));
  }

  while((fscanf(input, "%d%lf", &type_of_beer, &temp)) != EOF)
  {
    if(type_of_beer == PIELS)
      inventory[0] += temp;
    else if(type_of_beer == COORS)
      inventory[1] += temp;
    else if(type_of_beer == BUD)
      inventory[2] += temp;
    else if(type_of_beer == IRON_CITY)
      inventory[3] += temp;
  }

  printf("PIELS: %d\n",inventory[0]);
  printf("COORS: %d\n",inventory[1]);
  printf("BUD: %d\n",inventory[2]);
  printf("IRON_CITY: %d\n",inventory[3]);

  fclose(input);
  return 0;
}