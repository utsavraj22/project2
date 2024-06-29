#include <stdio.h>
int main(){
    int fac=1,i,num;
    printf("Enter the number :\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fac=fac*i;
    }
    printf("Factorial of %d is %d.",num,fac);
    return 0;
}