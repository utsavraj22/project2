#include <stdio.h>
int main(){
    int i,j,m;
    printf("Enter the size for array:\n");
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i++){
        scanf("%d",a[i]);
    }
    for(i=0;i<m;i++){
        printf("%d",a[i]);
    }
    return 0;
}