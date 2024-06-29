#include <stdio.h>
int main(){
    int a,b,*p,*q;
    printf("Enter number a & b :\n");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    printf("Sum is %d",*p+*q);
    return 0;
}