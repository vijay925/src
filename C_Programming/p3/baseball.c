#include <stdio.h>

double find_average(char record[])
{
  int H = 0, O = 0, W = 0, S = 0, P = 0;
  double average = 0;
  int count = 0;

  while((record[count]) != '\0')
  {
    if(record[count] == 'H')
      H++;
    else if(record[count] == 'O')
      O++;
    else if(record[count] == 'W')
      W++;
    else if(record[count] == 'S')
      S++;
    else if(record[count] == 'P')
      P++;

    count++;
  }

  average = ((double)H) / ((double)O + (double)H);

  return average;
}

int main(void)
{
  FILE *input = fopen("baseball2.txt", "r");
  int player_number = -1;
  char record[256];
  double average = -1;

  while((fscanf(input, "%d%s", &player_number, record)) != EOF)
  {
    printf("Player %d's record: %s\n", player_number, record);
    average = find_average(record);
    printf("Player %d's batting average: %0.3lf\n\n", player_number, average);
  }

  fclose(input);

  return 0;
}



