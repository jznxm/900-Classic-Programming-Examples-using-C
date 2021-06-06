#include <stdio.h>
#include <string.h>

int main(void)
{
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

  int i = 13;
  while (i++ < 25)
    alphabet[i] -= 32;

  printf("%s\n", alphabet);
  return 0;
}
