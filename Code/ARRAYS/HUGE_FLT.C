#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;

  float *values;

  if ((values = (float *)malloc(17000 * sizeof(float))) == NULL)
    printf("Error allocating huge array\n");
  else
  {
    printf("Filling the array\n");

    for (i = 0; i < 17000; i++)
      values[i] = i * 0.1;

    for (i = 0; i < 17000; i++)
      printf("%5.1f ", values[i]);

    free(values);
  }
  return 0;
}
