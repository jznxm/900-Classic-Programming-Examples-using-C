#include <stdio.h>

int main(void)
{
  char string[256];

  int i;

  for (i = 0; i < 26; i++)
    string[i] = 'A' + i;

  string[i] = NULL;

  printf("The string contains %s\n", string);
  return 0;
}
