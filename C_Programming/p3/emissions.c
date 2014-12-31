#include <stdio.h>

void print()
{
  printf("%s\n", "(1) Carbon monoxide");
  printf("%s\n", "(2) Hydrocarbons");
  printf("%s\n", "(3) Nitrogen oxides");
  printf("%s\n", "(4) Nonmethane hydrocarbons");
}

int main(void)
{

  int pollutant_number = 0;
  double grams_emitted = 0;
  int odometer_reading = 0;

  print();
  printf("%s", "Enter pollutant number>> ");
  scanf("%d", &pollutant_number);
  printf("%s", "Enter number of grams emitted per mile>> ");
  scanf("%lf", &grams_emitted);
  printf("%s", "Enter odometer reading>> ");
  scanf("%d", &odometer_reading);


  if(pollutant_number == 1 && odometer_reading <= 50000)
  {
    if(grams_emitted <= 3.4)
      printf("Emissions do not exceed permitted level of 3.4 grams/mile.\n");
    else
      printf("Emissions exceed permitted level of 3.4 grams/mile.\n");
  }

  // if(pollutant_number == 2 && odometer_reading =< 50000)
  // {

  // }
  // if(pollutant_number == 3 && odometer_reading =< 50000)
  // {

  // }
  // if(pollutant_number == 1 && odometer_reading => 50000)
  // if(pollutant_number == 2 && odometer_reading => 50000)

  if(pollutant_number == 3 && odometer_reading >= 50000)
  {
    if(grams_emitted <= 0.5)
      printf("Emissions do not exceed permitted level of 0.5 grams/mile.\n");
    else
      printf("Emissions exceed permitted level of 0.5 grams/mile.\n");
  }

  return 0;
}