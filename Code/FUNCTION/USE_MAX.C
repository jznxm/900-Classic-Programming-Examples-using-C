#include <stdio.h>

int get_maximum(int, int);

int main(void)
{
  int result;

  result = get_maximum(100, 200);

  printf("The larger value is %d\n", result);
  return 0;
}

int get_maximum(int a, int b)
{
  return a > b ? a : b;
}
