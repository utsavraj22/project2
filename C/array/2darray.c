#include <stdio.h>
int main()
{
    float marks[2][2], marks2[2][2], sumarr[2][2];
    int i, j;
    printf("Enter the elements of 2d array:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            scanf("%f", &marks[i][j]);
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            scanf("%f", &marks2[i][j]);
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sumarr[i][j] = marks[i][j] + marks2[i][j];
        printf("%f\n", sumarr[i][j]);
        }
    }
    return 0;
}