#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  long int i;

  int *big_array;

  if ((big_array = (int *)malloc(100000 * sizeof(long int))) == NULL)
    printf("Error allocating huge array\n");
  else
  {
    printf("Filling the array\n");

    for (i = 0; i < 100000L; i++)
      big_array[i] = i % 32768;

    for (i = 0; i < 100000L; i++)
      printf("%d ", big_array[i]);

    free(big_array);
  }
  return 0;
}
