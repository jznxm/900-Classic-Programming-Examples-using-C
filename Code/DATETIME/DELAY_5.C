#include <stdio.h>
#include <time.h>

int main(void)
{
  time_t current_time;
  time_t start_time;

  printf("About to delay 10 seconds\n");

  time(&start_time); // Get starting time in seconds

  do
  {
    time(&current_time);
  } while ((current_time - start_time) < 10);

  printf("Done\n");
  return 0;
}
