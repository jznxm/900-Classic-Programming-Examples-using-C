#include <stdio.h>

int main()
{
  int counter;

  for (counter = -100; counter <= 100; counter += 5)
    printf("%d ", counter);

  printf("\nStarting second loop\n");

  for (counter = 100; counter >= -100; counter -= 25)
    printf("%d ", counter);
  printf("\n");
  return 0;
}
