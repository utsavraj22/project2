#include <stdio.h>
int main(){
    float price[3];
    printf("Enter three price;\n");
    scanf("%f %f %f",&price[0],&price[1],&price[2]);
    printf("%f %f %f",price[0]+0.18*price[0],price[1]+0.18*price[1],price[2]+0.18*price[2]);
    return 0;
}