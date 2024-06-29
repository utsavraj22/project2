#include <stdio.h>
int main(){
    int num;
    printf("Enter the amount of numbers :");//enter the amount of numbers that you want to sum.
    scanf("%d",&num);
    switch(num){
        case 2: int a,b;
                printf("Enter the value of a :\n");
                scanf("%d",&a);
                printf("Enter the value of b :\n");
                scanf("%d",&b);
                printf("Sum of a & b is = %d",a+b);
                break;
        case 3: int c,d,e;
                printf("Enter the value of c :\n");
                scanf("%d",&c);
                printf("Enter the value of d :\n");
                scanf("%d",&d);
                printf("Enter the value of e :\n");
                scanf("%d",&e);
                printf("Sum of a & b is = %d",c+d+e);
                break;
    }

    return 0;
}