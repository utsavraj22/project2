#include <stdio.h>
//program for calculating % of 5 subjects.
int main(){
    int math,english,chemistry,hindi,physics;//marks should be in out of 100
    int percentage;
    printf("Enter the number of Maths :\n");
    scanf("%d",&math);
    printf("Enter the number of English :\n");
    scanf("%d",&english);
    printf("Enter the number of Chemistry :\n");
    scanf("%d",&chemistry);
    printf("Enter the number of Hindi :\n");
    scanf("%d",&hindi);
    printf("Enter the number of Physics :\n");
    scanf("%d",&physics);
    percentage= (math+english+chemistry+hindi+physics)*100/500;
    printf("Your Total percentage is : %d ",percentage);
    return 0;
}