#include<stdio.h>
#define MAX=5
void main()
{
    int i,a[5],a[TOP]=-1,val;
    printf("Enter the elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    void push(val)
    {
        printf("Enter the element to be inserted\n");
        scanf("%d",&val);
        a[TOP]=val;
        TOP++;
        if(TOP==MAX)
        {
            TOP=TOP-1;
        }
    }
    int pop()
    {
        val=a[TOP];
        printf("The value of variable is %d\n",val);
        TOP--;
    }
    void display()
    {
    for(i=0;i<5;i++)
    {
    printf("Stack Elements are %d\n",a[TOP]);
    }
    }
}    