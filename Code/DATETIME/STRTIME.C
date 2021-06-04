#include <stdio.h>
#include <time.h>

int main(void)
{
  char time[9];

  _strtime(time);

  printf("The current time is %s\n", time);
  return 0;
}
