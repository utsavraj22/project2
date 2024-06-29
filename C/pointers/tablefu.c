#include <stdio.h>
int mul(int a){
    int b;
    int c;
    for(b=1;b<11;b++){
        c=b*a;
        printf("%d\n",c);
    }
    return c;
}
int main(){
    int x;
    printf("enter the no. ");
    scanf("%d",&x); 
    mul(x);
    return 0;
}