#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter values of a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    if((a>=b)&&(a>=c))
    {
        printf("value of a is greater %d",a);
    }
    else
    {
        if((b>=c)&&(b>=a))
    {
        printf("value of b is greater %d",b);
    
    }
    printf("value of c is greater %d",c);
    }

    return 0;
}