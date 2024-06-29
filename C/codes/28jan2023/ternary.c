#include <stdio.h>
int main(){
    //for finding greatest between three numbers
    int a,b,c;
    printf("Type your numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    a>b&&a>c ? printf("A is greater"):printf("B is greater");


    return 0;
}