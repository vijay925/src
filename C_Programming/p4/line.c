#include <stdio.h>

int get_problem()
{
  int choice = -1;
  printf("\n");
  printf("Select the form that you would like to convert to slope-intercept form:\n");
  printf("1) Two-point form (you know two points on the line)\n");
  printf("2) Point-slope form (you know the line’s slope and one point)\n");
  printf("=> ");
  scanf("%d", &choice);
  printf("\n");

  return choice;
}

void get2_pt(double *x1, double *y1, double *x2, double *y2)
{
  printf("Enter the x-y coordinates of the first point separated by a space=> ");
  scanf("%lf%lf", x1, y1);
  printf("Enter the x-y coordinates of the second point separated by a space=> ");
  scanf("%lf%lf", x2, y2);
}

void get_pt_slope(double *slope, double *x1, double *y1)
{
  printf("Enter the slope=> ");
  scanf("%lf", slope);
  printf("Enter the x-y coordinates of the point separated by a space=> ");
  scanf("%lf%lf", x1, y1);
}

void slope_intcpt_prom2_pt(double x1, double y1, double x2, double y2, double *slope, double *y_intercept)
{
  *slope = (y2 - y1) / (x2 - x1);
  *y_intercept = y1 - (*slope * x1);
}

void intcpt_from_pt_slope(double slope, double x1, double y1, double *y_intercept)
{
  *y_intercept = y1 - (slope * x1);
}

void display2_pt(double x1, double y1, double x2, double y2)
{
  printf("Two-point form\n");
    if(y1 < 0)
      printf("    (%0.2lf + %0.2lf)\n", y2, (y1 * -1) );
    else
      printf("    (%0.2lf - %0.2lf)\n", y2, y1);
  printf("m = -------------\n");
    if(x1 < 0)
      printf("    (%0.2lf + %0.2lf)\n", x2, (x1 * -1) );
    else
      printf("    (%0.2lf - %0.2lf)\n", x2, x1);
}

void display_pt_slope(double slope, double x1, double y1)
{
  printf("Point-slope form\n");
  if(y1 < 0)
    printf("y + %0.2lf = ", (y1 * -1));
  else
    printf("y - %0.2lf = ", y1);
  printf("%0.2lf(x ", slope);

  if(x1 < 0)
    printf("+ %0.2lf)\n", (x1 * -1));
  else
    printf("- %0.2lf)\n", x1);
}

void display_slope_intcpt(double slope, double y_intercept)
{
  printf("Slope-intercept form\n");
  printf("y = %0.2lfx ", slope);

  if(y_intercept < 0)
    printf("- %0.2lf\n", (y_intercept * -1));
  else
    printf("+ %0.2lf\n", y_intercept);
}

int call_functions()
{
  double slope;
  double x1, y1, x2, y2, y_intercept;
  char Y_or_N;
  int choice;
  choice = get_problem();

  if(choice == 1)
  {
    get2_pt(&x1, &y1, &x2, &y2);
    printf("\n");
    display2_pt(x1, y1, x2, y2);
    printf("\n");
    slope_intcpt_prom2_pt(x1, y1, x2, y2, &slope, &y_intercept);
    display_slope_intcpt(slope, y_intercept);
  }
  else
  {
    get_pt_slope(&slope, &x1, &y1);
    printf("\n");
    display_pt_slope(slope, x1, y1);
    printf("\n");
    intcpt_from_pt_slope(slope, x1, y1, &y_intercept);
    display_slope_intcpt(slope, y_intercept);
  }

  printf("Do another conversion (Y or N) => ");
  scanf(" %c", &Y_or_N);

  if(Y_or_N == 'Y')
    return 1;
  else
    return 0;
}

int main(int argc, char const *argv[])
{
  do
  {
    call_functions();
  } while (call_functions());

  return 0;
}