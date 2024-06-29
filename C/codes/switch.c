#include <stdio.h>
int main(){
    int a=0,b=1,sum,i;
    printf("%d\n%d\n",a,b);
    for(i=0;i<=7;i++){
        sum=a+b;
        printf("%d\n",sum);
        a=b;
        b=sum;
    }
    return 0;
}