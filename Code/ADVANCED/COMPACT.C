#include <stdio.h>

int main(void)
{
        int a, b, c, d;
        scanf("%d", &a);

        switch (a)
        {
        case 1:
                a = 5;
                b = 6;
                c = 7;
                d = 8;
                break;
        case 2:
                b = 6;
                c = 7;
                d = 8;
                break;
        };

        printf("%d %d %d %d\n", a, b, c, d);
        return 0;
}
