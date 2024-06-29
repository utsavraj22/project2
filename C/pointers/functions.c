#include <stdio.h>
void print();//function prototype
void print1();//function prototype
int main(){
    char a;
    printf("Enter i for indian & F for french :\n");
    scanf("%c",&a);
    if(a=='i')
    print();
    else{
        print1();
    }
    return 0;
}
void print(){
    printf("Namaste!\n");//function defination
}
void print1(){
    printf("Bonjour:)");
}