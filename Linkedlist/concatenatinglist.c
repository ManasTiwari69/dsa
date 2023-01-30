#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*second=NULL,*third=NULL;
void Create1()
{
    int choice;
    struct node *newnode,*temp;
    //creation of a linked list
    while(choice)
    {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=temp->next;
    }
    printf("enter your choice:");
    scanf("%d",&choice);
    }
    
}
void Create2()
{
    int choice;
    struct node *newnode,*temp;
    //creation of a linked list
    while(choice)
    {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(second==NULL)
    {
        second=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=temp->next;
    }
    printf("enter your choice:");
    scanf("%d",&choice);
    }
    
}
void Display(struct node *p)
{
    while (p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void Concatenate(struct node *p)
{
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=second;
    second=NULL;
}
void Merging(struct node *first,struct node *second)
{
    struct node *last=NULL;
    if(first->data<second->data)
    {
        third=last=first;
        first=first->next;
        last->next=NULL;
    }
    else
    {
        third=last=second;
        second=second->next;
        last->next=NULL;
    }
    while(first!=NULL && second!=NULL)
    {
        if(first->data<second->data)
    {
        last->next=first;
        last=first;
        first=first->next;
        last->next=NULL;
    }
    else
    {
        last->next=second;
        last=second;
        second=second->next;
        last->next=NULL;
    }
    }
    if(first!=NULL)
    {
        last->next=first;
        last=first;
    }
    if(second!=NULL)
    {
        last->next=second;
        last=second;
    }
}
int main()
{   
    Create1();
    Display(head);
    printf("\n");
    Create2();
    Display(second);
    printf("\n");
    Merging(head,second);
    Display(third);
    return 0;
}