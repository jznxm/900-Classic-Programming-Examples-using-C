#include <stdio.h>

int main ()
 {
   int value = 0xFF;

   printf("The inverse of %X is %X\n", value, ~value);

   return 0;
 }
