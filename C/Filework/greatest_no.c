#include <stdio.h>
int main(){
    int n1,n2,n3;
    //n1=number 1
    //n2=number 2
    //n3=number 3
    printf("Enter the value of n1,n2 & n3 :\n");
    scanf("%d \n%d\n %d",&n1,&n2,&n3);
    if(n1>n2&&n1>n3)
    printf("n1 is greater");
    if(n2>n1&&n2>n3)
    printf("n2 is greater");
    else
    printf("n3 is greater");
    return 0;
}