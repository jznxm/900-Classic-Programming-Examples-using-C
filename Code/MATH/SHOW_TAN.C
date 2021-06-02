#include <stdio.h>
#include <math.h>

int main(void)
{
  double pi1 = 3.1415926535;
  double pi2 = acos(-1);
  printf("Tangent of pi is %lf\n", tan(pi1));
  printf("Tangent of pi is %lf\n", tan(pi2));
  printf("Tangent of pi/4 is %lf\n", tan(pi1 / 2.0));
  printf("Tangent of pi/4 is %lf\n", tan(pi2 / 2.0));
  return 0;
}
