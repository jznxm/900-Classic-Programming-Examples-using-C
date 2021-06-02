#include <stdio.h>

int main(void)
{
  int age;
  float salary;
  char string[] = "33 25000.00";

  sscanf(string, "%d %f\n", &age, &salary);

  printf("Age: %d Salary %f\n", age, salary);
  return 0;
}
