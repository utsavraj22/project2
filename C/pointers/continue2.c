#include <stdio.h>
int main(){
    int i;
    printf("Enter your age :\n");
    scanf("%d",&i);
    while(i<30){
        i++;
        if((i<10)&&(i>1))
        continue;
        printf("%d\n",i); 
    }
}