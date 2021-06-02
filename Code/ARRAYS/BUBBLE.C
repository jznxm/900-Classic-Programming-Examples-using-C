#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int array[], int size)
{
  int temp, i, j;

  for (i = 0; i < size; i++)
    for (j = 0; j < size - i; j++)
      if (array[j + 1] < array[j])
      {
        temp = array[j + 1];
        array[j + 1] = array[j];
        array[j] = temp;
      }
}

int main(void)
{
  int values[30], i;

  for (i = 0; i < 30; i++)
    values[i] = rand() % 100;

  bubble_sort(values, 30);

  for (i = 0; i < 30; i++)
    printf("%d ", values[i]);
  printf("\n");
  return 0;
}
