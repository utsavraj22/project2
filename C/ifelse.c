#include <stdio.h>
int main(){
    //find the greatest number between three numbers.
    int a,b,c;
    printf("Input your number a,b,c :");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    {printf("a is greater");
    }
     else if((b>a)&&(b>c))
    { printf("b is greater");
    }
    else
    {printf("c is greater");
    }
    return 0;
}