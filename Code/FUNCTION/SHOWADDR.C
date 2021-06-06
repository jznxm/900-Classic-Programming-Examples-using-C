#include <stdio.h>

int main(void)
{
  int a = 1, b = 2, c = 3;

  printf("The address of a is %p the value of a is %d\n", &a, a);
  printf("The address of b is %p the value of b is %d\n", &b, b);
  printf("The address of c is %p the value of c id %d\n", &c, c);
  return 0;
}
