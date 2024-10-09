#include<stdio.h>

int stack[100],n,i,ch,top=-1;
void pop();
void push();
void display();

void main()
   { 
       //top=-1;
      printf("enter size of array:\n");
       scanf("%d",&n);
    while(1)
    {
      printf("1.push\n2.pop\n3.display\n");
           scanf("%d", &ch);
       switch(ch)
       {
          case 1:push();
              break;
          case 2:pop();
              break;
          case 3:display();
               break;
          default:printf("ener the  valid input:\n");
        }  
     }        
   }       
            
void push()
   {
   int x;
      if(top==n-1)
      {
         printf("stack overflow\n");
       }  
       else
       {
           printf("enter the number to push\n");
         scanf("%d",&x);
          stack[++top]=x;
         }
   }                       
   
void pop()
  {
     if(top==-1)
      {
         printf("stack is under flow :\n");
      }
      else
          {
              printf("poped element is %d\n", stack[top]); top--;
          }
   }
   
void display()
    {
       if(top==-1)
        {
        printf("stack is empty:\n");
        }
       else
          {
            printf("elements are:\n");
        for (i=top;i>=0;i--)
           printf("%d\n",stack[i]);
          }
    }                   
            
            
            
              
                  
