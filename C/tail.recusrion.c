#include <stdio.h>
 void print(int a){
    if(a<1){
        return ;
    }
    else{
        printf("%d",a);
        print(a/2);
    }
 }
char main(){
 print(10);
 printf("Utsav");
return 'a';
}