#include <stdio.h>
#define RATE 0.35

int main(void)
{
  double beginning = 0;
  double end = 0;
  double dist_travelled = 0;
  double reimbursement = 0;

  printf("%s\n", "MILEAGE REIMBURSEMENT CALCULATOR");
  printf("%s", "Enter beginning odometer reading=> ");
  scanf("%lf", &beginning);
  printf("%s", "Enter ending odometer reading=>");
  scanf("%lf", &end);

  dist_travelled = end - beginning;
  reimbursement = dist_travelled * RATE;

  printf("You travelled %.1lf distance.\n", dist_travelled);
  printf("At $.35 per mile,\n");
  printf("your reimbursement is $%.2lf\n.", reimbursement);
}