#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
  char letter;

  printf("A Display directory listing\n");
  printf("B Display disk information\n");
  printf("C Change system date\n");
  printf("Q Quit\n");
  printf("Choice: ");

  do
  {
    letter = getchar();
    letter = toupper(letter);

    switch (letter)
    {
    case 'A':
      system("pwd");
      break;
    case 'B':
      system("du");
      break;
    case 'C':
      system("date");
      break;
    };
  } while (letter != 'Q');

  return 0;
}
