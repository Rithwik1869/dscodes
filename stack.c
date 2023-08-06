#include<stdio.h>
#define n 10
int stack[n];
int top=-1;
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if(top==n-1)
        return 1;
    else
        return 0;
}
void push()
{
    int x;
    scanf("%d",&x);
    if(top!=n-1)
    {
        top=top+1;
        stack[top]=x;
    }
    else
        printf("the stack is full-overflow condition\n");
}
void pop()
{
    int a;
    if(top==-1)
        printf("the stack is empty-underflow condition\n");
    else
    {
        a=stack[top];
        top--;
    }
}
void peek()
{
    printf("%d\n",stack[top]);
}
void count()
{
    printf("%d\n",top+1);
}
void display()
{
    int i;
    if(top!=-1)
    {for(i=0;i<=top;i++)
        printf("%d\t",stack[i]);
    }
    else
        printf("the stack is empty\n");
}
int main()
{
    int b;
    do{
        printf("enter choice 1.push\n2.pop\n3.peek\n4.count\n5.display");
        scanf("%d",&b);
        switch(b){
            case 1 : push();break;
            case 2 : pop();break;
            case 3 : peek();break;
            case 4 : count();break;
            case 5 : display();break;
        }
    }while(b!=0);
}
