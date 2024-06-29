#include <stdio.h>
void swap(int *a,int *b){
    int t;
     t=*a;
    *a=*b;
    *b=t;
    printf("%d %d\t",*a,*b);
    printf("\n");
}
int main(){
    int x,y;
    printf("enter no x & y:\n");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}