#include <stdio.h>
int main(){
    int i,age;
    printf("Enter age:\n");
    scanf("%d",&age);
    for(i=0;i<=3;i++){
        if(age<18){
            continue;
            printf("You are not eligible for vote\n");
            printf("Chhoti bachhi ho kya.\n");
        }
        printf("Your are eligible for vote\n");
    }
//printf("Your are eligible for vote baby");
    return 0;
}