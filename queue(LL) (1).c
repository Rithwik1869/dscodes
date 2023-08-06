#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*head;
void create()
{
    struct node *temp,*nn;
    int a;
    do{
    nn=(struct node*)malloc(sizeof(struct node));
    printf("enter the data value\n");
    scanf("%d",&nn->data);
    nn->next=NULL;
    if(head==NULL)
    {
        temp=head=nn;
    }
    else
    {
        temp->next=nn;
        temp=nn;
    }
    printf("press 1 to continue\n");
    scanf("%d",&a);
    }while(a==1);
}
void enqueue()
{
    struct node *nn,*temp;
    nn=(struct node*)malloc(sizeof(struct node));
    printf("enter the data value\n");
    scanf("%d",&nn->data);
    nn->next=NULL;
    if(head==NULL)
        head=nn;
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=nn;
    }
}
void dequeue()
{
    struct node *temp;
    if(head==NULL)
        printf("the list is empty\n");
    else
    {
        temp=head;
        printf("the deleted element is %d\n",temp->data);
        head=head->next;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    if(head==NULL)
        printf("the list is empty\n");
    else
    {
        temp=head;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main()
{
    int a;
    do{
        printf("enter the choice 1.create\n2.enqueue\n3.dequeue\n4.display\n5.exit\n");
        scanf("%d",&a);
        switch(a)
        {
        case 1 : create();break;
        case 2 : enqueue();break;
        case 3 : dequeue();break;
        case 4 : display();break;
        case 5 : exit(0);
        }
    }while(1);
}
