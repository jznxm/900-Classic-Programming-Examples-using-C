#include <stdio.h>

int main(void)
{
  int count[10];
  float salaries[5];
  long distances[10];

  printf("Address of the array count is %x &count is %x\n",
         count, &count[3]);
  printf("Address of the array salaries is %x &count is %x\n",
         salaries, &salaries[3]);
  printf("Address of the array distances is %x &distances is %x\n",
         distances, &distances[3]);
  return 0;
}
