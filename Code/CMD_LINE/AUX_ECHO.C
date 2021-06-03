#include <stdio.h>
#include <string.h>

int main(void)
{
  char line[255]; // Line of text read

  while (fgets(line, sizeof(line), stdin))
  {
    fputs(line, stdout);
    strcat(line, "\r");
  }
  return 0;
}
