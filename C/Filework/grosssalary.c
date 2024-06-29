#include <stdio.h>
int main(){
    int basic,ta,da;
    printf("Enter your basic salary :\n");
    scanf("%d",&basic);
    ta=(10*basic)/100;
    da=(10*basic)/100;
    printf("Your gross salary is : %d",basic+ta+da);
    return 0;
}