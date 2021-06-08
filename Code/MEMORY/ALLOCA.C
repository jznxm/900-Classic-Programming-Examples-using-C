#include <stdio.h>
#include <stdlib.h>

void some_function(size_t size)
{
  int i;

  char *pointer;

  char stack_fix[1];
  stack_fix[0] = '\0';

  if ((pointer = (char *)alloca(size)) == NULL)
    printf("Error allocating %lu bytes from the stack\n", size);
  else
  {
    for (i = 0; i < size; i++)
      pointer[i] = i;
    printf("Allocatd and used a buffer of %lu bytes\n", size);
  }
}

int main(void)
{
  some_function(1000);
  some_function(32000);
  some_function(65000);
  return 0;
}
