#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "course.h"
#include "vector.h"


void initialize_courses(Course** course_array, int* initial_course_size)
{
  *course_array = malloc(sizeof(Course) * (*initial_course_size));

  for(int i = 0; i < *initial_course_size; i++)
  {
    ((*course_array)[i]).subject = malloc(sizeof(char) * SUBJECT_MAX);
    ((*course_array)[i]).course = malloc(sizeof(char) * COURSES_MAX);
  }
}

void initialize_students(Student** student_array, int* initial_student_size)
{
  *student_array = malloc(sizeof(Student) * (*initial_student_size));

  for(int i = 0; i < *initial_student_size; i++)
  {
    ((*student_array)[i]).SID = malloc(sizeof(char) * SID_MAX);
    ((*student_array)[i]).crn_array = malloc(sizeof(int) * MAX_CRN);
  }
}

void resize_courses(Course** course_array, int* initial_course_size, int* total_courses)
{
  Course *old_course_array = *course_array;
  *initial_course_size *= 2;

  initialize_courses(course_array, initial_course_size);

  for(int i = 0 ; i < *total_courses; i++)
  {
    ((*course_array)[i]).crn = (old_course_array[i]).crn;
    strcpy(((*course_array)[i]).subject, (old_course_array[i]).subject);
    strcpy(((*course_array)[i]).course, (old_course_array[i]).course);
  }

  free(old_course_array);
}

void resize_students(Student** student_array, int* initial_student_size, int* total_students)
{
  Student *old_student_array = *student_array;
  *initial_student_size *= 2;

  initialize_students(student_array, initial_student_size);

  for(int i = 0; i < *total_students; i++)
  {
    (*student_array)[i].first_name = malloc(sizeof(char) * strlen(old_student_array[i].first_name) + 1);
    strcpy((*student_array)[i].first_name, old_student_array[i].first_name);
    (*student_array)[i].last_name = malloc(sizeof(char) * strlen(old_student_array[i].last_name) + 1);
    strcpy((*student_array)[i].last_name, old_student_array[i].last_name);
    strcpy((*student_array)[i].SID, old_student_array[i].SID);
    (*student_array)[i].count = old_student_array[i].count;

    for(int j = 0; j < old_student_array[i].count; j++)
      (*student_array)[i].crn_array[j] = old_student_array[i].crn_array[j];
  }

  free(old_student_array);
}

void deallocate(Course* course_array, Student* student_array)
{
  free(course_array);
  free(student_array);
}