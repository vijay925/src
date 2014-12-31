#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "course.h"
#include "vector.h"

void read_courses(const char *file1, Course** course_array, int* initial_course_size, int* total_courses)
{
  char temp_array[100];
  int crn;
  FILE *html_file = fopen(file1, "r");

  if(html_file == NULL)
  {
    printf("HTML file couldn't be openend. Exiting the program.\n");
    exit(1);
  }

  initialize_courses(course_array, initial_course_size);

  while((fgets(temp_array, 100, html_file)) != NULL)
  {
    if(*total_courses > *initial_course_size - 1)
      resize_courses(course_array, initial_course_size, total_courses);
    strtok(temp_array, "\t ^");
    if((crn = atoi(temp_array)) > 9999)
    {
      ((*course_array)[*total_courses]).crn = crn;
      strcpy(((*course_array)[*total_courses]).subject, strtok(NULL, "\t ^"));
      strcpy(((*course_array)[*total_courses]).course, strtok(NULL, "\t ^"));
      (*total_courses)++;
    }
  }

  fclose(html_file);
}

void read_students(const char* student_csv, Student** student_array,
                    int* initial_student_size, int* total_students)
{
  FILE* student_file = fopen(student_csv, "r");
  char temp_array[100];
  char *temp;

  initialize_students(student_array, initial_student_size);

  while((fgets(temp_array, 100, student_file)) != NULL)
  {
    int index = 0;

    if(*total_students > *initial_student_size - 1)
      resize_students(student_array, initial_student_size, total_students);

    temp = strtok(temp_array, ",");
    ((*student_array)[*total_students]).last_name = malloc(sizeof(char) * (strlen(temp) + 1));
    strcpy(((*student_array)[*total_students]).last_name, temp);
    temp = strtok(NULL, ",");
    ((*student_array)[*total_students]).first_name = malloc(sizeof(char) * (strlen(temp) + 1));
    strcpy(((*student_array)[*total_students]).first_name, temp);
    temp = strtok(NULL, ",");
    strcpy(((*student_array)[*total_students]).SID, temp);
    ((*student_array)[*total_students]).count = 0;
    temp = strtok(NULL, ",");

    while(temp)
    {
      ((*student_array)[*total_students]).crn_array[index] = atoi(temp);
      temp = strtok(NULL, ",");
      index++;
      ((*student_array)[*total_students]).count = index;
    } //while there are more crns
    (*total_students)++;
  } //while there are more lines to read

  fclose(student_file);
} //end of read_students

void find_CRN(Course* course_array, int total_courses)
{
  int crn;
  int crn_printed = 0;
  printf("Please enter a CRN: ");
  scanf("%d", &crn);

  for(int i = 0; i < total_courses; i++)
  {
    if((course_array[i].crn) == crn)
    {
      printf("%s %s\n", (course_array[i]).subject, (course_array[i]).course);
      crn_printed++;
    }
  }

  if (crn_printed == 0)
    printf("CRN %d was not found.\n", crn);
}

void find_subject(Course *course_array, int total_courses)
{
  char temp_subject[4];
  int subjects_printed = 0;

  printf("Please enter a subject: ");
  while ( getchar() != '\n' );
  fgets(temp_subject, 4, stdin);

  for(int i = 0; i < total_courses; i++)
  {
    if((strcmp(temp_subject, (course_array[i]).subject)) == 0)
    {
      printf("%d %s %s\n", (course_array[i]).crn, (course_array[i]).subject, (course_array[i]).course);
      subjects_printed++;
    }
  }

  if(subjects_printed == 0)
    printf("No courses were found for %s.\n", temp_subject);
}

void add_course(Course* course_array, Student* student_array, int total_courses, int total_students)
{
  char temp_SID[12];
  int crn;
  int already_taking_course = 0;
  int index;
  int crn_found = 0;
  int prompt = 1; //prompt 1 = Please enter ...., prompt 2 = SID was not found... etc

  do
    index = get_SID(student_array, total_students, temp_SID, &index, &prompt);
  while(index < 0);

  if(student_array[index].count > 4)
    printf("You are already taking 5 courses.\n");
  else
  {
    do
    {
      printf("Please enter the CRN: ");
      scanf("%d", &crn);

      for(int i = 0; i < total_courses; i++)
      {
        if(course_array[i].crn == crn)
          crn_found = 1;
      } //for

      if(crn_found != 1)
        printf("No CRN found with that CRN.\n");
    } while(crn_found == 0);

    for(int i = 0; i < student_array[index].count; i++)
    {
      if(student_array[index].crn_array[i] == crn)
        already_taking_course = 1;
    } // for

    if(already_taking_course == 1)
      printf("You are already taking this course.\n");
    else
    {
      student_array[index].crn_array[(student_array[index].count)] = crn;
      student_array[index].count += 1;
    } //else
  } //outer else (if taking less than 5 courses)

    printf("Current course: ");
    for(int i = 0; i < student_array[index].count; i++)
      printf("%d ", student_array[index].crn_array[i]);
    printf("\n");
} //add course

void remove_course(Student* student_array, int total_students)
{
  char temp_SID[12];
  int crn;
  int index;
  int crn_index_to_delete = -1;
  int prompt = 1; //prompt 1 = Please enter ...., prompt 2 = SID was not found... etc

  do
  {
    while ( getchar() != '\n' );
    index = get_SID(student_array, total_students, temp_SID, &index, &prompt);
  }
  while(index < 0);

  printf("Current course: ");
  for(int i = 0; i < student_array[index].count; i++)
    printf("%d ", student_array[index].crn_array[i]);
  printf("\n");

  printf("Please enter the CRN: ");
  scanf("%d", &crn);

  for(int i = 0; i < student_array[index].count; i++)
    if(student_array[index].crn_array[i] == crn)
      crn_index_to_delete = i;

  if(crn_index_to_delete < 0)
    printf("This course is not in your schedule.\n");
  else
  {
    if(student_array[index].crn_array[(student_array[index].count)] == crn)
      student_array[index].count--;
    else
    {
      student_array[index].crn_array[crn_index_to_delete] = student_array[index].crn_array[(student_array[index].count) - 1];
      student_array[index].count--;
    } //if the crn to be deleted is not the last element in the array
  }

}

int get_SID(Student* student_array, int total_students, char temp_SID[], int* index, int* prompt)
{
  *index = -1;

  if(*prompt == 1)
    printf("Please enter the SID of the student: ");
  else
    printf("SID was not found. Enter it again: ");

  while (getchar() != '\n');

  fgets(temp_SID, 12, stdin);

  for(int i = 0; i < total_students; i++)
    if((strcmp(student_array[i].SID, temp_SID)) == 0)
      *index = i;

  *prompt = 2;

  return *index;
}