#include <stdio.h>

int main(void)
{
    int a = 123;
    int b = 456;
    int c = a + b;
    printf("%d", c);

    int x = 9;
    int y = 2;
    int z = x / y;
    printf("\nResult: %d", z);

    int t = 30;
    int o = 54;
    float f = (float)o / t;
    printf("\nresult: %f", f);

    int int1 = 10;
    int int2 = 45;
    if (int1 == int2)
    {
        printf("values equal");
    }
    else
    {
        printf("\nvalues not equal");
    }

    int rl = 75;
    if (rl > 50 && rl < 100)
    {
        printf("\ngreater then 50 less then 100");
    }
    else
    {
        printf("\nnot in the range 50..100");
    }

    int sw = 2;
    switch (sw)
    {
    case 3:
        printf("\nhaha..");
        break;
    case 2:
        printf("\nhaha..");
        break;
    case 1:
        printf("\nhaha..");
        break;
    default:
        printf("\nvalue not in range");
        break;
    }
}