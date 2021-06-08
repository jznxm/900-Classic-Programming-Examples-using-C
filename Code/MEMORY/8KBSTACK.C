#include <stdio.h>

extern unsigned _stklen = 8096;

int main(void)
{
  printf("The current stack size %d bytes\n", _stklen);
  return 0;
}
