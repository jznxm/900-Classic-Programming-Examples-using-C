#include <stdio.h>
#include <ctype.h>

void no_change(char *string)
{
  while (*string)
    *string++ = toupper(*string);
}

int main(void)
{
  char title[] = "Jamsa's 1001 C/C++ Tips";

  no_change(title);

  printf("%s\n", title);
  return 0;
}
