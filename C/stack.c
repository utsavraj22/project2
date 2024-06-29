#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
    return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
    return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *ptr,int value){
    if(isFull(ptr)){
        printf("Stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow\n");
    }
    else{
       int value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int main(){
struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
sp->size=5;
sp->top=-1;
sp->arr=(int *)malloc(sp->size*sizeof(int));
printf("%d\n",isEmpty(sp));
printf("%d\n",isFull(sp));
push(sp,23);
push(sp,34);
push(sp,45);
push(sp,76);
push(sp,20);
printf("Element %d is popped out form stack\n",pop(sp));
printf("Element %d is popped out form stack\n",pop(sp));
printf("Element %d is popped out form stack\n",pop(sp));
printf("%d\n",isEmpty(sp));
printf("%d\n",isFull(sp));
return 0;
}