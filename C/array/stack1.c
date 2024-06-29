#include<stdio.h>
#define stackCapacity 5

int stack[stackCapacity], top=-1;
void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void traverse(void);
void atTop(void);

//Main function of the program
void main(void)
{
    int choice, stackItem;
    //Always true While loop for continue iteration
    while(1){
        //Instructions to the user
        printf("Stack Operation n");
        printf("Enter `1` for  Push Operation n");
        printf("Enter `2` for  Pop Operation n");
        printf("Enter `3` for  atTop Operation n");
        printf("Enter `4` for  Traverse Operation n");
        printf("Enter `5` for  Quit Operation n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        //Switch Case to do the user specified task
        switch(choice){
            case 1:
                    printf("Enter a integer value : ");
                    scanf("%d",&stackItem);
                    push(stackItem);
                    break;
            case 2:
                    stackItem = pop();
                    if(stackItem == 0){
                        printf("Your stack is underflow");
                    }else{
                        printf("Last popped item : %dn", stackItem);
                    }
                    break;
            case 3:
                    atTop();
                    break;
            case 4:
                    traverse();
                    break;
            case 5:
                    return;
                    break;
            default: printf("Please enter correct choice : ");
        }
    }
}