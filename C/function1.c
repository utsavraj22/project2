#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int a,b,c;
    printf("Enter number a & b:\n");
    scanf("%d %d",&a,&b);
    c=sum(a,b);
    printf("Sum is %d",c);
}