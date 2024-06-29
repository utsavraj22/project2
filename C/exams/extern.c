#include <stdio.h>
int count;
extern void write();
int main(){
    count = 5;
    write();
    return 0;
}