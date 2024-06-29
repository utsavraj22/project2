#include <stdio.h>
int main(){
    int i,a,b;
    printf("enter your no :\n");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        b=a*i;
        printf("Table is %d * %d == %d :\n",a,i,b);
    }
    return 0;
}