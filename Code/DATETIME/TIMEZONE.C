#include <stdio.h>
#include <time.h>

int main(void)
{
  tzset();
  printf("Difference between local and GMT is %d hours\n",
         timezone / 3600);
  return 0;
}
