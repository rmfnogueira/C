// 3D array to print members automatically
#include <stdio.h>
int main()
{
    int m[2][3][2] =
        {
            {{1, 2}, {3, 5}, {6, 5}},
            {{8, 3}, {8, 7}, {9, 11}}};
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
                printf("Value at m[%d][%d][%d] = %d\n", i, j, k, m[i][j][k]);
        }
    }
    return 0;
}