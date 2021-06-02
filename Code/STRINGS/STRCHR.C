#include <stdio.h>
#include <string.h>

int main(void)
{
  char title[64] = "1001 C/C++ Tips!";
  char *ptr;

  if (ptr = strchr(title, 'C'))
    printf("First occurrence of C is at offset %ld\n",
           ptr - title);
  else
    printf("Character not found\n");
  return 0;
}
