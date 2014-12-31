#ifndef VECTOR_H
  #define VECTOR_H

void initialize(int** crns, char*** subjects, char*** courses, int* initial_size);
void resize(int** crns, char*** subjects, char*** courses, int* initial_size, int* total_courses);
void deallocate(int* crns, char** subjects, char** courses, int initial_size);

#endif