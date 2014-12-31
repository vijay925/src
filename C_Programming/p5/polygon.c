#include <stdio.h>
#define MAX_SIZE 20

int get_corners(FILE *input, double x[], double y[], int max_size);
void output_corners(FILE *output, double x[], double y[], int actual_size);
double polygon_area(double x[], double y[], int actual_size);

int main(int argc, char const *argv[])
{
  int actual_size = 0;
  double x[MAX_SIZE];
  double y[MAX_SIZE];
  double area = 0;

  FILE *input = fopen(argv[1], "r");
  FILE *output = fopen(argv[2], "w");

  actual_size = get_corners(input, x, y, MAX_SIZE);
  output_corners(output, x, y, actual_size);
  area = polygon_area(x, y, actual_size);
  printf("%d\n", actual_size);

  printf("The area is %0.1lf.\n", area);

  return 0;
}

int get_corners(FILE *input, double x[], double y[], int max_size)
{
  int actual_size = 0;

  for(int i = 0; i < max_size; i++)
  {
    if((fscanf(input, "%lf%lf", &(x[i]), &(y[i])) >= 0))
      actual_size++;
  }

  return actual_size;
} //return number of coordinates in arrays

void output_corners(FILE *output, double x[], double y[], int actual_size)
{
  for(int i = 0; i < actual_size; i++)
  {
    fprintf(output, "%0.1lf %0.1lf\n", x[i], y[i]);
  }
}

double polygon_area(double x[], double y[], int actual_size)
{
  double area = 0;

  for(int i = 0; i < (actual_size - 2); i++)
    area += ((x[i+1] + x[i]) * (y[i+1] - y[i]));

  area *= -1; //absolute value
  area = area * 0.5;

  return area;
}