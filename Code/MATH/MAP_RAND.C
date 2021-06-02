#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int i;

  printf("Values in the range 0.0 through 1.0\n");
  for (i = 0; i < 5; i++)
    printf("%f\n", rand() / 32767.0);

  printf("Values in the range -5 to 5\n");
  srand(time(NULL));
  for (i = 0; i < 5; i++)
  {
    printf("%ld\n", random() % 10 - 4);
  }
  return 0;
}
