#include <stdio.h>
int main(){
    int sum=0,i;
    printf("Natural number upto 10 :\n");
    for(i=1;i<=10;i++){
       sum=sum+i;
       printf("%d\n",i);
    }
    printf("Sum is %d\n",sum);
    return 0;
}