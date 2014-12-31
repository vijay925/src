#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SURNAME 16
#define MAX_FIRST 11

void read_names(FILE *input, char** surname, char** first_name, char* middle_init, int number_of_names);
void sort(char** surname, char** first_name, char* middle_init, int number_of_names);
void write_names(FILE* output, char** surname, char** first_name, char* middle_init, int number_of_names);

int main(int argc, char const *argv[])
{
  char **surname, **first_name;
  char *middle_init;
  int number_of_names = 0;
  FILE *input = fopen(argv[1], "r");
  FILE *output = fopen(argv[2], "w");

  fscanf(input, "%d", &number_of_names);

  surname = malloc(sizeof(char *) * number_of_names);
  first_name = malloc(sizeof(char *) * number_of_names);

  for(int i = 0; i < number_of_names; i++)
  {
    surname[i] = malloc(sizeof(char) * MAX_SURNAME);
    first_name[i] = malloc(sizeof(char) * MAX_FIRST);
  }

  middle_init = malloc(sizeof(char) * number_of_names);

  read_names(input, surname, first_name, middle_init, number_of_names);
  sort(surname, first_name, middle_init, number_of_names);
  write_names(output, surname, first_name, middle_init, number_of_names);

  for(int i = 0; i < number_of_names; i++)
  {
    free(surname[i]);
    free(first_name[i]);
  }

  free(surname);
  free(first_name);
  free(middle_init);
  fclose(input);
  fclose(output);

  return 0;
}

void read_names(FILE *input, char** surname, char** first_name, char* middle_init, int number_of_names)
{
  char temp_array[90];
  char *temp_pointer;
  int i, j;

  fgets(temp_array, 90, input); //discards the first line

  for(i = 0; i < number_of_names; i++)
  {
    fgets(temp_array, 90, input);
    temp_pointer = strtok(temp_array, " ,.\n");

    for(j = 0; j < MAX_SURNAME - 1; j++)
      surname[i][j] = temp_pointer[j];
    surname[i][MAX_SURNAME - 1] = '\0';

    temp_pointer = strtok(NULL, " ,.\n");

    for(j = 0; j < MAX_FIRST - 1; j++)
        first_name[i][j] = temp_pointer[j];
      first_name[i][MAX_FIRST - 1] = '\0';

    temp_pointer = strtok(NULL, " ,.\n");

    middle_init[i] = temp_pointer[0];
  }
}

void sort(char** surname, char** first_name, char* middle_init, int number_of_names)
{
  char temp_array[20];
  int i, j;

  for(i = 0; i < number_of_names; i++)
  {
    for(j = i+1; j < number_of_names; j++)
    {
      if(strcmp(surname[i], surname[j]) == 0)
      {
        if(strcmp(first_name[i], first_name[j]) > 0)
        {
          strcpy(temp_array, first_name[i]);
          strcpy(first_name[i], first_name[j]);
          strcpy(first_name[j], temp_array);
          temp_array[0] = middle_init[i];
          middle_init[i] = middle_init[j];
          middle_init[j] = temp_array[0];
        }
      }

      else if(strcmp(surname[i], surname[j]) > 0)
      {
        strcpy(temp_array, surname[i]);
        strcpy(surname[i], surname[j]);
        strcpy(surname[j], temp_array);
        strcpy(temp_array, first_name[i]);
        strcpy(first_name[i], first_name[j]);
        strcpy(first_name[j], temp_array);
        temp_array[0] = middle_init[i];
        middle_init[i] = middle_init[j];
        middle_init[j] = temp_array[0];
      } //if
    } //for
  } //outer for
}

void write_names(FILE* output, char** surname, char** first_name, char* middle_init, int number_of_names)
{
  for (int i = 0; i < number_of_names; ++i)
    fprintf(output, "%-15s %-15s %c\n", surname[i], first_name[i], middle_init[i]);
}