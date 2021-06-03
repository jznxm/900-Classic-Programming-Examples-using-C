#include <stdio.h>
#include <stdlib.h>

void first(void)
{
  printf("First function registered\n");
}

void second(void)
{
  printf("Second function registered\n");
}

/* stack used */
int main(void)
{
  atexit(first);
  atexit(second);
  return 0;
}
