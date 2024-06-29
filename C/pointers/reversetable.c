#include <stdio.h>
int main(){
    int i,n,mul;
    printf("Table of number : ");
    scanf("%d",&n);
    for(i=10;i>=1;i--){
        mul=n*i;
        printf("%d * %d = %d\n",n,i,mul);
    }
    return 0;
}