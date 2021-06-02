#include <stdio.h>

void show_string(const char *string)
{
  while (*string)
    putchar(*string++);
}

int main(void)
{
  show_string("Jamsa's 1001 C/C++ Tips\n");
  return 0;
}
