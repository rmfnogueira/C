// fill matrix
#include <stdio.h>
int main()
{
    int a[3][4], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEntered 2-D array is: \n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}