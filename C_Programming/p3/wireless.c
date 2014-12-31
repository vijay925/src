#include <stdio.h>
#define RATE 3999
#define TAXES 5.25
#define EXTRA_MINUTE_COST 40
#define CENTS_PER_DOLLAR 100

int main(void)
{
  int weekday_minutes = 0;
  int night_minutes = 0;
  int weekend_minutes = 0;
  double avg_cost = 0, pretax_bill = 0, post_taxes_bill = 0, total_bill = 0;

  printf("%s", "Please enter the number of weekday minutes, night minutes: ");
  scanf("%d%d", &weekday_minutes, &night_minutes);
  printf("%s", "Please enter the number of weekend minutes: ");
  scanf("%d", &weekend_minutes);

  printf("\n");
  printf("Weekday minutes: %d, night minutes: %d, weekend minutes: %d\n",
    weekday_minutes, night_minutes, weekend_minutes);
  printf("Average minute cost: $%lf\n\n", avg_cost);

  printf("Pretax bill: $ %lf\n", pretax_bill);
  printf("Taxes: $ %lf\n", post_taxes_bill);
  printf("Total bill: $ %lf\n", total_bill);

  return 0;
}