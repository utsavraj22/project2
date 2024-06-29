#include <stdio.h>
int compare(int a,int b){
    if(a>=b){
        printf("a is greater");
    }
    else
        printf("b is greater");
    
}
int main(){
    int a,b;
    printf("Type number a & b:\n");
    scanf("%d %d",&a,&b);
    printf("%d",compare(a,b));
    return 0;
}