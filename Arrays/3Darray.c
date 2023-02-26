// 3 dimensional array
//  declaration:
//  data_type array_name [table name] [ no. of row] [ no. of column] int L[m][n] [p];

#include <stdio.h>
int main(void)
{
    printf("three dimensional array!\n\n");
    int i, j, k, s[2][1][2], siz;
    siz = 2 * 1 * 2;
    printf("Enter %d elements: \n", siz);
    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 1; ++j)
        {
            for (k = 0; k < 2; ++k)
            {
                scanf("%d", &s[i][j][k]);
            }
        }
    }
    printf("The stored values are:\n\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("sample[%d][%d][%d] = %d\n", i, j, k, s[i][j][k]);
            }
        }
    }
}