#include <stdio.h>
void main(){
    int rollno[4+2],i;
    printf("Enter the elements of array:");
    for(i=0;i<6;i++)
        scanf("%d\n",&rollno[i]);
    for(i=0;i<6;i++)
        printf("Element on index %d is %d\n",i,rollno[i]);
    for(i=5;i>=0;i--)
        printf("%d\n",rollno[i]);
}