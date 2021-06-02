#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? x : y)
#define MIN(x, y) ((x) < (y) ? x : y)

int main(void)
{
  printf("Maximum of %f and %f is %f\n",
         10.0, 25.0, MAX(10.0, 25.0));
  printf("Minimum of %f and %f is %f\n",
         10.0, 25.0, MIN(10.0, 25.0));
  return 0;
}
