#include <stdio.h>
int main(){
    int a,b,c;
    //swapping three numbers.
    printf("Enter three no. a,b & c :\n");
    scanf("%d %d %d",&a,&b,&c);
    a=a+b;
    b=a-b;
    a=a-b;
    b=b+c;
    c=b-c;
    b=b-c;
    printf("Numbers after swapping are :\n%d\n%d\n%d",a,b,c);
    return 0;
}