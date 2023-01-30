#include<stdio.h>
#include<stdlib.h>
struct node
{   struct node *prev;
    int data;
    struct node *next;
}*header=NULL;
void Create(int A[],int n)
{
   struct node *temp,*p;
   header=(struct node *)malloc(sizeof(struct node));
   header->data=A[0];
   header->next=header->prev=header;
   p=header;
   for (int i = 1; i < n; i++)
   {
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=A[i];
    p->next=temp;
    temp->prev=p;
    temp->next=header;
    p=temp;
    header->prev=p;
   }
}
void Display(struct node *p)
{
    do
    {
        printf("%d ",p->data);
        p=p->next;
    } while (p!=header);
}
int Count(struct node *p)
{  int count=1;
    while (p->next!=header)
    {
        count++;
        p=p->next;
    }
    return count;
}
void Insert(int index,int key)
{   
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=key;
    temp->prev=temp->next=temp;
    if(index<0 && index>Count(header))
    {
        return ;
    }
    if(index==0)
    {
       if(header==NULL)
       {
        header=temp;
       }
       else
       {
        temp->prev=header->prev;
        (header->prev)->next=temp;
        temp->next=header;
        header->prev=temp;
        header=temp;
       }
    }
    else
    {
    struct node *p;
        p=header;
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
        p=header;
        header=header->next;
        header->prev=p->prev;
        (p->prev)->next=header;
        x=p->data;
        free(p);
    }
    else
    {
        struct node *q;
        p=header;
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
int  main()
{   int A[]={4,6,7,8,9};
    Create(A,5);
    Insert(1,100);
    Display(header);
    return 0;
}