#include <stdio.h>
#include "course.h"
#include "vector.h"

int get_choice();
void display_info(int* crns, char** subjects, char** courses, int total_courses);

int main(int argc, char const *argv[])
{
  int total_courses = 0;
  int *crns = NULL;
  char** subjects = NULL;
  char** courses = NULL;
  int initial_size = 100;

  read_courses(argv[1], &crns, &subjects, &courses, &initial_size, &total_courses);
  display_info(crns, subjects, courses, total_courses);
  deallocate(crns, subjects, courses, initial_size);

  return 0;
}

int get_choice()
{
  int choice = 0;

  do
  {
    if(choice < 0 || choice > 2)
      printf("Your choice is outside the acceptable range. Please try again.\n");

    printf("\nRSVP Menu\n");
    printf("0. Done.\n");
    printf("1. Find by CRN.\n");
    printf("2. Find by subject.\n");
    printf("Your choice (0 - 2): ");
    scanf("%d", &choice);
  } while (choice < 0 || choice > 2);

  return choice;
}

void display_info(int* crns, char** subjects, char** courses, int total_courses)
{
  int choice;

  while((choice = get_choice()))
  {
    if(choice == 1)
      find_CRN(crns, subjects, courses, total_courses);
    else if(choice == 2)
      find_subject(crns, subjects, courses, total_courses);
  }
}