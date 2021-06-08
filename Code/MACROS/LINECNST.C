#include <stdio.h>

int main()
{
  printf("Successfully reached line %d\n", __LINE__);

  // Other statements here

  printf("Successfully reached line %d\n", __LINE__);
  return 0;
}
