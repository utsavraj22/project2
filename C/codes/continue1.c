#include <stdio.h>
int main(){
    int i,num;
    printf("Type your initial:");
    scanf("%d",&i);
    for(i=i;i>100;i++){
        if(i==10)
        continue;
        printf("%d\n",i);  
    }
    return 0;
}