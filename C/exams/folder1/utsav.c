#include <stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the number a & b:\n");
    scanf("%d %d",&a,&b);
    printf("Enter the operator:\n");
    scanf("%c",&op);
    switch(op){
      case '+': printf("result = %d",a+b);
      break;
      case '-': printf("result = %d",a-b);
      break;
      case '*': printf("result = %d",a*b);
      break;
      case '/': printf("result = %d",a/b);
      break;
      default : printf("Wrong Entry");
    }
    return 0;
}