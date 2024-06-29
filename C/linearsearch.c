#include <stdio.h>
int search(int arr[],int key){
    for(int i=0;i<=10;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[11],key,i,index;
    printf("Enter the elements for array :\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter your key to find:\n");
    scanf("%d",&key);
    index=search(arr,key);
    
    if(index==-1){
        printf("Key not found");
    }
    else{
        printf("Key is found at index %d ",index);
    }
    return 0;
}