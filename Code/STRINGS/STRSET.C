#include <stdio.h>
#include <string.h>

char *strset(char *string, int letter)
{
  char *original = string;

  while (*string)
    *string++ = letter;

  return (original);
}

int main(void)
{
  char name[] = "22222";

  printf("%s\n", strset(name, '1'));
  return 0;
}
