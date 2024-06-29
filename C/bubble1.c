#include <stdio.h>
#define size 5
int main(){
    int arr[size]={3,5,2,6,4};
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
           if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
        }
    }
    printf("Array after sorting\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}