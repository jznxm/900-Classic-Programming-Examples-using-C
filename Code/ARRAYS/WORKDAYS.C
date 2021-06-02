#include <stdio.h>

int main(void)
{
  const char *workdays[] = {"Monday", "Tuesday", "Wednesday",
                            "Thursday", "Friday", ""};
  const char **work_day;

  work_day = workdays;

  while (*work_day)
    printf("%s\n", *work_day++);
  return 0;
}
