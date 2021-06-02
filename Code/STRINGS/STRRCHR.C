#include <stdio.h>
#include <string.h>

char *strrchr(char *string, int letter)
{
  char *ptr = NULL;

  while (*string)
  {
    if (*string == letter)
      ptr = string;
    string++;
  }
  return (ptr);
}

int main(void)
{
  char title[64] = "1001 C/C++ Tips!";
  char *ptr;

  if (ptr = strrchr(title, 'C'))
    printf("Rightmost occurrence of C is at offset %ld\n",
           ptr - title);
  else
    printf("Character not found\n");
  return 0;
}
