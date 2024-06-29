#include <stdio.h>
int main()
{
    int i, j, k, sum;
    int c[][3] = {0};
    int a[][2] = {1, 2, 3, 4, 5, 6, 7, 8};
    int b[][3] = {1, 2, 3, 4, 5, 6};
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0;
            for (k = 0; k < 2; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}