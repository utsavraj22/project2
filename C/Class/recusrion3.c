#include <Stdio.h>
int fac(int n);
int main(){
    printf("Factorial is :%d",fac(6));
    return 0;
}
int fac(int n){
    if(n==1){
        return 1;
    }
    int fac1= fac(n-1);
    int fac2= fac(n-1)*n;
    return fac2;

}