#include <stdio.h>
#define PRIMARY_KNEADING_W 15
#define PRIMARY_KNEADING_S 20
#define PRIMARY_RISING_W_S 60
#define SECONDARY_KNEADING_W 18
#define SECONDARY_KNEADING_S 33
#define SECONDARY_RISING_W 20
#define SECONDARY_RISING_S 30
#define LOAF_SHAPING_W_S 2
#define FINAL_RISING_W_S 75
#define BAKING_W 45
#define BAKING_S 35
#define COOLING_W_S 30

void print_times(char, char, char);

int main(void)
{
  char bread_type = '\0';
  char single_or_double = '\0';
  char manual_or_not = '\0';

  printf("Are you making white or sweet bread (w or s)? ");
  scanf(" %c", &bread_type);
  printf("Is this a single or double loaf (s or d)? ");
  scanf(" %c", &single_or_double);
  printf("Are you going to bake manually (y or n)? ");
  scanf(" %c", &manual_or_not);

  //printf("%c%c%c\n", bread_type, single_or_double, manual_or_not);
  print_times(bread_type, single_or_double, manual_or_not);

  return 0;
}

void print_times(char bread_type, char single_or_double, char manual_or_not)
{
  int minutes = 0;
  int seconds = 0;

  if(bread_type == 'W' || bread_type == 'w')
  {
    printf("Primary kneading: %d\n", PRIMARY_KNEADING_W);
    minutes += PRIMARY_KNEADING_W;
  }
  else
  {
    printf("Primary kneading: %d\n", PRIMARY_KNEADING_S);
    minutes += PRIMARY_KNEADING_S;
  }

  printf("Primary rising: %d\n", PRIMARY_RISING_W_S);
  minutes += PRIMARY_RISING_W_S;


  if(bread_type == 'W' || bread_type == 'w')
  {
    printf("Secondary kneading: %d\n", SECONDARY_KNEADING_W);
    printf("Secondary rising: %d\n", SECONDARY_RISING_W);
    minutes += SECONDARY_KNEADING_W + SECONDARY_RISING_W;
  }
  else
  {
    printf("Secondary kneading: %d\n", SECONDARY_KNEADING_S);
    printf("Secondary rising: %d\n", SECONDARY_RISING_S);
    minutes += (SECONDARY_KNEADING_S + SECONDARY_RISING_S);
  }

  printf("Loaf shaping: %d\n", LOAF_SHAPING_W_S);
  seconds += LOAF_SHAPING_W_S;

  if(manual_or_not == 'Y' || manual_or_not == 'y')
    printf("You should remove the dough for manual baking.\n\n");
  else
  {
    printf("Final rising: %d\n", FINAL_RISING_W_S);
    minutes += FINAL_RISING_W_S;

    if(bread_type == 'W' || bread_type == 'w')s
    {
      if(single_or_double == 's' || single_or_double == 'S')
      {
        printf("Baking: %d and 0 seconds\n", BAKING_W);
        minutes += BAKING_W;
      }
      else
      {
        printf("Baking: %d and 30 seconds\n", (int)(1.5 * BAKING_W));
        minutes += (int)(1.5 * BAKING_W);
        seconds += 30;
      }
    }
    else
    {
      if(single_or_double == 's' || single_or_double == 'S')
      {
        printf("Baking: %d and 0 seconds\n", BAKING_S);
        minutes += BAKING_S;
      }
      else
      {
        printf("Baking: %d and 30 seconds\n", (int)(1.5 * BAKING_S));
        minutes += (int)(1.5 * BAKING_S);
        seconds += 30;
      }
    }
    printf("Cooling: %d\n", COOLING_W_S);
    minutes += COOLING_W_S;
  }

  printf("For a total baking time of %d minutes and %d seconds\n", minutes, seconds);
}