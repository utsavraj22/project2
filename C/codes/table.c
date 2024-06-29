#include "stdio.h"
int main(){
    int a,b,i,sum,mul;
    printf("The mulitplication table of:");
    scanf("%d %d",&a,&b);
    for(i=1;i<=10;i++){
        sum=a*i;
        mul=b*i;
        printf("%d * %d = %d\n                       %d * %d = %d\n",a,i,sum,b,i,mul);
    }
   /* for(i=1;i<=10;i++)
       {
         mul=b*i;
        printf("%d * %d = %d\n",b,i,mul);
       }*/
    return 0;
}