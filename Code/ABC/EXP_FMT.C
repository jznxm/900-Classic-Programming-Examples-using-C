#include <stdio.h>

int main()
{
  float value = 1.23456894545;

  printf("%-12.1e\n", value);
  printf("%-12.3e\n", value);
  printf("%-12.7e\n", value);
  printf("%-12.9e\n", value);

  return 0;
}
