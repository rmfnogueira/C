#include <stdio.h>

int main()
{
    char c;
    int x;
    double d;

    printf("introduza um caracter:\n");
    scanf("%s", &c);
    printf("introduza um inteiro: \n");
    scanf("%d", &x);
    printf("introduza um real: \n");
    scanf("%lf", &d);
    printf("\nvalores introduzidos:\n %c\n%d\n%lf\n", c, x, d);
}