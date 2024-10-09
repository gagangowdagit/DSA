#include <stdio.h>
#include <stdlib.h>
char stack[20];
int top = -1;
void push(char ch)
    {
        if(top >= 19)
        printf("Stack Overflow.\n");
        else
            stack[++top] = ch;
    }
int pop()
    {
        if(top == -1)
        printf("Stack Underflow.\n");
    else
        return stack[top--];
    }
void display()
    {
        printf("Entered characters are : \n");
        for(int i=top; i>=0;i--)
        printf("%c ", stack[i]);
    }

void main()
{ 
    int choice;
    char ch;
    printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
    do{
        printf("Enter your choice : ");
        scanf("%d", &choice);
        getchar();
        switch(choice){
        case 1 : printf("Enter the element that should be pushed onto the stack :");
        scanf("%c", &ch);
        push(ch);break;
        case 2 : printf("Elements popped from the stack : %c", pop());break;
        case 3 : display();break;
        case 4 : printf("Enter the valid choice");
        case 5 : exit(0);break;
        }
    }while(choice != 5);
}
