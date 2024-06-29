#include <stdio.h>
#include <conio.h>
int main(){
    float p,r=11,i=1,interest;
    /*p=principle
    r=rate
    i=time in years*/
    printf("Enter the amount :");
    scanf("%f",&p);
    while(i<4){
        i++;
        interest=p*(1+r/100);
        printf("%f\n",interest);
        p=interest;

    }
    return 0;
}