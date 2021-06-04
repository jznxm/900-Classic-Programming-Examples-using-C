#include <stdio.h>
#include <time.h>

/* with confusing output */
int main(void)
{
  time_t seconds;

  struct tm time_fields;

  time_fields.tm_mday = 1;
  time_fields.tm_mon = 0;
  time_fields.tm_year = 121;

  if (mktime(&time_fields) == -1)
    printf("Error converting fields\n");
  else
    printf("Julian date for July 4, 1994 is %d\n",
           time_fields.tm_yday);
  return 0;
}
