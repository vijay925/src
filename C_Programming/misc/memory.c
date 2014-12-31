#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  int *nums;
  nums = malloc(sizeof(int) * 5);

  for(int i = 0; i < 5; i++)
    nums[i] = 10;

  memcpy(destination, source, size(int) * 5);
  memset(nums, 0, size(int) * 5);
  memcmp(nums1, nums2, sizeof(nums1))

  characters = realloc(characters, sizeof(char) * 5)

  free(nums);
  return 0;
}