#include <stdio.h>
// program for adding two matrices entered by user.
int main()
{
    int x, y, sum[3][3] = {0};
    int mat1[3][3], mat2[3][3];
    // for reading values of mat1.
    printf("Enter the values for mat1.\n");
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
            scanf("%d", &mat1[x][y]);
    }
    // for reading values of mat2.
    printf("Enter the values for mat2.\n");
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
            scanf("%d", &mat2[x][y]);
    }
    // for print mat1.
    printf("your mat1 is.\n");
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
            printf("%d\t", mat1[x][y]);
        printf("\n");
    }
    // for print  mat2.
    printf("your mat2 is.\n");
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
            printf("%d\t", mat2[x][y]);
        printf("\n");
    }
    // for adding two matrices.
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
            sum[x][y] = mat1[x][y] + mat2[x][y];
    }
    // for print matrices.
    printf("sum of mat1 & mat2 is:\n");
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("%d\t", sum[x][y]);
        }
        printf("\n");
    }
    return 0;
}