#include <stdio.h>

int main()
{
  printf("File %s: Successfully reached line %d\n",
         __FILE__, __LINE__);

  // Other statements here
#line 1 "FILENAME.C"

  printf("File %s: Successfully reached line %d\n",
         __FILE__, __LINE__);
  return 0;
}
