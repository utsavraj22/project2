#include <stdio.h>
int fibonacci(int n);
int main(){
    fibonacci(3);
    return 0;
}
int fibonacci(int n){
    if(n==0){
        return 0;
        }
        if(n==1){
            return 1;
        }

    int sum1=fibonacci(n-1);
    int sum2=fibonacci(n-2);
    int suma=sum1+sum2;
    printf("Fibonacci series is %d",suma);
    return suma;
}