#include <stdio.h>
#include <string.h>

int main(void)
{
  char book_title[] = "Jamsa's 1001 C/C++ Tips";

  printf("%s contains %ld characters\n",
         book_title, strlen(book_title));
  return 0;
}
