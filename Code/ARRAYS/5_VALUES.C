#include <stdio.h>

int main(void)
{
  int values[6] = {80, 70, 90, 85, 80};

  for (int i = 0; i < 6; i++)
    printf("values[%d] %d\n", i, values[i]);
  return 0;
}
