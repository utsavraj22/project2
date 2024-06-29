#include <stdio.h>
int main(){
    //Principle=p
    //Rate=r
    //Time=t
    float p,r,t;
    printf("Enter p,r&t");
    scanf("%f %f %f",&p,&r,&t);
    printf("Simple Interest is:%f",p*r*t/100);
    return 0;
}