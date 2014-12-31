#include <stdio.h>
#include <math.h>

void calc_stats(double numbers[], int N);

int main(int argc, char const *argv[])
{
  FILE *input = fopen(argv[1], "r");

  int N;
  fscanf(input, "%d", &N);
  double numbers[N];

  for(int i = 0; i < N; i++)
  {
    fscanf(input, "%lf", &(numbers[i]));
  }

  calc_stats(numbers, N);

  fclose(input);
  return 0;
}

void calc_stats(double numbers[], int N)
{
  double smallest = numbers[0];
  double largest = numbers[0];
  double average;
  double std_deviation;
  double sum = 0;
  double sum_squares = 0;


  for(int i = 0; i < N; i++)
  {
    sum += numbers[i];
    sum_squares += ((numbers[i]) * (numbers[i]));

    if(numbers[i] < smallest)
      smallest = numbers[i];

    if(numbers[i] > largest)
      largest = numbers[i];
  }

  average = sum / N;
  std_deviation = sqrt((sum_squares / N) - (average * average));

  printf("Smallest: %0.2lf\n", smallest);
  printf("Largest: %0.2lf\n", largest);
  printf("Average: %0.2lf\n", average);
  printf("Std deviation: %0.3lf\n", std_deviation);

}