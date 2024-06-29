#include <stdio.h>
int main()
{
    int arr[100], i, n, key;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter your elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key\n");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (key==arr[i])
        {
            printf("Key found %d\n", key);
            break;
        }
        else
        {
            printf("Key not found\n");
        }
    }
return 0;
}
