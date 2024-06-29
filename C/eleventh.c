#include <stdio.h>
int main(){
    float celsius;
    printf("Enter current temprature:");
    scanf("%f",&celsius);
    printf("Temprature in fahrenheit:%f F",(celsius*1.8)+32);

    return 0;
}