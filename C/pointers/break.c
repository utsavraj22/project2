#include <stdio.h>
int main(){
    int i,a;
    printf("Enter your number :\n");
    scanf("%d",&a);
    for(i=1;i<100;i++){
        if(a%2!=0)
        break;
        printf("%d\n",i);
    }
    return 0;
}