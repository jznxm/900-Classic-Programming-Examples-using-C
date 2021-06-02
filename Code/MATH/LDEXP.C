#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("3 * 2 raised to the 4 is %f\n",
         ldexp(3.0, 4));
  return 0;
}
