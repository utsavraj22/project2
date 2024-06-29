#include <stdio.h>
main(){
    int i,n1=0,n2=1,n3;
    printf("Fibonacci series upto 100\n");
    printf("%d\n%d\n",n1,n2);
    for(i=0;i<20;i++){
        n3=n1+n2;
        if(n3<100)
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}