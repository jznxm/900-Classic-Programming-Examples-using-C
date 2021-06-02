#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  if (system("DIR"))
    printf("Error invoking DIR\n");
  return 0;
}
