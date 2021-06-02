#include <stdio.h>

int main(void)
{
  int count = 1;
  float salary = 40000.0;
  long distance = 1234567L;

  printf("Address of count is %lx\n", &count);
  printf("Address of salary is %lx\n", &salary);
  printf("Address of distance is %lx\n", &distance);

  return 0;
}
