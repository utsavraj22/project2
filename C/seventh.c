#include <stdio.h>
#include <conio.h>
void main(){
    int x,y,z;
    float a,b,c;
    printf("Enter the values of x, y & z:\n");
    scanf("%d %d %d",&x,&y,&z);
    a=(x+y+z)/(x-y-z);
    b=(x+y+z)/3;
    c=(x+y)*(x-y)*(y-z);
    printf("The value of a, b & c :\n %f \n %f \n %f",a,b,c);

    getch();
}