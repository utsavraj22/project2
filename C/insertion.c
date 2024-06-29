#include <stdio.h>
//traversing in array.
void traverse(int arr[],int size){
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
printf("\n");
}
int insertion(int arr[],int element,int capacity,int size,int index){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
     arr[i+1]=arr[i];
    }
    arr[index]=element;
return 1;
}
int main(){
    int arr[100]={2,56,34,45,23};
    int size=5,element=5,index=3;
    traverse(arr,size);
    insertion(arr,element,100,size,index);
    size+=1;
    traverse(arr,size);
    return 0;
}