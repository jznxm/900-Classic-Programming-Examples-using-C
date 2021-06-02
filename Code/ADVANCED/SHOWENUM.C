#include <stdio.h>

int main(void)
{
  enum weekdays
  {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
  };

  printf("%d %d %d %d %d\n", Monday, Tuesday, Wednesday,
         Thursday, Friday);
  return 0;
}
