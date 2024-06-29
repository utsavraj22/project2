#include <stdio.h>
#include <math.h>
int square(int n);
int main(){
    int n;
    scanf("%d",&n);
    int a = square(n);
    printf("%d",a);
    return 0;
}
int square(int n){
    return n*n;
}