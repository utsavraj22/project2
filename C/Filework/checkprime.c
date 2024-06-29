#include <stdio.h>
int main(){
    int a,i,count;
    printf("Enter the number :\n");
    scanf("%d",&a);
    for(i=2;i<a/2;i++){
        if(a%i==0)
        count++;
    }
        if(count==0)
        printf("This is prime number.\n");
        else
        printf("This is not a prime number.\n");
    return 0;
}

