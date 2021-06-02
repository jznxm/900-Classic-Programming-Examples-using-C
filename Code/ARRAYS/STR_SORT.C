#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(const char *array[], int size)
{
  const char *temp;
  int i, j;

  for (i = 0; i < size; i++)
    for (j = 0; j < size - i - 1; j++)
      if (strcmp(array[j], array[j + 1]) > 0)
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
}

int main(void)
{
  const char *values[] = {"AAA", "CCC", "BBB", "EEE", "DDD"};
  int i;

  bubble_sort(values, 5);

  for (i = 0; i < 5; i++)
    printf("%s ", values[i]);
  printf("\n");
  return 0;
}
