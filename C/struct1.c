#include <stdio.h>
struct student{
    char name[10];
    int marks;
    char grade[1];
};
int main(){
struct student s[3];
printf("Enter the details");
for(int i=1;i<=3;i++){
scanf("%s%d%s",&s[i].name,&s[i].marks,&s[i].grade);
}
for(int i=1;i<=3;i++){
printf("%s %d %s\n",s[i].name,s[i].marks,s[i].grade);
}
    return 0;
}