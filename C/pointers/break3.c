#include <stdio.h>
int main(){
    int i;//program for keep taking the input from the user until user enters multiple of seven
    do{
        printf("enter number :\n");
        scanf("%d",&i);
        printf("Your number is %d\n",i);
        if(i%7==0){
        break;
        }
    }
    while(1);
    printf("thank you..");
    return 0;
}