#include <stdio.h>
int main(){
    int h,b,area;
    //h=height,b=base
    //Finding area of right triangle
    printf("Enter the height");
    scanf("%d",&h);
    printf("Enter the base");
    scanf("%d",&b);
    area= b*h/2;
    printf("Area of triangle is:%d",area);


    return 0;
}