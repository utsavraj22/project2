#include <stdio.h>
int main(){
    //Print prime number upto 100 numbers
int n,count=0;
printf("Enter Your Number : ");
scanf("%d",&n);
for(int i=2;i<n/2;i++)
{
  if(n%i==0)
  count++;
}
if(count==0){
    printf("Number is prime.");
}else{
    printf("Number is not prime");
}
    return 0;
}