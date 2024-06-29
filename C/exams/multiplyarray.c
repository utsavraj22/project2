#include <stdio.h>
int main()
{
    int arr[2][2] = {0, 1, 2, 3};
    int arr1[2][3] = {4, 5, 6, 7, 8, 9};
    int mularr[2][3] = {0};
    int i, j, k, sum;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum = sum + arr[i][k] * arr1[k][j];
                printf("%d\n",sum);
            }
                mularr[i][j] = sum;
        }
    }
for (i = 0; i < 2; i++)
{
    for (j = 0; j < 3; j++)
    {
        printf("%d\t", mularr[i][j]);
    }
}
return 0;
}