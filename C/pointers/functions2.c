#include <stdio.h>
void print(int count);
int main(){
    int count;
    printf("Enter the value of count :\n");
    scanf("%d",&count);
    print(count);
    return 0;
}
//recursion function
void print(int count){
    if(count==0){
        return;
    }
    printf("Hello world :\n");
    print(count-1); 
} 