#include <stdio.h>
#include <limits.h>

int main(void)
{
  int positive = INT_MAX;
  int negative = INT_MIN;

  printf("%d + 1 is %d\n", positive, positive + 1);
  printf("%d - 1 is %d\n", negative, negative - 1);
  return 0;
}
