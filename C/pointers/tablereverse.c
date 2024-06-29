#include <stdio.h>
int main(){
    int a,i,mul;
    printf("Enter number :\n");
    scanf("%d",&a);
    for(i=10;i>=1;i--){
        mul=a*i;
        printf("%d\n",mul);
    }
    return 0;
}