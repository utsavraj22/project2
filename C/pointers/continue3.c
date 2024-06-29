#include <stdio.h>
int main(){
    //factorial of a number n
    int i,n,fact=1;
    printf("Enter number :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
        printf("Factorial is %d\n",fact);

    return 0;
}