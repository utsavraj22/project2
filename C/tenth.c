#include <stdio.h>
int main(){
    int Maths,Physics,Chemistry,English,Hindi;
    float Total;
    printf("Enter Maths marks:");
    scanf("%d",&Maths);
    printf("Enter Physics marks:");
    scanf("%d",&Physics);
    printf("Enter Chemistry marks:");
    scanf("%d",&Chemistry);
    printf("Enter English marks:");
    scanf("%d",&English);
    printf("Enter Hindi marks:");
    scanf("%d",&Hindi);
    Total=Maths+Physics+Chemistry+English+Hindi;
    printf("Total marks:%f\n",Total);
    printf("Total Percentage: %f %%",Total*100/500);
    return 0;
}