#include <stdio.h>

int main(void)
{
  const char *weekdays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                             "Thursday", "Friday", "Saturday"};

  int i;

  for (i = 0; i < 7; i++)
    printf("weekdays[%d] contains %s\n", i, weekdays[i]);
  return 0;
}
