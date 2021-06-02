#include <stdio.h>

int strr_index(const char *string, int letter)
{
  const char *original = string;
  const char *ptr = NULL;

  while (*string)
  {
    if (*string == letter)
      ptr = string;

    string++;
  }

  return (ptr ? ptr - original : string - original);
}

int main(void)
{
  printf("Location of C is %d\n", strr_index("1001 C/C++", 'C'));

  printf("Location of x is %d\n", strr_index("1001 C/C++", 'x'));
  return 0;
}
