#include <stdio.h>
#include <time.h>

int main(void)
{
  int count;

  time_t start_time, stop_time;

  time(&start_time);
  for (count = 0; count < 100001; count++)
    printf("Jamsa's 1001 C/C++ Tips\n");
  time(&stop_time);

  printf("\n\nTime required for printf %ld seconds\n",
         stop_time - start_time);
  printf("Press any key...\n");
  getch();

  time(&start_time);
  for (count = 0; count < 100001; count++)
    puts("Jamsa's 1001 C/C++ Tips");

  time(&stop_time);

  printf("\n\nTime required for puts %ld seconds\n",
         stop_time - start_time);
  return 0;
}
