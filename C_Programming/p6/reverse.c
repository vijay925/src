#include <stdio.h>
#include <string.h>
#define MAX_LEN 80

char *reverse(char string[]);

int main(void)
{
  char string[MAX_LEN];
  int lenght;
  char *temp;
  char answer = 'y';

  printf("Input: ");
  fgets(string, MAX_LEN, stdin);
  lenght = strlen(string);
  string[lenght - 1] = '\0';

  reverse(string);

  temp = strtok(string, " \n");
  printf("Reversed: ");
  while(temp != NULL)
  {
    reverse(temp);
    printf("%s ", temp);
    temp = strtok(NULL, " \n");
  }

  printf("\n");

  return 0;
}

char *reverse(char string[])
{
  char c;
  int i = 0, j;
  int lenght = strlen(string);

  for(j = lenght - 1; i < j; j--)
  {
    c = string[i];
    string[i] = string[j];
    string[j] = c;
    i++;
  }

  string[lenght] = '\0';

  return string;
}