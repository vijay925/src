#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char* array1 = "Bob1";
  char* array2 = "Bob";

  printf("%i\n", strncmp(array1, array2, 3)); // only looks at first 3 characters



  return 0;
}


/*
  strcmp(string1, string2, 3);
  strcpy(src, dest);
  strncpy(src, dest, number_of_chars);
  strcat(firstname, lastname)      //make sure there is enough room in the first array
  strncat(first, last, number_of_chars);
  strchr(sentence, 'A') // locationn - orininal array = index
  strrchr(sentence, 'A') //read the string from left

  strspn("haskd1haksdhaskdhasd", "qwertyuiopasdfghjklzxcvbnm"); //returns #of consecutive characters  129th has 3 digits
  strspn(string + 2, charset)
  strcspn(string, charset) //consecutive number of chars that are not part of the set

  strpbreak(sentence, "aeiouAEIOU")

  while(addr != NULL)
  {
    strpbreak(addr + 1, "aeiouAEIOU")
  }

    strtok(string, char_set)         //make sure string is a string array not a pointer
    // if element is not in the array, returns the whole string

*/