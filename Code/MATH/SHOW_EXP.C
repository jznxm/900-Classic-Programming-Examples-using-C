#include <stdio.h>
#include <math.h>

int main(void)
{
  double value;

  for (value = 0.0; value <= 1.0; value += 0.1)
    printf("exp(%f) is %f\n", value, exp(value));
  return 0;
}
