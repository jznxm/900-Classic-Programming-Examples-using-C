#include <stdio.h>
#include <ctype.h> // Contains the tolower prototype

int main(void)
{
  int letter;

  for (letter = getchar(); !feof(stdin); letter = getchar())
    putchar(tolower(letter));
  return 0;
}
