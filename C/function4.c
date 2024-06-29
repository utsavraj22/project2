#include <stdio.h>
void swap(int a,int b);
//for swap the numbers
void swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
}
   //printf("Final number after swapping:%d %d\n",a,b);

int main();{
    int a,b;
    printf("Enter the number:\n");
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("Final number after swapping:%d %d\n",a,b);
    return 0;
}