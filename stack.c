#include <stdio.h>
#define MAX 5
int stack[MAX],top=-1;
void  PUSH()
{
 int value;
 if(top==MAX-1)
 printf("Stack is overflow");
 printf("Enter an element");
 scanf("%d",&value);
 stack[++top]=value;
};
void POP()
{
    if(top==-1)
    {
        printf("Stack is underflow");
    }
    else
    {
        printf("%d deleted from the stack,stack[top]");
        top--;
    }
};
void PEEK()
{
       if(top==-1)
       {
              printf("Stack is empty");
       }
       else
       {
              printf("The top element is %d",stack[top]);
       }
}
void DISPLAY()
{
        int i;
        if(top==-1)
        {
              printf("Stack is empty");
        }
        else
        {
              printf("The elements of the stack are\n")
              for(i=top;i>=0;i--)
              {
                     printf("%d\n",stack[i]);
              }
        }
}
int main()
{
  int choice;
  while(1)
  {
  printf("The Stack Operations are\n");
  printf("1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n");
  printf("Enter your choice\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:PUSH()
           break;
    case 2:POP()
           break;
    case 3:PEEK()
           break;
    case 4:DISPLAY()
           break;
    case 5:printf("Invalid choice");
           break;
    exit()
  }
   return 0;
}
}