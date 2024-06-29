#include <stdio.h>
#include <math.h>
float square(int a);
int main(){
    int a;
    scanf("%d",&a);
    printf("Square is %f",square(a));
    return 0;
}
float square(int a){
    float b;
    b=pow(a,2);
    return b;
}