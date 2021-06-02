#include <stdio.h>

int main(void)
 {
    int value = 0;

    while (value <= 100)
    {
      printf("%d\n", value);
      value++;
    }

    int sum = 0;
    for(int i = 0; i <= 100; i++)     
    {
      sum += i;
    }
    printf("0到100的和是：%d.\n", sum);

    return 0;
 }

