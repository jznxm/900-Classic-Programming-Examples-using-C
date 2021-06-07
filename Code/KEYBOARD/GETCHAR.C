#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int letter;

  printf("Type in a string of characters and press Enter\n");

  do
  {
    letter = getchar();
    letter = toupper(letter);
    putchar(letter);
  } while (letter != '\r');
  return 0;
}
