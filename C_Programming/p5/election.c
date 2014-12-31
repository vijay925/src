#include <stdio.h>
#define ROWS 6
#define COLUMNS 5

void read_file(FILE *input, int election_matrix[ROWS][COLUMNS]);
void sort(int election_matrix[ROWS][COLUMNS], char names[]);
void show_table(int election_matrix[ROWS][COLUMNS], char names[]);
void declare_winner(int election_matrix[ROWS][COLUMNS], char names[]);

int main(int argc, char const *argv[])
{
  int election_matrix[ROWS][COLUMNS];
  FILE *input = fopen(argv[1], "r");
  char names[5] = "ABCD";

  read_file(input, election_matrix);
  sort(election_matrix, names);
  show_table(election_matrix, names);
  declare_winner(election_matrix, names);

  return 0;
}

void read_file(FILE *input, int election_matrix[ROWS][COLUMNS])
{
  int i, j;

  for(i = 0; i < (ROWS - 1); i++)
  {
    for(j = 0; j < COLUMNS; j++)
      fscanf(input, "%d", &(election_matrix[i][j]));
  } //inputs the file

  for(j = 1; j < COLUMNS; j++)
  {
    for(i = 0; i < (ROWS - 1); i++)
      election_matrix[5][j] += election_matrix[i][j];
  } //sums the columns
}

void show_table(int election_matrix[ROWS][COLUMNS], char *names)
{
  int i, j;
  printf("           Candidate  Candidate  Candidate  Candidate\n\n");
  printf("Precinct       ");

  for(i = 0; i < 5; i++)
    printf("%8c", names[i]);
  printf("\n");

  for(int i = 0; i < (ROWS - 1); i++)
  {
    for(int j = 0; j < COLUMNS; j++)
      printf("%4d      ", election_matrix[i][j]);
    printf("\n");
  }

  printf("Total:        ");

  for(i = 5, j = 1; j < COLUMNS; j++)
    printf("%4d      ", election_matrix[i][j]);
  printf("\n");
}

void sort(int election_matrix[ROWS][COLUMNS], char names[])
{
  int row = 5;
  int temp_aray[ROWS];
  char temp_char = '\0';

  for(int i = 1; i < COLUMNS; i++)
  {
    for(int j = i + 1; j < COLUMNS; j++)
    {
      if(election_matrix[row][i] < election_matrix[row][j])
      {
        for(int k = 0; k < ROWS; k++)
        {
          temp_aray[k] = election_matrix[k][i];
          election_matrix[k][i] = election_matrix[k][j];
          election_matrix[k][j] = temp_aray[k];
        } //swaps the coumns

        temp_char = names[i - 1];
        names[i - 1] = names[j - 1];
        names[j - 1] = temp_char;

      } //checks whether the columns need to be swapped
    } //checks if the previous column is smaller than any of the later ones
  } // goes through all columns
}

void declare_winner(int election_matrix[ROWS][COLUMNS], char names[])
{
  double sum = 0;
  int row = 5, column;
  double percentage = 0;

  for(column = 1; column < COLUMNS; column++)
      sum += election_matrix[row][column];      //gets sum

  percentage = (election_matrix[5][1] / sum) * 100;

  if(percentage >= 50)
    printf("Candidate %c is the winner.\n", names[0]);
  else
    printf("Candidate %c and %c will have a runoff.\n", names[0], names[1]);
}