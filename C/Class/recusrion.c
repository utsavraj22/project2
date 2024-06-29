#include <stdio.h>
void hellowd(int count);
int main(){
    int n;
    printf("Enter the number of time you want to print\n");
    scanf("%d",&n);
    hellowd(n);
    return 0;
}
void hellowd(int count){
    if(count == 0){
        return;
    }
    printf("Hello world\n");
    hellowd(count-1);
}