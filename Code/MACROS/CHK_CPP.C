#include <stdio.h>

int main()
{
#ifdef __cplusplus
  printf("Using C++\n");
#else
  printf("Using C\n");
#endif
  return 0;
}
