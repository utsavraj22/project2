#include <stdio.h>
int main(){
    int x;
    printf("enter your value");
    scanf("%d",&x);
    x>100 ? printf("taxes excluded"):printf("included all the taxes");
    return 0;
}