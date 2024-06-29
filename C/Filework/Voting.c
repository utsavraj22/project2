#include <stdio.h>
int main(){
    int age;
    printf("Enter your age :\n");
    scanf("%d",&age);
    age>=18?printf("You are eligible for voting"):printf("You are not elgible");
    return 0;
}
