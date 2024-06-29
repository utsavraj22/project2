#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next;
};
void listtraversal(struct node *ptr){
    while(ptr!=NULL){
printf("Element is : %d\n",ptr->data);
ptr=ptr->next;
}
}
int main()
{
struct node *head;
struct node *second;
struct node *third;
struct node *fourth;
struct node *fifth;
struct node *sixth;
//allocate dynamic memory in heap.
head =(struct node *)malloc(sizeof(struct node));
second =(struct node *)malloc(sizeof(struct node));
third =(struct node *)malloc(sizeof(struct node));
fourth =(struct node *)malloc(sizeof(struct node));
fifth =(struct node *)malloc(sizeof(struct node));
sixth =(struct node *)malloc(sizeof(struct node));
fifth->data=65;
fifth->next=head;
//link first to second node
head->data=7;
head->next=sixth;
sixth->data=32;
sixth->next=second;
//linke second to third node.
second->data=11;
second->next=third;
//final node
third->data=18;
third->next=fourth;
fourth->data=66;
fourth->next=NULL;
listtraversal(fifth);
return 0;
}