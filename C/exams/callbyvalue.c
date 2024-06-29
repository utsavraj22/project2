#include <stdio.h>
int _pointer(int *n);

int main(){
int number=4;
_pointer(&number);
printf("%d\n",number);
return 0;
}

int _pointer(int *n){
  *n=*n+1;
  printf("%d\n",*n); 
  return 0;
}