#include <stdio.h>

int main()
{
  printf("Variables of type int use %ld bytes\n", sizeof(short));
  printf("Variables of type int use %ld bytes\n", sizeof(int));
  printf("Variables of type float use %ld bytes\n", sizeof(float));
  printf("Variables of type double use %ld bytes\n", sizeof(double));
  printf("Variables of type double use %ld bytes\n", sizeof(long double));
  printf("Variables of type long use %ld bytes\n", sizeof(long));
  printf("Variables of type long use %ld bytes\n", sizeof(long long));
  return 0;
}
