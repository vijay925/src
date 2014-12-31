  FILE* course_write = fopen(argv[3], "w");
  FILE* student_write = fopen(argv[4], "w");

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