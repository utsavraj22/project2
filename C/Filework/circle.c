#include <stdio.h>
//Program for finding area & circumference of circle.
int main(){
    float r;
    printf("Enter radius r :\n");
    scanf("%f",&r);
    printf("Area of circle is = %f\n",3.14*r*r);
    printf("Circumference of circle is: %f",2*3.14*r);
    return 0;
}