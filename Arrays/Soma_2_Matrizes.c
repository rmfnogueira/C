// sum of two matrixs
#include <stdio.h>
int main()
{
    int mat[20][20];
    int i, j, r, c;
    int s;
    printf("Enter number of Rows :");
    scanf("%d", &r);
    printf("Enter number of Cols :");
    scanf("%d", &c);
    printf("\nEnter matrix elements :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the number of inputs [%d,%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < r; i++)
    {
        s = 0;
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mat[i][j]);
            s += mat[i][j];
        }
        printf("\tSUM : %d", s);
        printf("\n");
    }
}