#include <stdio.h>

int main()
{
  int counter;

  printf("Even values\n");
  for (counter = 1; counter <= 100; counter++)
  {
    if (counter % 2) // Odd
      continue;

    printf("%d ", counter);
  }

  printf("\nOdd values\n");
  counter = 0;
  while (counter <= 100)
  {
    counter++;

    if (!(counter % 2)) // Even
      continue;

    printf("%d ", counter);
  }
  printf("\n");
  return 0;
}
