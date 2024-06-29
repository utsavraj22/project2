#include <stdio.h>
int main(){
    int a;
    printf("Enter your number :\n");
    scanf("%d",&a);
    printf("Value after left shift by 2 bits : %d",a>>2);
    return 0;
}