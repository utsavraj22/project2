#include <stdio.h>
    struct student{
        int roll;
        char name[20];
        float marks;
    };
void main(){
    struct student s1={1,"utsav",98.7};
    struct student s2;
    scanf("%d %s %f",&s2.roll,s2.name,&s2.marks);
    printf("%d %s %f",s2.roll,s2.name,s2.marks);
} 