#include <stdio.h>
int sum();
int main(){
    int a,b,c,s;
    printf("Enter the value of a & b :\n");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    printf("%d",s);
    return 0;
}
int sum(int a,int b){
    int c;
    c=a+b;
    return c;

}