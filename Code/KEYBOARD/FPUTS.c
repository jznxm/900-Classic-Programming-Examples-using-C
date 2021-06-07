#include <stdio.h>
#include <time.h>

int main(void)
{
  int count;

  time_t start_time, stop_time;

  time(&start_time);
  for (count = 0; count < 100001; count++)
    puts("Jamsa's 1001 C/C++ Tips");
  time(&stop_time);

  printf("\n\nTime required for puts %ld seconds\n",
         stop_time - start_time);
  printf("Press any key...\n");
  getchar();

  time(&start_time);
  for (count = 0; count < 100001; count++)
    fputs("Jamsa's 1001 C/C++ Tips\r\n", stdout);

  time(&stop_time);

  printf("\n\nTime required for cputs %d seconds\n",
         stop_time - start_time);
  return 0;
}
