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
  getchar();

  time(&start_time);
  for (count = 0; count < 100001; count++)
    printf("Jamsa's 1001 C/C++ Tips\r\n");

  time(&stop_time);

  printf("\n\nTime required for cprintf %ld seconds\n",
         stop_time - start_time);
  return 0;
}
