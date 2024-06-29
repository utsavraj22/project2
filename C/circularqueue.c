#include <stdio.h>
#include <stdlib.h>
struct circularqueue{
int size;
int front;
int rear;
int *arr;
};
int isempty(struct circularqueue *q){
    if(q->rear==q->front){
    return 1;
    }
    return 0;
}
int isfull(struct circularqueue *q){
    if((q->rear+1)%q->size==q->front){
    return 1;
    }
    return 0;
}
void enqueue(struct circularqueue *q,int element){
    if(isfull(q)){
    printf("This circular queue is full\n");
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->arr[q->rear]=element;
    }
}
int dequeue(struct circularqueue *q){
    int a=-1;
    if(isempty(q)){
    printf("cicular queue is underflow\n");
}
    else{
        q->front=(q->front+1)%q->size;
        a=q->arr[q->front];
    }
    return a;
}
int main(){
 struct circularqueue q;
 q.size=4;
 q.front=q.rear=0;
 q.arr=(int*)malloc(q.size*sizeof(int));
 //Enqueue few elements
 enqueue(&q,12);
 enqueue(&q,15);
 enqueue(&q,14);
 printf("Dequeueing element %d\n",dequeue(&q));
 printf("Dequeueing element %d\n",dequeue(&q));
 enqueue(&q,12);
 enqueue(&q,15);
return 0;
}