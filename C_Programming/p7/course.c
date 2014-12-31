#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "course.h"
#include "vector.h"

void read_courses(const char *fp, int** crns, char*** subjects, char*** courses, int *initial_size, int* total_courses)
{
  char temp_array[100];
  int crn;
  FILE *input = fopen(fp, "r");

  if(input == NULL)
  {
    printf("File couldn't be openend. Exiting the program.\n");
    exit(1);
  }

  initialize(crns, subjects, courses, initial_size);

  while((fgets(temp_array, 100, input)) != NULL)
  {
    if(*total_courses > *initial_size - 1)
      resize(crns, subjects, courses, initial_size, total_courses);
    strtok(temp_array, "\t ^");
    if((crn = atoi(temp_array)) > 9999)
    {
      (*crns)[*total_courses] = crn;
      strcpy((*subjects)[*total_courses], strtok(NULL, "\t ^"));
      strcpy((*courses)[*total_courses], strtok(NULL, "\t ^"));
      (*total_courses)++;
    }
  }

  fclose(input);
}

void find_CRN(int* crns, char** subjects, char** courses, int total_courses)
{
  int crn;
  int crn_printed = 0;
  printf("Please enter a CRN: ");
  scanf("%d", &crn);

  for(int i = 0; i < total_courses; i++)
  {
    if(crns[i] == crn)
    {
      printf("%s %s\n", subjects[i], courses[i]);
      crn_printed++;
    }
  }

  if (crn_printed == 0)
    printf("CRN %d was not found.\n", crn);
}

void find_subject(int* crns, char** subjects, char** courses, int total_courses)
{
  char temp_subject[4];
  int subjects_printed = 0;

  printf("Please enter a subject: ");
  while ( getchar() != '\n' );
  fgets(temp_subject, 4, stdin);

  for(int i = 0; i < total_courses; i++)
  {
    if((strcmp(temp_subject, subjects[i])) == 0)
    {
      printf("%d %s %s\n", crns[i], subjects[i], courses[i]);
      subjects_printed++;
    }
  }

  if(subjects_printed == 0)
    printf("No courses were found for %s.\n", temp_subject);
}