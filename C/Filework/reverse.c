#include <stdio.h>
int main(){
    int n,remainder,reverse=0;
    printf("Enter the value of a:\n");
    scanf("%d",&n);
    while(n>0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    } 
    printf("%d",reverse);
    return 0;
}