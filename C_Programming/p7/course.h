#ifndef COURSE_H
  #define COURSE_H

void read_courses(const char *fp, int** crns, char*** subjects, char*** courses, int *initial_size, int* total_courses);
void find_CRN(int* crns, char** subjects, char** courses, int total_courses);
void find_subject(int* crns, char** subjects, char** courses, int total_courses);

#endif