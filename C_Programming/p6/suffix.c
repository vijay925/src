#include <stdio.h>
#include <string.h>

void find_suffix(char *word1, char* word2);
char *reverse(char string[]);

int main(int argc, char const *argv[])
{
  char word1[20];
  char word2[20];

  printf("First word: ");
  scanf("%s", word1);
  printf("Second word: ");
  scanf("%s", word2);
  find_suffix(word1, word2);

  return 0;
}

void find_suffix(char *word1, char* word2)
{
  int len_w1 = strlen(word1);
  int len_w2 = strlen(word2);
  char temp_array[80] = "";
  int i = 0;

  while(word1[len_w1 - 1] == word2[len_w2 - 1])
  {
    temp_array[i] = word1[len_w1 - 1];
    i++;
    len_w1--;
    len_w2--;
  }

  temp_array[i] = '\0';

  reverse(temp_array);
  printf("%s\n", temp_array);
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