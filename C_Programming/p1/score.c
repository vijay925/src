#include <stdio.h>

int main(void)
{
  char letter_grade = '\0';
  double min, current = 0;
  int final = 0;
  double need = 0;

  printf("Enter desired grade: ");
  scanf("%c", &letter_grade);
  printf("Enter minimum average required: ");
  scanf("%lf", &min);
  printf("Enter current average in course: ");
  scanf("%lf", &current);
  printf("How much final counts: ");
  scanf("%d", &final);
  need = (min - current) / (final * 0.01); //not correct
  printf("You need to score %.2lf to get a %c.\n", need, letter_grade);

  return 0;
}