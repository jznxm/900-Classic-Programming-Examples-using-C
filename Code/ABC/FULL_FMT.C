#include <stdio.h>

int main()
{
  int int_value = 5;

  printf("Left justifed with sign\n%-+6dabc\n",
         int_value);
  return 0;
}
