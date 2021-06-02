#include <stdio.h>

int main(void)
{
  int count[10];
  float salaries[5];
  long distances[10];

  printf("Address of the array count is %lx\n", count);
  printf("Address of the array salaries is %lx\n", salaries);
  printf("Address of the array distances is %lx\n", distances);
  return 0;
}
