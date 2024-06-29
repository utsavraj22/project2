#include <stdio.h>
#include <string.h>
struct football{
    int rollno;
    char a[100];
    float numbers;
};
int main(){
    struct football bd={1,"utsav",94.6};
    struct football *ptr=&bd;
    printf("%d %s %f",ptr->rollno,ptr->a,ptr->numbers);
    
    return 0;
}