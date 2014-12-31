#include <stdio.h>

int main(void)
{
  //FILE *file1;
  FILE *file2;
  FILE *file3;
  char string[256];
  int random_number;

  //file1 = fopen("file1.txt", "w");
  //fprintf(file1, "Writing to the file\n");
  //fclose(file1);

  file2 = fopen("FixEZReturnAuthorizationForm (1).pdf", "r");
  file3 = fopen("nigga.c", "w");

  while((fgets(string, 256, file2)) != NULL)
  {
    fprintf(file3, string, random_number);
  }

  fclose(file2);
  fclose(file3);

  return 0;
}


