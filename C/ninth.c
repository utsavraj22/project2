#include <stdio.h>
int main(){
    int basic,TA,DA,salary;
    printf("Enter the basic salary:");
    scanf("%d",&basic);
    TA=10*basic/100;
    DA=12*basic/100;
    salary=basic+TA+DA;
    printf("Your gross salary is:%d",salary);
    return 0;
}