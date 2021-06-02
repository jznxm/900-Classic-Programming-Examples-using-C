#include <stdio.h>
#include <ctype.h>

char starting_address[1200];
char *string_uppercase1(const char *string)
{
  int i = 0;

  while (*string)
    starting_address[i++] = toupper(*string++);
  starting_address[i] = '\0';

  return starting_address;
}

int main(void)
{
  const char *title = "Jamsa's 1001 C/C++ Tips";
  const char *string;

  string = string_uppercase1(title);
  printf("%s\n", string);

  printf("%s\n", string_uppercase1("Arrays and Pointers"));
  return 0;
}
