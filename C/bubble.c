#include <stdio.h>
int main(){
    int temp;
    int arr[]={23,34,54,11,45,22};
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    
    }
    for(int i=0;i<6;i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}