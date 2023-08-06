#include<stdio.h>
#define n 5
int front=-1,rear=-1;
int dequeue[n];
void insertfront()
{
    int x;
    if(front==(rear+1)%n)
        printf("the dequeue is full\n");
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
      printf("enter element to be inserted:\n ");
      scanf("%d",&x);
      dequeue[front]=x;
    }
    else if(front==0)
    {
        front=n-1;
        printf("enter element to be inserted:\n ");
      scanf("%d",&x);
      dequeue[front]=x;

    }
    else
    {
        front--;
        printf("enter element to be inserted:\n ");
      scanf("%d",&x);
      dequeue[front]=x;
    }
}
void insertrear()
{
    int x;
    if(front==(rear+1)%n)
        printf("the dequeue is full\n");
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
      printf("enter element to be inserted:\n ");
      scanf("%d",&x);
      dequeue[rear]=x;
    }
    else if(rear==n-1)
    {
        rear=0;
        printf("enter element to be inserted:\n ");
      scanf("%d",&x);
      dequeue[rear]=x;

    }
    else
    {
        rear++;
        printf("enter element to be inserted:\n ");
      scanf("%d",&x);
      dequeue[rear]=x;
    }
}
void deletefront()
{
    int x;
    if(front==-1&&rear==-1)
        printf("the dequeue is empty\n");
    else if(front==rear)
    {
        x=dequeue[front];
        front=rear=-1;
        printf("the deleted element is %d\n",x);
    }
    else if(front==n-1)
    {
        x=dequeue[front];
        front=0;
        printf("the deleted element is %d\n",x);
    }
    else
    {
        x=dequeue[front];
        front++;
        printf("the deleted element is %d\n",x);
    }
}
void deleterear()
{
    int x;
    if(front==-1&&rear==-1)
        printf("the dequeue is empty\n");
    else if(front==rear)
    {
        x=dequeue[rear];
        front=rear=-1;
        printf("the deleted element is %d\n",x);
    }
    else if(rear==0)
    {
        x=dequeue[rear];
        rear=n-1;
        printf("the deleted element is %d\n",x);
    }
    else
    {
        x=dequeue[rear];
        rear--;
        printf("the deleted element is %d\n",x);
    }
}
void getfront()
{
    if(front==-1&&rear==-1)
        printf("the dequeue is empty\n");
    else
        printf("%d\n",dequeue[front]);
}
void getrear()
{
    if(front==-1&&rear==-1)
        printf("the dequeue is empty\n");
    else
        printf("%d\n",dequeue[rear]);
}
void display()
{
    int i;
    if(front==-1&&rear==-1)
        printf("the dequeue is empty\n");
    else
    {
        i=front;
        while(i!=rear)
        {
            printf("%d ",dequeue[i]);
            i=(i+1)%n;
        }printf("%d ",dequeue[rear]);
    }
}
int main()
{
  int a;
  printf("enter the choice 1.insertfront 2.insertrear 3.deletefront 4.deleterear 5.getfront 6.getrear 7.display 8.exit\n");
      scanf("%d",&a);
  while(1)
  {
      switch(a)
      {
          case 1 : insertfront();break;
          case 2 : insertrear();break;
          case 3 : deletefront();break;
          case 4 : deleterear();break;
          case 5 : getfront();break;
          case 6 : getrear();break;
          case 7 : display();break;
          case 8 : exit(0);
          default : printf("invalid\n");
      }
      printf("enter the choice 1.insertfront 2.insertrear 3.deletefront 4.deleterear 5.getfront 6.getrear 7.display 8.exit\n");
      scanf("%d",&a);
  }
}

