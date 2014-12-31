#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SUBJECT_MAX 4
#define COURSES_MAX 6

void initialize(int** crns, char*** subjects, char*** courses, int* initial_size)
{
  *crns = malloc(sizeof(int) * (*initial_size));
  *subjects = malloc(sizeof(char *) * (*initial_size));
  *courses = malloc(sizeof(char *) * (*initial_size));

  for(int i = 0; i < *initial_size; i++)
  {
    (*subjects)[i] = malloc(sizeof(char) * SUBJECT_MAX);
    (*courses)[i] = malloc(sizeof(char) * COURSES_MAX);
  }
}

void resize(int** crns, char*** subjects, char*** courses, int* initial_size, int* total_courses)
{
  int old_size = *initial_size;
  *initial_size *= 2;
  int *old_crns = *crns;
  char** old_subjects = *subjects;
  char** old_courses = *courses;
  initialize(crns, subjects, courses, initial_size);

  for(int i = 0; i < *total_courses; i++)
  {
    (*crns)[i] = (old_crns)[i];
    strcpy((*subjects)[i], (old_subjects)[i]);
    strcpy((*courses)[i], (old_courses)[i]);
  }

  free(old_crns);
  for(int i = 0; i < old_size; i++)
  {
    free(old_courses[i]);
    free(old_subjects[i]);
  }
}

void deallocate(int* crns, char** subjects, char** courses, int initial_size)
{
  free(crns);

  for(int i = 0; i < initial_size; i++)
  {
    free(subjects[i]);
    free(courses[i]);
  }

  free(subjects);
  free(courses);
}