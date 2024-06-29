#include <stdio.h>
int main(){
    int i=1,sum=0,n;
    printf("Enter your number :");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i; 
        i++;
    }
    printf("%d\n",sum);
    i=n;
    while(1<=i){
        printf("%d\n",i);
        i--;
    }
    return 0;
}