#include <stdio.h>
#include "course.h"
#include "vector.h"

int get_choice();
void display_info(Course* course_array, Student* student_array, int total_courses, int total_students);

int main(int argc, char const *argv[])
{
  int total_courses = 0, total_students = 0;
  int initial_course_size = 100;
  int initial_student_size = 10;
  Course* course_array = NULL;
  Student* student_array = NULL;
  FILE* course_write = fopen(argv[3], "w");
  FILE* student_write = fopen(argv[4], "w");

  read_courses(argv[1], &course_array, &initial_course_size, &total_courses);
  read_students(argv[2], &student_array, &initial_student_size, &total_students);

  for(int i = 0; i < total_courses; i++)
    fprintf(course_write, "%d %s %s\n", course_array[i].crn, course_array[i].subject, course_array[i].course);

  for(int i = 0; i < total_students; i++)
  {
    fprintf(student_write, "%s %s %s %d CRNS: ", student_array[i].first_name,
      student_array[i].last_name, student_array[i].SID, student_array[i].count);

    for(int j = 0; j < student_array[i].count; j++)
      fprintf(student_write, "%d ", student_array[i].crn_array[j]);
    fprintf(student_write, "\n");
  }

  display_info(course_array, student_array, total_courses, total_students);
  deallocate(course_array, student_array);

  return 0;
}

int get_choice()
{
  int choice = 0;

  do
  {
    if(choice < 0 || choice > 4)
      printf("Your choice is outside the acceptable range. Please try again.\n");

    printf("\nRSVP Menu\n");
    printf("0. Done.\n");
    printf("1. Find by CRN.\n");
    printf("2. Find by subject.\n");
    printf("3. Add course.\n");
    printf("4. Remove course.\n");
    printf("Your choice (0 - 4): ");
    scanf("%d", &choice);
  } while (choice < 0 || choice > 4);

  return choice;
}

void display_info(Course* course_array, Student* student_array, int total_courses, int total_students)
{
  int choice;

  while((choice = get_choice()))
  {
    switch(choice)
    {
      case 1:
        find_CRN(course_array, total_courses);
        break;
      case 2:
        find_subject(course_array, total_courses);
        break;
      case 3:
        add_course(course_array, student_array, total_courses, total_students);
        break;
      case 4:
        remove_course(student_array, total_students);
        break;
    } //switch
  } //while choice is not 0.
}