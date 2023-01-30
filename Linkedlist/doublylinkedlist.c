#include<stdio.h>
#include<stdlib.h>
struct node
{   struct node *prev;
    int data;
    struct node *next;
}*first=NULL;
void Create(int A[],int n)
{
    struct node *temp,*newnode;
    first=(struct node *)malloc(sizeof(struct node));
    first->prev=first->next=NULL;
    first->data=A[0];
    temp=first;
    for (int i = 1; i < n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=A[i];
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL;
        temp=newnode;
    }
}
void Display(struct node *p)
{
   while(p)
   {
    printf("%d ",p->data);
    p=p->next;
   }
}
int Count(struct node *p)
{
    int count=0;
    while(p)
    {
        count++;
        p=p->next;
    }
    return count;
}
void Insert(int index,int key)
{   struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=temp->next=NULL;
    temp->data=key;
    if(index<0 || index>Count(first))
    {
        return ;
    }
    if (index==0)
    {
        if(first==NULL)
        {   
           first=temp;
        }
        else
        {
         temp->prev=first->prev;
         temp->next=first;
         first->prev=temp;
         first=temp;   
        }
        
    }
    else
    {
        struct node *p;
        p=first;
        for (int i = 0; i < index-1; i++)
        {
            p=p->next;
        }
        temp->next=p->next;
        if(p->next)
        {
            (p->next)->prev=temp;
        }
        p->next=temp;
        temp->prev=p;
    }
}
int Delete(int index)
{
    struct node *p;
    int x;
    if(index==1)
    {
        p=first;
        first=first->next;
        first->prev=p->prev;
        x=p->data;
        free(p);
    }
    else
    {
        struct node *q;
        p=first;
        for (int i = 0; i < index-1; i++)
        {
            p=p->next;
        }
        q=p->prev;
        q->next=p->next;
        if(p->next)
        {
            (p->next)->prev=q;
        }
        x=p->data;
        free(p);
    }
    return x;
}
void Reverse()
{
    struct node *p=first;
    struct node *temp;
    while (p)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL)
        {
            first=p;
        }
    }
}
int main()
{   int A[]={4,6,7,2};
    Create(A,4);
    Insert(2,1);
    Reverse();
    Display(first);
    return 0;
}