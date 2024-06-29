#include <stdio.h>
//coversion from celsius to fahrenheit
float conversion(int a){
    float result=a*1.8+32;
    return result;
}
int main(){
    int a;
    printf("Enter the temperature in celsius:\n");
    scanf("%d",&a);
    printf("Temperature in fahrenheit is %f",conversion(a));
    return 0;
}