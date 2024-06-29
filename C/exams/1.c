#include <stdio.h>
int swap(int a,int b){//using variable
a=a+b;
b=a-b;
a=a-b;
printf("%d %d",a,b);
return 0;
}

int main(){
    int a,b;
    printf("Enter numbers a & b:\n");
    scanf("%d %d",&a,&b);
    swap(a,b);
    return 0;
}