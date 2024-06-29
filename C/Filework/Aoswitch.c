#include <stdio.h>
int main(){
    float a,b;
    int choice;
    printf("Enter your two numbers a & b :\n");
    scanf("%f %f",&a,&b);
    printf("Enter choice(1-4)");//1-Addition,2-Subtraction,3-Multiplication,4-Division
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("Numbers after addition :%d",a+b);
        break;
        case 2:printf("Numbers after subtraction :%f",a-b);
        break;
        case 3:printf("Numbers after division :%f",a/b);
        break;
        case 4:printf("Numbers after multiplication :%f",a*b);
        break;
        default :printf("Invalid Entry");
    }
    return 0;
}