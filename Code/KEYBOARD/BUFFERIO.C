#include <stdio.h>

int main(void)
{
  int letter;

  do
  {
    letter = getchar();
    putchar(letter);
  } while (letter != '\n');
  return 0;
}
