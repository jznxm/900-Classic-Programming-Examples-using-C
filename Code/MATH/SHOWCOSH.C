#include <stdio.h>
#include <math.h>

int main(void)
{
  double radians;

  for (radians = -0.5; radians <= 0.5; radians += 0.2)
    printf("%f %f\n", radians, cosh(radians));
  return 0;
}
