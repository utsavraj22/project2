#include <stdio.h>
int main(){
    int a,b;//a= 1st number,b=2nd number.
    printf("Enter the value of a & b :\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    return 0;
}