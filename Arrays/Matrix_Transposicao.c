// matrix transpose
#include <stdio.h>
int main()
{
    int T[5][5], i, j, a, b;
    printf(" No.of rows?");
    scanf("%d", &a);
    printf("No.of columns?");
    scanf("%d", &b);
    printf("\nEnter the elements in matrix:\n");
    for (i = 0; i < b; ++i)
        for (j = 0; j < a; ++j)
            scanf("%d", &T[i][j]);
    printf("\nTranspose matrix is given as:\n");
    for (i = 0; i < b; ++i)
    {
        for (j = 0; j < a; ++j)
            printf("%d ", T[j][i]);
        printf("\n");
    }
    return 0;
}