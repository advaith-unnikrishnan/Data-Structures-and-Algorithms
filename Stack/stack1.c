#include<stdio.h>
#include<stdlib.h>
//defines the maximum szie of the array as 10
#define size 10 
//declares the array and top as global ,intialises top as -1
int a[size],top=-1;
//function to push an element into the stack
void push()
{
    //check if stack is full or not
    if(top==size-1)
        printf("STACK OVERFLOW\n");
    else
    {
        //increment top and accept the input from the user and store it to stack
        printf("Enter the element to be inserted\n");
        scanf("%d",&a[++top]);
    }
    
}
//function to pop an element from the stack
void pop()
{
    //checks whether the stack is emty or not
    if(top==-1)
        printf("STACK UNDERFLOW\n");
    else
    {
        //store the last element to item and decrement top
        int item=a[top--];
        printf("The popped element is %d\n",item);
    }
    
}
//function to display the current element in stack
void display()
{
    int i;
    printf("The current stack is :\n");
    if(top==-1)
        printf("STACK IS EMPTY\n");
    else if(top==size-1)
        {
            printf("STACK IS FULL\n");
            for(i=top;i>-1;i--)
                printf("%d \n",a[i]);
        }
    else
        for (i=top;i>-1;i--)
            printf("%d \n",a[i]);
        
}
void main()
{
    int ch;
    while(1)
    {
        //displays the menu and accept the choice from the user
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nEnter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
                    break;
            case 2:pop();
                    break;
            case 3:display();
                    break;
            case 4:printf("Exiting....\n");
                    exit(0);
                    break;
            default:printf("INVALID CHOICE\n");
        }

    }
}
