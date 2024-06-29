#include <stdio.h>
int main(){
    int i;
    printf("Type your initial :\n");
    scanf("%d",&i);
    for(i=i;i<=20;i++){
        if(i==10)
        continue; 
        printf("%d\n",i);  
    }
    return 0;
}

