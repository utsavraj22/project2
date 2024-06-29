#include <stdio.h>
int main(){
    //find greatest between two numbers.
    //0=false
    //1=true
    int a,b,c,d;
    printf("Enter your no.a & b:");
    scanf("%d %d",&a,&b);
    c=a>b;
    printf("%d is greater %d\n",a,c);
    d=a<b;
    printf("%d is greater %d\n",b,d);
    return 0;
}