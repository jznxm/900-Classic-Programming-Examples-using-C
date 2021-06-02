#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;

  printf("Values from rand\n");
  for (i = 0; i < 100; i++)
    printf("%d ", rand());

  printf("Values from random(100))\n");
  for (i = 0; i < 100; i++)
    printf("%ld ", random());
  return 0;
}
