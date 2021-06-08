#include <stdio.h>
#include <string.h>

int main(void)
{
  char *a = "AAA";
  char *b = "BBB";

  printf("Comparing %s and %s with memcmp %d\n",
         a, b, memcmp(a, b, sizeof(a)));

  return 0;
}
