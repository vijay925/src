#include <stdio.h>

int main(void)
{
  int initial_cost = 0;
  int fuel_cost = 0;
  double rate = 0;
  double cost = 0;

  printf("Enter initial_cost, fuel_cost and rate: ");
  scanf("%d%d%lf", &initial_cost, &fuel_cost, &rate);
  cost = initial_cost + (5 * fuel_cost) + (5 * rate * initial_cost);
  printf("The cost is %0.2lf\n", cost);

  return 0;
}