#include <stdio.h>
#include <ctype.h>

void no_change(const char *string)
{
  char *alias = (char *)string;

  while (*alias)
    *alias++ = toupper(*alias);
}

int main(void)
{
  char title[] = "Jamsa's 1001 C/C++ Tips";

  no_change(title);

  printf("%s\n", title);
  return 0;
}
