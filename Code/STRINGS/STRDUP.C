#include <stdio.h>
#include <string.h>

int main(void)
{
  char *title;

  if ((title = strdup("Jamsa's 1001 C/C++ Tips")))
    printf("Title: %s\n", title);
  else
    printf("Error duplicating string");
  return 0;
}
