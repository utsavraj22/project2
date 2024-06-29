#include <stdio.h>
int areasquare(int a);
float areacircle(float b);
int arearectangle(int c,int d);
int main(){
    int a=2,b=3,c=4,d=5; 
    printf("%d\n",areasquare(a));
    printf("%f\n",areacircle(b));
    printf("%d",arearectangle(c,d));
    return 0;
}
int areasquare(int a){
    return a*a;
}
float areacircle(float b){
    return 3.14*b*b;
}
int arearectangle(int c,int d){
    return c*d;
}