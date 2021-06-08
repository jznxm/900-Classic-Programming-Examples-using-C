#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
  const char *source = "AJSM'A S0110T pi!s";
  char target[64];

  memset(target, 0, sizeof(target));

  swab(source, target, strlen(source));

  printf("Source: %s Target %s\n", source, target);
  return 0;
}
