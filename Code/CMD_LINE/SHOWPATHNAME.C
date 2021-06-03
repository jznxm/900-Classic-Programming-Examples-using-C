#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *entry;
  char *name;

  entry = getenv("PATH");
  name = getenv("LOGNAME");

  if (*entry && *name)
  {
    printf("PATH=%s\n", entry);
    printf("LOGNAME=%s\n", name);
  }
  else
  {
    printf("PATH is not defined\n");
    printf("LOGNAME is not defined\n");
  }
  return 0;
}
