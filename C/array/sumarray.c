#include <stdio.h>
#include <conio.h>
int main(){
    int arr1[5],arr2[5];
    int sumarr[5],i;
    printf("Enter the first array for elements:\n");
    for(i=0;i<5;i++)
    scanf("%d",&arr1[i]);
    printf("Enter the second array for elements:\n");
    for(i=0;i<5;i++)
    scanf("%d",&arr2[i]);
    for(i=0;i<5;i++){
        sumarr[i]=arr1[i]+arr2[i];
        printf("Sum of array on index %d is %d\n",i,sumarr[i]);
    }
    return 0;
}