#include <stdio.h>

int main(void)
{
  int counter = 1; // Initialize the control variable

  while (counter <= 100) // Test the control variable
  {
    printf("%d ", counter); // Execute the statements

    counter++; // Modify the control variable
  }
  printf("\n");
  return 0;
}
