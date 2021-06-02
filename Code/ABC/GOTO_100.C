#include <stdio.h>

int main()
{
  int count = 1;

label:
  printf("%d ", count++);

  if (count <= 100)
    goto label;
  printf("\n");
  return 0;
}
