#include <stdio.h>

int main(void)
{
  char buffer[256];

  buffer[0] = 253; /* Number of characters that can be read*/

  printf("Type in a string and press Enter\n");
  fgets(buffer, 256, stdin);

  printf("\n\nThe number of characters read was %d\n",
         buffer[1]);

  printf("The string read: %s\n", &buffer[2]);
  return 0;
}