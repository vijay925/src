#include <stdio.h>
#define PI 3.14159265359

void instructions();
double surface_area(double radius, double height, int quantity);
void print_cost(int count, double area_total, double cost);

int main(void)
{
  FILE *input;
  double radius = 0, height = 0, cost = 0, area_total = 0;
  int quantity = 0;
  int count = 0;

  instructions();
  input = fopen("cans.txt", "r");

  while((fscanf(input, "%lf%lf%lf%d", &radius, &height, &cost, &quantity)) != EOF)
  {
    count++;
    area_total = surface_area(radius, height, quantity);
    cost = area_total * cost * quantity;
    print_cost(count, area_total, cost);
  }

  fclose(input);

  return 0;
}

double surface_area(double radius, double height, int quantity)
{
  double area_base = 0;
  double area_side = 0;
  double area_total = 0;

  area_base = PI * radius * radius;
  area_side = 2 * PI * radius * height;
  area_total = area_base + area_side;

  return area_total;
}

void instructions()
{
  printf("%s\n", "This program calculates the cost of materials for three open-top cylindrical");
  printf("%s\n", "containers. It reads the radius, height, cost per square centimeter, and");
  printf("%s\n", "quantity for each container from the file cans.txt. Each line in cans.txt has");
  printf("%s\n\n", "the format: radius height cost_per_sq_cm quantity.");
}

void print_cost(int count, double area_total, double cost)
{
  printf("Each can #%d has surface area %0.3lf, and the run will cost $%0.2lf.\n", count, area_total, cost);
}