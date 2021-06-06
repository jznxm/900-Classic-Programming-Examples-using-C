#include <stdio.h>

int main(void)
{
  extern int tip_count;

  printf("The number of tips is %d\n", tip_count);
  return 0;
}
