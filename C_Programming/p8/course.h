#ifndef COURSE_H
  #define COURSE_H

#define SUBJECT_MAX 4
#define COURSES_MAX 6
#define SID_MAX 12
#define MAX_CRN 5

typedef struct
{
  int crn;
  char *subject;
  char *course;
} Course;

typedef struct
{
  char* first_name;
  char* last_name;
  char* SID;
  int *crn_array;
  int count;
} Student;

void read_courses(const char *html_file, Course** course_array,
                        int* initial_course_size, int* total_courses);

void read_students(const char* student_file, Student** student_array,
                    int* initial_student_size, int* total_students);

void find_CRN(Course* course_array, int total_courses);
void find_subject(Course *course_array, int total_courses);
void add_course(Course* course_array, Student* student_array, int total_courses, int total_students);
int get_SID(Student* student_array, int total_students, char temp_SID[], int* index, int* prompt);
void remove_course(Student* student_array, int total_students);

#endif