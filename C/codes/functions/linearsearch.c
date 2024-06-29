#include <stdio.h>
int lenearsearch(int arr[], int size, int element)

{
    for(int i=0; i< size; i++)
    {
         if(arr[i]==element)
         {
            return i;
         }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    int element=9;
    int searchindex=lenearsearch(arr, size, element);
    printf("The element %d was found at index %d\n",element,searchindex);
    return 0;
}