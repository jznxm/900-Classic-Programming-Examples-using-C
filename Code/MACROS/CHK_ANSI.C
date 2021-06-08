#include <stdio.h>

int main()
{
#ifdef __STDC__
  printf("ANSI C compliance\n");
#else
  printf("Not in ANSI C mode\n");
#endif
  return 0;
}
