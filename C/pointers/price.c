#include <stdio.h>
float price(float r);
int main(){
    float r;
    printf("enter the price :\n");
    scanf("%f",&r);
    printf("Final price is %f",price(r));
    return 0;
}
float price(float r){
    return r +.18*r;
}