#include <stdio.h>
int even_odd(int a){
    if(a%2===0){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
}
int main(){
    int a;
    printf("Enter number a:\n");
    scanf("%d",&a);
    printf("%d",even_odd(a));
    return 0;
}