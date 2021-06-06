#include <stdio.h>

int main(void)
{
  int a = 1, b = 2;

  int *i_pointer;

  // Assign an address
  i_pointer = &a;

  // Change the value pointed to by i_pointer to 5
  *i_pointer = 5;

  // Display the value
  printf("Value pointed to by i_pointer is %d the variable a is %d\n",
         *i_pointer, a);

  // Assign the value
  b = *i_pointer;

  printf("Value of b is %d\n", b);
  printf("Value of i_pointer %p\n", i_pointer);
  return 0;
}
