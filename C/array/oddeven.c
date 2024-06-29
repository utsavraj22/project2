#include <stdio.h>
int main(){
    int marks[8],i;
    int even=0,odd=0;
    printf("Enter marks :\n");
    for(i=0;i<8;i++)
    scanf("%d",&marks[i]);
    for(i=0;i<8;i++){
        if(marks[i]%2==0)
        even++;
        else 
        odd++;
    }
    printf("Even no. are %d \nOdd no. are %d",even,odd);
    return 0;
}