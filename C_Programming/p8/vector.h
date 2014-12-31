#ifndef VECTOR_H
  #define VECTOR_H

void initialize_courses(Course** course_array, int* initial_course_size);
void initialize_students(Student** student_array, int* initial_student_size);
void resize_courses(Course** course_array, int* initial_course_size, int* total_courses);
void resize_students(Student** student_array, int* initial_student_size, int* total_students);
void deallocate(Course* course_array, Student* student_array);

#endif