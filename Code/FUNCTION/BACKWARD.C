#include <stdio.h>

void display_backward(const char *string)
{
  if (*string)
  {
    display_backward(string + 1);
    putchar(*string);
  }
}

int main(void)
{
  display_backward("ABCDE");
  printf("\n");
  return 0;
}
